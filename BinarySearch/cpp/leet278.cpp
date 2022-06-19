#include <iostream> 
#include <string>

using namespace std;


class Solution {
public:
    int firstBadVersion(int n) {
    int L, R, pivot;
    L = pivot = 1;
    R = n; 

    while(L<=R) {
        pivot = L + (R-L)/2;
        if(isBadVersion(pivot)) {
            if(!isBadVersion(pivot-1)) {
                return pivot;
            }
            else {
                R = pivot-1;
            }
        }
        else {
            L = pivot+1;
        }
    }
    return -1;    
    }
};