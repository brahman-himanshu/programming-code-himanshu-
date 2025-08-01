#include<iostream>
int main (){
    int  a , b ;
    char ch ;
    std::cout<< "enter the value of a = "<<std::endl;
    std::cin >> a ;
     std::cout<< "enter the value of b = "<<std::endl;
    std::cin >> b ;
        std::cout<< "enter the operation of (+ , * , - ) = "<<std::endl;
    std::cin >> ch ;
     switch ( ch ){
     case '+' :
        std::cout<< a+ b <<std::endl;
        break;
      case '-' :
        std::cout<<  a-b <<std::endl;
        break;
      case '*' :
        std::cout<<  a* b <<std::endl;
        break;
      case '/' :
        std::cout<< a/ b <<std::endl;
        break;
     
     default:
     
        std::cout<< "please enter the valid operation  " <<std::endl;
    
     
        break;
     }
    return 0 ;
}