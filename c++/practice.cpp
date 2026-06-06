
//input n number

// #include<iostream>
// using namespace std;
// int main (){
//     int n ;
//     cin >> n;
//     cout<<"n = "<<n<<endl;
// }

//input n number and print 

// #include<iostream>
// using namespace std;
// int main (){
//     int n ;
//     cin>>n;
//     for(int i =0; i<n;i++){
//         cout<<i<<endl;
//     }
// }

//input array 
 
#include<iostream>
using namespace std;
int main (){
    int i,n;
    cin>>n;
    cout<<"n = "<<n<<endl;
   int  arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<" arr["<<i<<"] = "<< arr[i] <<endl;
    }
    return 0 ;
}