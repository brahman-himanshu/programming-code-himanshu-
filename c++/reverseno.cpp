#include <iostream>

int main() {
    int n ;
    std::cout<< "enter the value of n "<< std::endl ;
    std::cin >> n ;
    int r = 0 ;
while (n!=0){
    int ld =n%10;
    r=r*10 ;

    r=r+ld; 
    n/=10;
}

    std::cout <<r<< std::endl ; 


    return 0;
}