#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"ENTER THE NUMBER:";
    cin>>n;
    int m = n;
    while(m>0){
        int r = m%10;
        m /= 10;
        sum += r*r*r;
    }
    if(sum == n){
        cout<<"THE NUMBER IS ARMSTRONG NUMBER"<<endl;
    }
    else{
        cout<<"THE NUMBER IS NOT ARMSTRONG NUMBER"<<endl;
    }
    return 0;
}