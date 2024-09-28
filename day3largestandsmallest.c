#include <stdio.h>
int main() {
    
    int array_size;
    int arr[] = {2,5,9,8,6,7};
    
    array_size= sizeof(arr)/sizeof(arr[0]);
    
    int smallest = arr[0];
    int largest = arr[0];
    
    for(int i=0; i<array_size; i++)
    {
        if(arr[i]<smallest)
        {
          smallest = arr[i];
        }
        
        else if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    printf(" smallest array is %d\n", smallest);
    printf(" largest array is %d\n", largest);
   
    
    
    
    return 0;
 }