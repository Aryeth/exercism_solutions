#include "high_scores.h"
#include <limits.h>


/// Return the latest score.
int32_t latest(const int32_t *scores, size_t scores_len)
{
    return scores[scores_len-1];
}

/// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len)
{
    int32_t tmp = 0;
    //finding the max score in the list
    for(size_t i = 0; i<scores_len;i++){
        if(scores[i]> tmp){
            tmp = scores[i];
        }
    }
    return tmp;
}

/// Write the highest scores to `output` (in non-ascending order).
/// Return the number of scores written.
size_t personal_top_three(const int32_t *scores, 
                          size_t scores_len,
                          int32_t *output)
{
    // Simple selection sort for top 3
    size_t count = scores_len < 3 ? scores_len : 3;

    // Copy scores so we can safely modify ->> is there a way to do without a copy ?
    int32_t sorted[scores_len];
    for (size_t i = 0; i < scores_len; i++) {
        sorted[i] = scores[i];
    }

    // Partial selection sort for top 3
    for (size_t i = 0; i < count; i++) {
        size_t max_idx = i;
        for (size_t j = i + 1; j < scores_len; j++) {
            if (sorted[j] > sorted[max_idx]) {
                max_idx = j;
            }
        }
        // Swap max to position i
        int32_t temp = sorted[i];
        sorted[i] = sorted[max_idx];
        sorted[max_idx] = temp;

        output[i] = sorted[i];
    }

    return count;
}

