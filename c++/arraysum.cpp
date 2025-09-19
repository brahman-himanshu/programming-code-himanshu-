#include<iostream>
using namespace std;
int main (){
    int arr1[3];
    int arr2[3];
    int arr3[3];
    int i ;
    cout<<"enter the element of array 1 = "<< endl;
    for ( i = 0; i < 3; i++)
    {
        cin>>arr1[i];
    }
    cout <<"enter the element of array 2 = "<<endl;
    for ( i = 0; i < 3; i++)
    {
       cin>>arr2[i];
    }
   // Add corresponding elements
    for (int i = 0; i < 3; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }

   cout<<"print the sum of two array is "<< endl;
    for ( i = 0; i < 3; i++)

    {
        cout <<arr3[i]<<endl;
    }
    
    
    return 0 ;

}