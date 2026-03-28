#include<iostream>
#include<vector>
using namespace std;

vector<int> move_zeroes(vector<int> &nums) {
    int n = nums.size();
    int slow = 0; // The "Writer" index

    // The "Explorer" goes through every element
    for (int fast = 0; fast < n; fast++) {
        // If we find a non-zero element
        if (nums[fast] != 0) {
            // Swap it with the "Writer" position
            swap(nums[slow], nums[fast]);
            // Move the "Writer" forward
            slow++;
        }
    }
    return nums;
}

int main(){
    vector<int> A = {0,1,0,3,12};
    vector<int> result = move_zeroes(A);
    for(auto x : result){
        cout<<x<<" ";
    }
    return 0;
}