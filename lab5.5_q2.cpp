//to print hollow star

//include library
#include<iostream>
using namespace std;
int main(){
    //declare variable
    int n=5;
       //print stars
       for(int i=0; i<n; i++){
              //print 5 stars for first and last row
               if((i==0) or (i==4)){
                        //print 5 stars
                        for(int i=0; i<n; i++){
                                         //print star
                                         cout<<"*";
                                              }
                                  }
               //print star,space,star for others
               else               {
                    //print 1 star 
                    cout<<"*";
                         for(int i=0; i<(n-2); i++){
                                         //print n-2 spacec
                                       cout<<" "; 
                                                   }       
                  //print 1 star
                  cout<<"*";
                                 }
           //print in different row
           cout<<endl;
       }
   return 0;
}
