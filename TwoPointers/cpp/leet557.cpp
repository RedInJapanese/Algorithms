#include <iostream> 
#include <string> 

using namespace std;


string reverseWords(string s);
string revWord(string s);

int main(void){
    cout << "test" << endl;
    return 0;
}

string reverseWords(string s) {
    string result = "";
    string buffer = "";
    int m = 0;
    int i;
    for(i = 0; i<s.size();++i){
        if(s[i] == ' '){
            buffer = s.substr(m,i-m);
            buffer = revWord(buffer);
            result+=buffer; 
            result+=" ";
            m = i+1;
        }
    }
    buffer = s.substr(m, i-m);
    buffer = revWord(buffer);
    result+=buffer; 
    return result;
}
    
string revWord(string s){
    int i = 0; 
    int j = s.size()-1; 
    while(i<j){
        char temp = s[i]; 
        s[i] = s[j]; 
        s[j] = temp; 
        i++;
        j--;
    }
    return s;
}