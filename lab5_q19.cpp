//include library
#include<iostream>
using namespace std;
int main()//declaring main finction
{
   int p,c,m,b,k,x;//declaring variable
   cout<<"Your marks in physics";//ask the marks in physics
   cin>>p;//read marks in physics
   cout<<"Your marks in chemistry";//ask the marks in chemistry
   cin>>c;//read marks in chemistry
   cout<<"Your marks in mathematics";//ask the marks in mathematics
   cin>>m;//read marks in mathematics
   cout<<"Your marks in biology";//ask the marks in biology
   cin>>b;//read marks in biology
   cout<<"Your marks in computer science";//ask the marks in computer science
   cin>>k;//read marks in computer science
   x=(p+c+m+b+k)/5 ;//declare equation connecting variables
   //print the grade
   if(x >= 90)
   cout<<"Your grade is A";
   else if(x >= 80)
   cout<<"Your grade is B";
   else if(x >= 70)
   cout<<"Your grade is C";
   else if(x >= 60)
   cout<<"Your grade is D";
   else if(x >= 40)
   cout<<"Your grade is E";
   else
   cout<<"Your grade is F";
 return 0;
}
