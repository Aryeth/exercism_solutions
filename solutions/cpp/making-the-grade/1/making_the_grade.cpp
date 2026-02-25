#include <array>
#include <string>
#include <vector>

constexpr int minGrade = 41;
constexpr int maxGrade = 100;
constexpr int failGrade = 40;

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> toReturn;
    for(int c=0; c<student_scores.size();c++){
        toReturn.push_back(static_cast<int>(student_scores[c]));
    }
    return toReturn;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int failed=0;
    for(int c=0; c<student_scores.size();c++){
        if(student_scores[c]<=failGrade){failed++;};
    }
    return failed;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    std::vector<int> toReturn;
    for(int c=0; c<student_scores.size();c++){
        if(student_scores[c]>=threshold){toReturn.push_back(static_cast<int>(student_scores[c]));}
    }
    return toReturn;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int interval = (highest_score-failGrade)/4;
    std::array<int,4> toReturn;
    for(int c = 0; c<toReturn.size(); c++){
        toReturn[c]=minGrade+c*interval;
    }
    return toReturn;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> toReturn;
    for(int c=0; c<student_scores.size();c++){
        toReturn.push_back(std::to_string(c+1) + ". " + student_names[c] + ": " + std::to_string(student_scores[c]));
    }
    return toReturn;
}

// Returns student name with 100 score, or "" if doesnt exist.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    for(int c=0; c<student_scores.size();c++){
        if(student_scores[c]==maxGrade){
            return student_names[c];
        }
    }
    return "";
}
