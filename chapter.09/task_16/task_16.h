#if !defined(TASK_16_H)
#define TASK_16_H

#include <iostream>
#include <vector>

using namespace std;

/*
Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.
*/
using namespace std;

namespace task {
     void createEmptyBoard(vector<bool>&, int);
     
     bool solve(vector<bool>&);
}
#endif