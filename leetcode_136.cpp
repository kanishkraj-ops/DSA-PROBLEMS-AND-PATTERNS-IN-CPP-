#include<iostream>
#include<vector>
using namespace std;

int singlenum(vector<int>& vec){
    int num = 0;
    for(auto x : vec){
        num = num xor x ;
    }
    return num;
}


int main(){
    vector<int> A = {4,4,5,8,2,2,8};
    cout<<singlenum(A);
}