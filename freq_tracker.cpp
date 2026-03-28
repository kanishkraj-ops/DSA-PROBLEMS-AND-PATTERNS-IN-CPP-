#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<char,int> freq;
    string A = "hello world";
    for(auto x : A){
        freq[x]++;
    }

    for(auto& [key,value] : freq){
        cout<<key<<" "<<value<<endl;
    }
    return 0;

}
