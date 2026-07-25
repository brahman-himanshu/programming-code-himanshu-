
// n time name print 

// #include<iostream>
// using namespace std;
// void fun(int i , int n ){
//     if(i>n)
//     return ;
//     cout<< " kartik "<< " ";
//     fun(i+1,n);
// }
// int main (){
//     int n ;
//     cin>>n;
//     fun(1,n);
// }



// agar hame 1 to n tak recursion mein print karana ho toh ham fun ke pehle print karenge agar 
// badme kara ya next line mein kara toh woh reverse mein ya n to 1 print hoga 


// #include<iostream>
// using namespace std ;
// void fun(int i,int n){
//     if (i>n)
//     {
//      return ;   /* code */
//     }
//     cout<<i<< " "; 
//     fun(i+1,n);
// }
// int main(){
//     int n ;
// cin>>n;
// fun(1,n);
// }

// n to 1 

// #include<iostream>
// using namespace std ;
// void fun(int i,int n){
//     if (i>n)
//     {
//      return ;   /* code */
//     }
    
//     fun(i+1,n);
//     cout<<i<< " "; 
// }
// int main(){
//     int n ;
// cin>>n;
// fun(1,n);
// }

// sum n number 

// #include<iostream>
// using namespace std;

// void fun(int i , int n ,int sum ){
//     if (i>n)
//     {
//         cout<<"sum "<< sum ;
//     return ;   /* code */
//     }

//      fun(i + 1, n, sum + i);

    
// }
// int main (){
//     int sum ,n;
//     cout<< "enter the n number for the sum of n num " ;
//     cin>>n;
// fun(1,n,0);
// }


// reverse of array 

#include<iostream>
using namespace std ;

void fun(int i , int arr[], int n ){

if (i>=n/2)
{
    return ;
}

  swap(arr[i], arr[n-i-1]);

    fun(i+1, arr, n);


}
int main(){
    int n ;
    cout<< "enter the numbr of n " ;
    cin>>n;
     int arr[n];
for (int  i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (int i =0 ; i <n ;i++){
    cout<<arr[i];
}

fun(0,arr ,n);


}