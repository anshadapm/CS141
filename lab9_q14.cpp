/*
14. [STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. 
*/


//include library 
#include<iostream>
using namespace std;

//main functionn
int main(){
   
   //declare array of name
   char arr[8] = "Anshada";

   //using normal index method   
   //loop to print array
   for(int i=0;i<7;i++){           
            cout<<arr[i];
                        }
   cout<<endl;

   //pointer method
   //loop to print array
   for(int i=0;i<7;i++){           
            cout<<*(arr+i);
                        }
   cout<<endl;


   return 0;
}
