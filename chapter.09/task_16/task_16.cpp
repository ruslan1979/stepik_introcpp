#include "task_16.h"



//bool task::solve(vector<bool>& array){
//    return false;
//}

int nSolutions = 0;

vector<int> queens;

void solve(int n = 0, int size, vector<int> &chesses) {
    if (n >= size) {
        nSolutions++;
        return;
    }
    
    for (int r = 0, c; r != size; ++r) {
        for (c = 0; c != n; ++c) {
            if ( chess[c] == r || Math.abs(chess[c] - r) == n - c )
                break;                
        }
        
        if (c == n) {
            chesses[n] = r;
            solve(n+1, size, chess);
        }
    }
}
