#include "task_15.h"


int task::f(int n, int throws = 0) {
    static int sum = 0;
    if (n < 2)
        return 0;
    else if (sum >= n)
        return throws;
    else {
        sum += throws;
        f(n, throws + 1);
    }
}