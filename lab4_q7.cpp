//library
#include<iostream>
#include<cmath>
using namespace std;
int main(){
//find the area of an equilateral triangle
double x,a,p,c,d;//declaration
cout<<"length of side of equilateral triangle";
cin>>x;
c = 3;
d =0.5;
p= pow(c, d);
a=(p*x*x)/4;
//print area
cout<<"Area of equilateral triangle is "<<a<<endl;
return 0;
}
