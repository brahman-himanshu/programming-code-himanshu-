#include <iostream>

int main() {
    int n ;
    std::cout<< "enter the value of n "<< std::endl ;
    std::cin >> n ;
    int count = 0 ;
while (n!=0){
    n=n/10;
    count++ ; 
}

    std::cout <<count<< std::endl ; 


    return 0;
}

