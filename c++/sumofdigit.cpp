#include <iostream>

int main() {
    int n ;
    std::cout<< "enter the value of n "<< std::endl ;
    std::cin >> n ;
    int sum = 0 ;
while (n!=0){
    int ld =n%10;
    n=n/10 ;
    sum=sum+ld; 
}

    std::cout <<sum<< std::endl ; 


    return 0;
}