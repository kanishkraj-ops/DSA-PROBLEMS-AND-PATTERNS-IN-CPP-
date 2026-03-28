#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec = {1,-1,0,3,7,-22};
    sort(vec.begin(), vec.end());  // ascending order

    int n = vec.size();
    int lf = 0;
    int rt = n-1;

    for(int i = 0;i<n;i++){
        int sum = vec[lf] + vec[rt];
        if(sum == -vec[i]){
            return {i,lf,rt};
        }else if()
    }
    
}