#include<iostream>
using namespace  std;

void swap(int &x , int &y ){
    int temp = x ;
    x=y;
    y=temp;

}
int main (){
    int x=8;
    int y = 9;
  std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
     return 0 ;
} 