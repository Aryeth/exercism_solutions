#include <string>
#include <vector>
#include <algorithm>

namespace election {

// The election result struct is already created for you:

struct ElectionResult {
    // Name of the candidate
    std::string name{};
    // Number of votes the candidate has
    int votes{};
};

// TODO: Task 1
// vote_count takes a reference to an `ElectionResult` as an argument and will
// return the number of votes in the `ElectionResult.
int vote_count(ElectionResult& res){
    return res.votes;
}


// TODO: Task 2
// increment_vote_count takes a reference to an `ElectionResult` as an argument
// and a number of votes (int), and will increment the `ElectionResult` by that
// number of votes.
void increment_vote_count(ElectionResult& res, int add){
    res.votes += add;
}


ElectionResult& determine_result(std::vector<ElectionResult>& candidates) {
    ElectionResult* winner = &candidates[0];

    for (auto& candidate : candidates) {
        if (candidate.votes > winner->votes) {
            winner = &candidate; 
        }
    }

    winner->name = "President " + winner->name;

    return *winner;
}



}  // namespace election