// Write a program to find sum of all elements of an array. (Use functions)

//include library
#include<iostream>
using namespace std;

int f1(int arr[],int n){
         for (int i=0;i<n;i++){
                arr[i]=i;
                          }
         return 0;  
         }

int f2(int arr[],int n){
         for (int i=0;i<n;i++){
                cout<<arr[i]<<" ";
                          }
         return 0;  
         }

int f3(int arr[],int n){
         int sum=0;
         for (int i=0;i<n;i++){
            sum =sum+arr[i]; 
                                 }
         cout<<"sum of elements of the array"<<sum<<endl;    
         return 0;  
         }

//main function
int main(){
 int n,i,sum=0;
 //asking number to array
 cout<<"Enter number";
 //recieving number to array 
 cin>>n;
 int arr[n];
 //declare an array
 f1(arr,n);
 //print array
 f2(arr,n);
 cout<<endl;
 //to find sum of elements on array
 f3(arr,n);
 return 0; 
  }
