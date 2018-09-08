/*
Write a program that includes the above three (2,3,4) functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 
*/

//include library
#include<iostream>
using namespace std;

//function .2
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


//function ,3
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

//function.4
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
    
    //from 2nd function
    int total = addition(a,b);
     cout<<"sum is "<<total<<endl;
     int sum;
     additiona(a,b,sum);
     cout<<"sum is "<<sum<<endl;

    //from 3rd function
     int maxm = max(a,b);
    cout<<maxm<<endl;
    int maximum;
    maxi(a,b,maximum);
    cout<<maximum<<endl;

    //  from 4th function  
    int minm = min(a,b);
    cout<<minm<<endl;
    int minimum;
    mini(a,b,minimum);
    cout<<minimum<<endl;
    return 0;
}
