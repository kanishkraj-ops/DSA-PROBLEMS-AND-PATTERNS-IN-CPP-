#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        arr[i] = i*i;
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<arr[4]<<endl;
    return 0;
}