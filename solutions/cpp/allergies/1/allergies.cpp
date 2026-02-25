#include "allergies.h"

namespace allergies {

    // Constructor to initialize allergies based on the score
    jonDoe::jonDoe(int score) {
        AllergyScore = score;
        /*
            looked this up with chatgpt because i didnt know how to do it myself :/
            1<<[NUM_ALLERGIES] -> shifts a bit into the position (i.e. EGGS pos = 0)
            hence a bit mask 00000001
            Then does a bit-wise operation on score (let's say our score is 00010001)
            So it would look like this :
                00000001
             &  00010001
             -----------
                00000001 -> true
            then sets the boolean at the position [EGGS] to true.
            it will then check for the other bits with  the same operations.
        */
        allergies = std::vector<bool>(NUM_ALLERGIES, false);
        if (score & (1 << EGGS)) allergies[EGGS] = true;
        if (score & (1 << PEANUTS)) allergies[PEANUTS] = true;
        if (score & (1 << SHELLFISH)) allergies[SHELLFISH] = true;
        if (score & (1 << STRAWBERRIES)) allergies[STRAWBERRIES] = true;
        if (score & (1 << TOMATOES)) allergies[TOMATOES] = true;
        if (score & (1 << CHOCOLATE)) allergies[CHOCOLATE] = true;
        if (score & (1 << POLLEN)) allergies[POLLEN] = true;
        if (score & (1 << CATS)) allergies[CATS] = true;
    }
    // getter
    int jonDoe::getScore() {
        return AllergyScore;
    }
    // Check if allergic to a specific item
    bool jonDoe::is_allergic_to(const std::string& s) {
        if (s == "eggs") return allergies[EGGS];
        if (s == "peanuts") return allergies[PEANUTS];
        if (s == "shellfish") return allergies[SHELLFISH];
        if (s == "strawberries") return allergies[STRAWBERRIES];
        if (s == "tomatoes") return allergies[TOMATOES];
        if (s == "chocolate") return allergies[CHOCOLATE];
        if (s == "pollen") return allergies[POLLEN];
        if (s == "cats") return allergies[CATS];
        return false;
    }

    // creates unordered set of strings, inserts corresponding allergies and returns it
    std::unordered_set<std::string> jonDoe::get_allergies() {
        std::unordered_set<std::string> allergic_to;

        if (allergies[EGGS]) allergic_to.insert("eggs");
        if (allergies[PEANUTS]) allergic_to.insert("peanuts");
        if (allergies[SHELLFISH]) allergic_to.insert("shellfish");
        if (allergies[STRAWBERRIES]) allergic_to.insert("strawberries");
        if (allergies[TOMATOES]) allergic_to.insert("tomatoes");
        if (allergies[CHOCOLATE]) allergic_to.insert("chocolate");
        if (allergies[POLLEN]) allergic_to.insert("pollen");
        if (allergies[CATS]) allergic_to.insert("cats");

        return allergic_to;
    }

    jonDoe allergy_test(int score) {
        return jonDoe(score);
    }

}  // namespace allergies
