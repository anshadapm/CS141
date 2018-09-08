/* 
MINIMUM 
  a.(By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.
  b.(By Reference) Goal is the same as above, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.
*/

//include library
#include<iostream>
using namespace std;

//option a
int min(int a, int b){
     int minimum;
     if(a<b){cout<<"minimum is "<<a<<endl;}
     else {cout<<"minimum is "<<b<<endl;}
     return minimum;
}

//option b
void mini(int a, int b, int &c){
     if(a<b){cout<<"minimum is "<<a<<endl;c = a;}
     else {cout<<"minimum is "<<b<<endl; c = b;}
}


//main function
int main(){
    int a,b;
    //ask parameters
    cout<<"Enter two number";
    //recieve parameters.
    cin>>a>>b;

    int minm = min(a,b);
    cout<<minm<<endl;

    int minimum;
    mini(a,b,minimum);
    cout<<minimum;
    return 0;
}
