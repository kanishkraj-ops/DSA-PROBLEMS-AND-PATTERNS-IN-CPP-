// Given a string (e.g., "leetcode"), find the index of the first character that does not repeat.
// Input: "leetcode"
// Output: 0 (because 'l' only appears once and is at index 0).
// Input: "loveleetcode"
// Output: 2 (because 'v' is the first non-repeating character).
// Hint: You'll need two passes through the string.
// One pass to fill your frequency map.
// A second pass to check each character's frequency in the map in the order they appear in the string.

#include<iostream>
#include<unordered_map>
using namespace std;

int unique_element(string word){
    unordered_map<char,int> freq;
    for(auto x : word){
        char lowerx = tolower(x);
        freq[lowerx]++;
    }

    for(int i = 0; i < word.length(); i++) {
        char lowerx = tolower(word[i]);
        if(freq[lowerx]==1){
            return i;
        }
    }
    return -1;
}

int main(){
    string A = "hi";
    cout<<unique_element(A);
    return 0;
}