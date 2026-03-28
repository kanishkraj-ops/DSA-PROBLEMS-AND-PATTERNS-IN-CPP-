#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// If you want a function that returns a vector, 
// define it separately from main!
vector<int> getUniqueElements(vector<int> vec) {
    vector<int> updated;
    unordered_map<int, int> freq;

    for(auto x : vec) {
        freq[x]++;
    }

    for(auto [key,value] : freq) {
        updated.push_back(key);
    }
    return updated;
}

int main() {
    vector<int> vec = {1, 2, 1, 1};
    
    vector<int> result = getUniqueElements(vec);

    // Printing the result to see it worked
    cout << "Unique elements: ";
    for(int n : result) {
        cout << n << " ";
    }
    cout<<result.size();
    cout << endl;

    return 0; // Main must return an int
}