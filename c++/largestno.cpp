#include<iostream>
int main (){
    int  a , b , c;
    std::cout<< "enter the value of a = "<<std::endl;
    std::cin >> a ;
     std::cout<< "enter the value of b = "<<std::endl;
    std::cin >> b ;
        std::cout<< "enter the value of c = "<<std::endl;
    std::cin >> c ;
    if(a>b && a>c){
       std::cout<< " a is the greatest no among three no "  << std::endl;

    }
    else if ( b>a && b<c ){
std::cout<< " b is the greatest no among three no "  << std::endl;
    }
    else {
        std::cout<< "c is the greatest no "<< std::endl ; 
    }
    return 0 ;
}