#include<iostream>
using namespace std;

int main(){
    int n,rev = 0;
    cout<<"ENTER THE NUMBER:";
    cin>>n;
    int m = n;
    while(m>0){
        int r = m %10;
        m/= 10;
        rev = rev*10 + r;
    }
    if(rev == n){
        cout<<"palindrome";
    }
    else{
        cout<<"not";
    }
    return 0;
}

