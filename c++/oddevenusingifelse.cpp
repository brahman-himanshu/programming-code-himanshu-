#include<iostream>
int main (){
  int n ;
  std::cout<< "enter the value of n = " << std::endl ;
    std::cin >> n ; 
    std::cout<< "value of n is = "<< n << std::endl  ;
    if (n%2 == 0){
        std::cout<<"value = " << n  << "even " << std::endl ;
    }
    else{
        std::cout<< "value is odd " << std::endl ; 
    }
    return 0 ;
}