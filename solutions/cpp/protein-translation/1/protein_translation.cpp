#include "protein_translation.h"

namespace protein_translation {
    std::vector<std::string> proteins(std::string str){
          
        const std::vector<std::string> codonList{
            "AUG",
            "UUU","UUC",
            "UUA", "UUG",
            "UCU", "UCC", "UCA", "UCG",
            "UAU", "UAC",
            "UGU", "UGC",
            "UGG",
            "UAA", "UAG", "UGA"
        };

        const std::vector<std::string> proteinList{
            "Methionine",
            "Phenylalanine", "Phenylalanine",
            "Leucine", "Leucine",
            "Serine", "Serine", "Serine", "Serine",
            "Tyrosine", "Tyrosine",
            "Cysteine", "Cysteine",
            "Tryptophan",
            "STOP", "STOP", "STOP"
        };

        std::vector<std::string> detectedProteins{};
        
        for (size_t i = 0; i < str.length(); i += 3) {
            std::string codon = str.substr(i, 3);
            
            auto it = std::find(codonList.begin(), codonList.end(), codon);

            if (it != codonList.end()) {
                size_t index = std::distance(codonList.begin(), it);
                std::string protein = proteinList[index];
              
                if (protein == "STOP") {
                    break;
                }
                detectedProteins.push_back(protein);
            }
        }
        return detectedProteins;
    }
}  // namespace protein_translation
