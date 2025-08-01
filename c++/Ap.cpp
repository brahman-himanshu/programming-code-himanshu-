#include <iostream>

int main() {
    int n ;
    std::cout<< "enter the value of n "<< std::endl ;
    std::cin >> n ;
    for (int i =1 ; i<2*n-1 ; i+=2 ){

    std::cout << i << std::endl ; 

    }
    return 0;
}


// formula of ap is an= a+(n-1)d ;