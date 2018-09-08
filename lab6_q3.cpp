/*MAXIMUM
  a.(By Value) Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.
  b.(By Reference) Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.

*/

//include library
#include<iostream>
using namespace std;

//option a
int max(int a, int b){
     int maximum;
     if(a>b){cout<<"maximum is "<<a<<endl;}
     else {cout<<"maximum is "<<b<<endl;}
     return maximum;
}

//option b
void maxi(int a, int b, int &c){
     if(a>b){cout<<"maximum is "<<a<<endl; c = a;}
     else {cout<<"maximum is "<<b<<endl; c = b ;}
}


//main function
int main(){
    int a,b;
    //ask parameters
    cout<<"Enter two number";
    //recieve parameters
    cin>>a>>b;
    
    int maxm = max(a,b);
    cout<<maxm<<endl;
    
    int maximum;
    maxi(a,b,maximum);
    cout<<maximum;
    return 0;
}
