#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> seen;
    vector<int> result;

    // 1. Fill the map with numbers from nums1
    for(auto x : nums1) {
        seen[x] = 1; // We just need to know it EXISTS
    }

    // 2. Check numbers in nums2 against our "seen" map
    for(auto x : nums2) {
        // If x is in the map, it's an intersection!
        if(seen.find(x) != seen.end()) {
            result.push_back(x);
            // 3. IMPORTANT: Remove it from the map so we don't 
            // add it again if nums2 has duplicates of x.
            seen.erase(x); 
        }
    }
    
    return result;
}

int main(){
    vector<int> A = {4,9,8,5};
    vector<int> B = {4,9,8,6,7};
    vector<int> result = intersection(A,B);
    for(auto x : result){
        cout<<x;
    }
    
    return 0;
}