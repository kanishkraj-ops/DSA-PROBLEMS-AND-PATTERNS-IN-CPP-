#include<iostream>
#include<vector>
using namespace std;

vector<int> two_sum(vector<int> nums,int target){
    int n = nums.size();
    int lf = 0;
    int rt = n-1;
    while(lf < rt){
        int sum = nums[lf] + nums[rt];
        if(sum == target){
            return {lf,rt};
        }else if(sum < target){
            lf++;
        }else{
            rt--;
        }
    }
    return {};
}

int main(){
    vector<int> A = {2,7,11,15};
    vector<int> result = two_sum(A,13);
    for(auto x : result){
        cout<<x<<" ";
    }
    return 0;
}