#include<iostream>
using  namespace std;
int main (){
    int a = 8 ;
    int *ptr;
    ptr=&a;
    // * is a dereference operator in pointer and asterik point to the pointer and in coding pointer hold the highest priority 
    // *ptr hold the value of address of ptr 
    cout<<"the value of a is = "<< *ptr << endl;
    // ptr hold the address of the a 
    cout<< " the address  of a is = "<< ptr<<endl;
    cout << " the value of a is  direct of variable is = "<< a<<endl;
    return 0 ;
}