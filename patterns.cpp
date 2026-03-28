#include <iostream>
using namespace std;

void lefttri(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void numsquare(int n, char ch = '\0', int count = 0) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(ch != '\0') {
                cout << char(ch + j) << " ";
            } else if(count > 0) {
                cout << count++ << " ";
            } else {
                cout << j + 1 << " ";
            }
        }
        cout << endl;
    }
}

void numtri(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}

void numtri2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
void numtri3(int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}

void floydstri(int n){
    int count =1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<count++;
        }
        cout<<endl;
    }
}

void inverted_tri(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(i<j){
                cout<<" ";
            }else{
                cout<<i+1;
            }
        }
        cout<<endl;
    }
}



int main() {
    inverted_tri(4);
    return 0;
}