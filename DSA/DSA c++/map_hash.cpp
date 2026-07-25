#include<iostream>
#include<map>
using namespace std ;
int main (){
    int n ;
    cout<<"enter the n number for declaring array size " << endl;
    cin >> n ;
    int arr[n];
    cout<<"entert the array " << endl ;
    for (int i =0 ;i<n ; i++ ){
        cin >> arr[i];
    }
     
    // map function 
    map<int , int > mpp ;
    for (int i =0 ; i<n ;i++ ){
        mpp[arr[i]]++;
    }
    int q ;
    cout<< "enter the number for the queries " ;
    cin >> q;
    while(q--){
        int number ;
        cout<<"enter the number ";
        cin>>number;
        cout<< mpp[number ] << endl ;
    }
    return 0 ;
}