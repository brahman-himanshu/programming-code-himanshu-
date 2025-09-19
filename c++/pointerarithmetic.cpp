#include<iostream>
using namespace std;
int main (){
    int num[]={1,2,3,4,5};
    int *ptr = num ;
    int i ;
    for(i=0;i<5;i++){
         cout << "Value: " << *(ptr + i) << endl;       // or num[i]
        cout << "Address: " << (ptr + i) << endl;      // address of current element
    }
}

