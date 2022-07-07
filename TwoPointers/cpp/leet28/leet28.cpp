#include <iostream> 
#include <string> 

using namespace std;

int main(void) {
    cout << "test" << endl;
}

int strStr(string haystack, string needle) {
    int size = haystack.length();
    int nsize = needle.length();
        
    for(int i = 0; i<size +1 - nsize; ++i) {
        for(int j = 0; j<nsize; ++j){
            if(haystack[i+j] != needle[j]){
                break;
            }
            if(j == nsize-1){
                return i;
            }
        }
    }
    return -1;
}