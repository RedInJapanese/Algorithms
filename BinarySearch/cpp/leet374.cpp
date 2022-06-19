#include <iostream> 
#include <string> 

using namespace std;

int main(void) {
    cout << "peepeepoopoo." << endl;
    return 0;
}

class Solution {
public:
    int guessNumber(int n) {
        int L, R, pivot; 
        L = pivot = 1;
        R = n;
        
        while(L<=R) {
            pivot = L + (R-L)/2;
            if(guess(pivot) == 0) {
                return pivot; 
            }
            if(guess(pivot) == -1) {
                R= pivot-1;
            }
            else {
                L = pivot+1;
            }
        }
        return R;
    }
};