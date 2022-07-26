#include <regex> 

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int i = 0; 
        int j = 0; 
        int count = 0; 
        string buffer = to_string(num); 
        string window = "";
        int k_num = 0;
        while(j<buffer.size()){
            window+=buffer[j]; 
            if(j-i+1 == k){
                int k_num = stoi(window);
                if(k_num!=0 && num%k_num == 0){
                    count++;
                }
                i++; 
                j = i; 
                window = "";
            }
            else {
                j++; 
            }
        }
        return count;
    }
};