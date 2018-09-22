/*
question 7.
UpperCase and LowerCase
   a. Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
   b. Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
   c. Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 

*/
 
//library
#include<iostream>
using namespace std;

//option (a).Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value

char toUpper(char a){
     //to change uppercase from lower
     char b = char (int(a)-32);
     //return to uppercase
     return b;        
}



//option (b).Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.

char toLower(char c){
     //to change lowercase from upper
     char d = char (int(c)+32);
     //return to lowercase
     return d;     
}



//option (c) Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 

//main function
int main(){
    //declaring variable
    char x;
    cout<<"Enter a charecter";
    cin>>x;
    //to print the change
    if(int(x)>96  &&  int(x)<123){
       char output= toUpper(x);
       cout<<"it is a lowercase charecter and it's uppercase is "<<output<<endl;
          }
    else if (int(x)>64  &&   int(x)<91){
       char output= toLower(x);
       cout<<"it is a uppercase charecter and it's lowercase is "<<output<<endl;
          }


   return 0;
}
