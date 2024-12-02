#include<stdio.h> 
#include<string.h> 
int main(void) 
{ 
 char str1[30] = "Subhash "; 
 char str2[10] = "Chandra "; 
 char str3[20]; 
 strcat(strcat(str1, str2),"Bose"); 
 printf("str1 - %s\n",str1); 
 strcat(strcpy(str3,"Dev"), "-anshi"); 
 printf("str3 - %s\n",str3); 
 printf(strcpy(str1,str2));
 printf("\n");
 printf(strrev(str1));
 return 0; 
}