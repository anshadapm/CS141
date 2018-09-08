/*
SUM
 
a.(By Value) Write a program with a function that takes two int parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.

b.(By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.
*/

//include library
#include<iostream>
using namespace std;

//option .a
int addition(int a, int b){
    int sum;
    sum=a+b;
    return sum;
}

//option.b
void additiona(int a, int b, int &c){
   //body of the function 
   c=a+b;
}


//main function
int main(){
     int a,b;
     //ask parameters
     cout<<"Enter a number";
     //record parameter
     cin>>a;
     //ask parameters
     cout<<"Enter a number";
     //record parameter
     cin>>b;
     //find sum
     int total = addition(a,b);
     cout<<total<<endl;
     int sum;
     additiona(a,b,sum);
     cout<<sum;
    return 0;
}
