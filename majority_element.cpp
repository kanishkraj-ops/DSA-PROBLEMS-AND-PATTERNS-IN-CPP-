#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int majorityElement(vector<int>& nums){
    int n = nums.size();
    unordered_map<int,int> freq;
    for(auto x : nums){
        freq[x]++;
    }

    for(auto const& [key,val] : freq){
        if(val > n/2){
            return key;
        }
    }
    return -1;

}

int main(){
    vector<int> num = {2,2,3,3};
    cout<<majorityElement(num);
    return 0;
}