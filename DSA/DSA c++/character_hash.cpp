#include<iostream>
using namespace std ;
int main (){
 string str ;
 cout<<"enter the string"<< endl;
 cin >> str;

// precompute 
int hash[26]={0};
for (int  i = 0; i<str.size()  ; i++)
{
  hash[str[i]-'a']++;
}

int q;
cout<< " enter the queries "<< endl;
cin >>q;
while(q--){
    char c;
    cin >> c;
     
    cout<< hash[c-'a']<<endl;
}

    return 0 ;

}