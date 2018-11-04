/*
13. Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method.  
*/

//include library 
#include<iostream>
using namespace std;

//main functionn
int main(){
   //declare array
   int arr[10] = {0,1,2,3,4,5,6,7,8,9};

   //using normal index method
    cout<<"{";
   //loop to print array
   for(int i=0;i<10;i++){      

            cout<<i<<" , ";
                        }
   cout<<"}"<<endl;

   //using pointer method
   //pointer method
   cout<<"{";
   //loop to print array
   for(int i=0;i<10;i++){           
            cout<<*(arr+i)<<" , ";
                        }
   cout<<"}"<<endl;



   return 0;
}
