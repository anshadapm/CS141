//include library
#include<iostream>
using namespace std;
int main(){
    //declare variable
    int a;
    //ask the number
    cout<<"Enter number";
    //read number
    cin>>a;
    //if the  number is divisible by 5 and 11
    if((a%5==0) && (a%11==0))
    cout<<"the number is divisible by 5 and 11";
    //if the  number is not divisible by 5 and 11
    else
    cout<<"the  number is not divisible by 5 and 11";
    return 0;
}
