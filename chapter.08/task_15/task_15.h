#if !defined(TASK_15_H)
#define TASK_15_H

#include <iomanip>
#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.

Sample Input:

4 5

Sample Output:

   1   2   3   4   5
  14  15  16  17   6
  13  20  19  18   7
  12  11  10   9   8
*/
using namespace std;

namespace task {
    string getMatrix(int, int);
}
#endif