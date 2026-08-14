#include<iostream>
using namespace std ;
int main (){
    int k ;
    cout<< "enter the k for longest subarray sum of k " << " ";
    cin >> k ; 

int n ; 
cout << "enter the value of n "<< " ";
cin >> n ;  

int arr [n] ;
cout<< "enter the array " << " ";
for (int i = 0; i < n; i++)
{
    cin>> arr[i]; 
}

int len = 0 ;
for(int i = 0 ; i < n ; i++ ){
int sum = 0 ;
for (int j = i; j <n; j++)
{
   sum +=arr[j];
   if(sum==k)
    len = max(len,j-i+1); 
}
}

cout<<"length is "<<  len << " ";
return 0 ; 
}