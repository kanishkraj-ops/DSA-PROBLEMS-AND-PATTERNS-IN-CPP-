#include<iostream>
using namespace std;

bool canBeEqual(string s1, string s2) {
        // Check if even positions can match (0 and 2)
        bool evenMatch = (s1[0] == s2[0] && s1[2] == s2[2]) || 
                         (s1[0] == s2[2] && s1[2] == s2[0]);
        
        // Check if odd positions can match (1 and 3)
        bool oddMatch = (s1[1] == s2[1] && s1[3] == s2[3]) || 
                        (s1[1] == s2[3] && s1[3] == s2[1]);
        
        return evenMatch && oddMatch;
}

int main(){
    string s1 = "abcd";
    string s2 = "dacb";
    cout<<canBeEqual(s1,s2);
    return 0;

}