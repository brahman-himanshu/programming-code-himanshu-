#include <iostream>

int main() {
    for (int i =0 ; i<10 ; i++ ){
if (i%2==0){
    std::cout<< "even " << i << std::endl ; 
}
else {
    std::cout<<"odd "<< i << std::endl ; 
}
    }

    return 0;
}