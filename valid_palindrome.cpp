#include<iostream>
#include<vector>
using namespace std;

bool valid_palindrome(string s){
    int n = s.length();
    //create a left pointer
    int lf = 0;
    //create a right pointer
    int rt = n-1;
    //the loop should run while left < right
    while(lf <= rt){
        //now the logic should be like this 
        //check whether the char is alphanum or not
        //if not inc dec accordingly
        //then check for whether they are not equal
        //if evey condition fails return true ie palindrome
        if(!isalnum(s[lf])){
            lf++;
        }else if(!isalnum(s[rt])){
            rt--;
        }else{
            if(tolower(s[lf]) != tolower(s[rt])){
                return false;
            }
            rt--;
            lf++;
        }
    }
    return true;
}

int main(){
    string a =  "A man, a plan, a canal: Panama";
    cout<<valid_palindrome(a);
    return 0;
}