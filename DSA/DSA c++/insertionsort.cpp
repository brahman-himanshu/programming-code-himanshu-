#include<iostream>
using namespace std ;
int main (){

int n ;
 cout <<"enter the size of array "<<endl;
 cin >>n ;

 int arr[n];
 cout<<"enter the array "<< endl;
for (int i = 0; i < n; i++)
{
   cin>>arr[i];
}

// insertion sort 
for (int  i = 0; i < n-1; i++)
{
    int j=i;
    while (j>0&&arr[j-1] > arr[j])
    {
       swap(arr[j],arr[j-1]);
    }
    j--;
}



//print

for (int i = 0; i < n; i++)
{
cout<<arr[i];
}


    return 0 ;
}