#include <iostream> 
#include <string> 

using namespace std; 

int main(void) {
    cout << "nice." << endl;
    return 0;
}

class Solution {
public:
    int mySqrt(int x) {
        int L, R, pivot;
        L = pivot = 1; 
        R = x;
        
        while(L<=R) {
            pivot = L + (R-L)/2;
            if((x/pivot) == pivot) {
                return pivot;
            }
            else if((x/pivot)<pivot) {
                R = pivot -1;
            }
            else {
                L = pivot + 1;
            }
        }
        return R;
    }
};