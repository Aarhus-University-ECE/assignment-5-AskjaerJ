#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>

/*post: answer to exercise 7.a*/
int isJollyJumber(const int seq[], int size) {
    bool diffs_found[size]; 
    diffs_found[0] = true;
    for(int i = 1; i < size; i++) { /* All indexs in diffs_found set to false. */
        diffs_found[i] = false;
    }
    for(int i = 0; i < size-1; i++) { /* Calculates the differences between the sequences, to check if it is a jolly jumper. */
        int n = seq[i]-seq[i+1];
        if(abs(n) >= size) /* Checks if one gap is larger than the size of the array, if yes it is not a jolly jumper. */
            return false;
        diffs_found[abs(n)] = true;
    }
    for(int i = 0; i < size; i++) { /* Checks if it is a jolly jumper. */
        if(!diffs_found[i]) {
            return false;
        }
    }
    return true;
}

