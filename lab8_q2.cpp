//2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)

//include library
#include<iostream>
using namespace std;

//function to find largest
int largest(int arr[],int n){
            for(int i=0;i<n;i++){
                   if(arr[0]<arr[i]){
			arr[0]=arr[i];	
                   } 
            }
            cout<<"largest element is "<<arr[0]<<endl;
            return 0;
                              }

//function to find smallest
int smallest(int arr[],int n){
            for(int i=0;i<n;++i){
                   if(arr[0]>arr[i]){
                         arr[0]=arr[i];
                                     } 
                                 }
             cout<<"smallest element is "<<arr[0]<<endl;
             return 0;
                           }

//function to find mean
int mean(int arr[],int n){
            int i,sum=0; 
            for(int i=0;i<n;i++){
                                 sum=sum+arr[i];
                                 }
            cout<<"mean is "<<sum/n<<endl;
            return 0;
                           }

//function to make array in ascenading order
int AscOrd1(int arr[],int n){
    int k;
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            if (arr[i] > arr[j]){
                k = arr[i];
                arr[i] = arr[j];
                arr[j] = k;
                                }
               }
      }
    return 0;
    }

//to find median
int median(int arr[],int n){
      int med;        
      for(int i=0;i<n;i++){
             if(n%2 == 0){
                     med = (arr[n/2]+arr[(n/2)-1])/2;
                                }
             else{ med=arr[(n-1)/2];
                        }
                      } 
      cout<<"median is "<<med<<endl;    
      return 0;
       }

//to find highest frequency element
int hiFreq(int arr[],int n){
      int j=0,hf=0,hfe;
      for(int i=0;i<n;i++){
             if(arr[i]=arr[j]){
                  j++;
                  if(j>hf){hf=j;hfe=arr[i];}                          
                  else{ 
                        cout<<"equal number of elements";}
                               }
                        }
      cout<<"heighest frequent element :"<<hfe; 
      return 0;
      }

//main function
int main()
 {
 int i,n;
 //asking no of elements
 cout<<"enter total no of elements";
 cin>>n;
  
 int arr[n];
 //declare array
 for(int i=0;i<n;i++){
                   //to take values of array
                   cout<<"enter an element:"<<i<<endl;
                   cin>>arr[i];
                     }

 //recalling functions
 largest(arr,n);
 smallest(arr,n);
 mean(arr,n);
 AscOrd1(arr,n);
 median(arr,n);
 hiFreq(arr,n); 

 return 0; 
  }


