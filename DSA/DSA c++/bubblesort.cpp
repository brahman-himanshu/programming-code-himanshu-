#include<iostream>
using namespace std ;
int main (){
int n ;
cout<< "enter the size of array ";
cin >>n;
int arr[n];
cout << "enter the array ";
for (int i =0 ;i <n ;i++){
cin>>arr[i];
}

//sorting 
for(int i =0 ;i<n-1;i++){
    for (int j=0;j<n-i-1;j++){
        if (arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        
    }
}

cout<<"sorted array ";
for(int i =0 ; i<n;i++){
    cout<<arr[i];
}
    return 0 ;
}