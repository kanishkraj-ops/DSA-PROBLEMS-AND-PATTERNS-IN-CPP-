#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    vector<int> A = {1,4,5,1,1,3,3};
    unordered_map<int,int> freq;

    for(auto x : A){
        freq[x]++;
    }
    
    for(auto& [key,val] : freq){
        if(freq[key]==1){
            cout<<key<<endl;
        }
    }


}