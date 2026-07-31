#include<iostream>
#include <unordered_map>
using namespace std ;
int main (){
    int n ;
    cout<< "enter the value of n for enter the size of the array "<< endl;
    cin >> n ;
    int arr[n];
    cout<<"enter the array "<<endl;
    for (int i =0 ;i<n ; i++ ){
        cin>> arr[i];
    }
  unordered_map<int , int > mpp ;
  for (int i=0;i<n;i++){
    mpp[arr[i]]++ ;
  }


  

  int q;
  cout<<"enter the queries "<<endl;
  cin >>q;
  while(q--){
    int number;
    cout<<"enter the number "<<endl;
    cin>>number;
    cout<<mpp[number];
  }
    return 0 ;
}