#include <stdio.h>

int main() {
    unsigned int a =2  ;
    unsigned int b = 2;  

    // Bitwise AND
    unsigned int and_result = a & b;  
    printf("a & b = %u\n", and_result);

    // Bitwise OR
    unsigned int or_result = a | b;   
    printf("a | b = %u\n", or_result);

    // Bitwise XOR
    unsigned int xor_result = a ^ b;  
    printf("a ^ b = %u\n", xor_result);

    // Bitwise NOT
      unsigned int not_result = ~a;    
    printf("~a = %u\n", not_result);

    // Left Shift
    unsigned int left_shift_result = a << 1; 
    printf("a << 1 = %u\n", left_shift_result);

    // Right Shift
    unsigned int right_shift_result = b >> 1; 
    printf("b >> 1 = %u\n", right_shift_result);

    return 0;
}