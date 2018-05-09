#include "task_15_16.h"

string task::isQueenTaking(int *x, int *y, int size) {        
    for (int i = 0; i != size; ++i){
        for (int j = 0; j != size; ++j) {
            if (
                    (abs(*(x + i) - *(x + j)) == abs(*(y + i) - *(y + j)) ||
                    (*(x + i) == *(x + j) || *(y + i) == *(y + j))) &&
                    (i != j)
                )
                return "YES";
        }
    }
    
    return "NO";
}