#include<iostream>
using namespace std;

void print_addr(int var){
    cout<< & var;
    // & :- address of operand ,
    //prints the memory location where this var is stored

}

int main(){
    int b = 456;
    cout<<"Addr of b is "<<&b<<endl;

    int *ptr = &b;
    cout<<"value of ptr is "<< ptr<<endl;

    cout<< "Addr of ptr "<<&ptr<<endl;

    cout<<"Dereferncing ptr "<<*ptr<<endl;
    //pointer to pointer
    int **ptr2 = &ptr;
    cout<<"Value of ptr2 "<<ptr2<<endl;

    cout<<"Addr of ptr2 "<<&ptr2<<endl;

    cout<<"Dereferncing ptr2 "<<*ptr2<<endl;

    cout<<"Dereferncing ptr2 again "<<**ptr2<<endl;

    //null ptr
    int* ptr3 = NULL;
    cout<<ptr3<<endl;
    //dereferencing of nullptr isnt possible

    //another way of creating null pointer
    int *ptr4 = nullptr;
    cout<<ptr4<<endl;

    int &c = b; //alising used for pass by ref
    cout<< bool(&c == &b);
}