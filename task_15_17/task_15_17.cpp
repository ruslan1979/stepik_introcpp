#include "task_15_17.h"

string task::getRemainedPins(int *data) {
    string result;
    int n = *data; //quantity of pins
    int k = *(data + 1); //quantity of hits
    
    vector<int> pins;
    for (int i = 0; i != n; ++i)
        pins.push_back(i + 1)   ; 
        
    for (int i = 0; i != k; ++i) {
        int l = *(data + 2 + i * 2);
        int r = *(data + 3 + i * 2);
                
        while (l <= r) {
            pins.at(l - 1) = 0;
            l++;
        }
    }
    
    for (int i = 0; i != n; ++i)
        result += (pins.at(i) != 0) ? "I" : ".";
    
    return result;
}
