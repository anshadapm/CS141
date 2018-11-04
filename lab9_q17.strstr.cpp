#include<iostream>
using namespace std;
int fstrlen(char a[])
{ 
	 for(int i=0;i<20;i++){
             if(a[i]=='\0'){
                              return i; }
                         }
}
int strstr(char str[],char str0[])
{
	char *x,*y,*z;
	int a=fstrlen(str0),b=fstrlen(str);
	a=b-a+1;
	x=str;
	while(*x!=str[a])
	{
		y=str0;
		if(*x==*y)
		{
			z=x;
			while(*y==*z && *y!='\0')
			{z++;y++;}
		    if(*y=='\0')
		    return 1;
		 }
		 x++;
	 }
	 return 0;
}
int main()
{
  int k;
  char str[20],str0[20];
  cout<<"enter 1st string\n"; 
  cin>>str;
  cout<<"enter 2nd string\n"; 
  cin>>str0;
  int c= strstr(str,str0);
		if (c==1)
		   cout<<"The second string is present in the first  string";
		   else 
		   cout<<"The second string is not present in the first  string";
	   return 0;
} 


