#include<iostream>
using namespace std ;
int  fun(int n){
    if(n<=1){
        return  ;
    }
   int  last= fun(n-1);
     int slast=fun(n-2);
    return last + slast ;
}
int main (){
    int n ;
    cout<<"enter the n numbr of fibonacci " ;
    cin>>n;
    fun(n) ;

}