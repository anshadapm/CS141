//include library
#include<iostream>
using namespace std;
int main()//declare main function
{
int s;//declare variable
cout<<"Enter the year";//to recieve input
cin>>s;//read input

//print the year is leap year or not 
if(s%4==0)
cout<<"this is a leap year";
else
cout<<"this is not a leap year";
return 0;
}
