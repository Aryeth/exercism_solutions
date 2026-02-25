#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>
#include <vector>
#include <unordered_set>

namespace allergies {

    // Define the number of allergies
    #define NUM_ALLERGIES 8

    // Enum to map allergies to indices
    enum AllergyType {
        EGGS = 0,
        PEANUTS = 1,
        SHELLFISH = 2,
        STRAWBERRIES = 3,
        TOMATOES = 4,
        CHOCOLATE = 5,
        POLLEN = 6,
        CATS = 7
    };
    
    // Declaration of the jonDoe class
    class jonDoe {
    public:
        // Vector to store allergies (true means allergic)
        std::vector<bool> allergies;

        // Constructor to initialize allergies based on the score
        jonDoe(int score);

        // Function to return the allergy score
        int getScore();

        // Function to check if allergic to a specific item
        bool is_allergic_to(const std::string& s);

        // Function to return a list of allergies
        std::unordered_set<std::string> get_allergies();

    private:
        int AllergyScore;  // Allergy score
    };

    // Function to test allergies based on the score
    jonDoe allergy_test(int score);
    
}  // namespace allergies

#endif // ALLERGIES_H
