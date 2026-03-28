//A Pangram is a sentence that contains every 
//letter of the alphabet at least once 
//(e.g., "The quick brown fox jumps over the lazy dog").

// Your Goal:
// Write a function that takes a string and 
//returns true if it's a pangram, and false otherwise.

#include<iostream>
#include<unordered_map>
using namespace std;

bool pangram(string STRING) {
    unordered_map<char, int> check;
    for(auto x : STRING){
        char lowerX = tolower(x);
        if(lowerX >= 'a' and lowerX<='z'){
            check[lowerX]++;
        }
    }
    return (check.size()==26);
}

int main(){
    string A = "The quick brown fox jumps over the lazy dog";
    cout<<pangram(A);
    return 0;
}