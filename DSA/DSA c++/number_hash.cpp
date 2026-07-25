#include<iostream>
using namespace std ;
int main (){
    int n ;
    cin >> n ;
    int arr[n];
    // print array 
    for (int i =0 ; i<n;i++){
        cin>>arr[i];
    }
  
//  precompute 
int hasharr[13]={0};
for (int  i = 0; i < n; i++)
{
  hasharr[arr[i]]+=1;
}
int q ;
cin>>q;
while(q--){
    int number ;
    cin>>number ;
      // Print frequency
        cout << hasharr[number] << endl;
    }

return 0; 
}