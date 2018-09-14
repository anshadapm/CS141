/*
Sum of even and odd
  a.Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value
  b.Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value
  c.Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. 
  d.Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
  e .Write a main program. 
         i.Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
         ii.Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
         iii.Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
         iv.Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
         v.Then display the values
*/


//include library
#include<iostream>
using namespace std;

//option a
int sumEvenNumbers(int fn, int sn, int sum){
    //function to find the sum of even numbers between two numbers
    
    for(int i=fn; i < sn; i=i+2){
               //if the entered number 1 is an even
               if(i%2==0){
                    sum=sum+i;
                          }
                //if the entered number 1 is an odd
                else{i=fn+1;
                     sum=sum+i;}
    }
               
    return sum;
   }
 
//option b
int sumOddNumbers(int fn, int sn, int sum){
    // to find the sum of odd numbers between two numbers
    
    for(int i=fn; i < sn; i=i+2){
                //if the entered number 1 is an odd
               if(i%2!=0){
                    sum=sum+i;
                          }
               //if the entered number 1 is an even
               else{i=fn+1;
                     sum=sum+i;}
                                 } 
    return sum;
   }

//option c
int sumSquareOddNumbers(int fn, int sn, int sum){
    // find the sum of squares of odd numbers between two numbers using while()
    for(int i=fn; i < sn; i=i+2){
                 //if the entered number 1 is an odd
                if(i%2!=0){
               sum=sum+(i*i);}
                //if the entered number 1 is an even
                else{i=fn+1;
                     sum=sum+(i*i);}
}      
    return sum;
   } 
 
//option d
int sumSquareEvenNumbers(int fn, int sn, int sum){
    // find the sum of squares of even numbers between two numbers using while()
    for(int i=fn; i < sn; i=i+2){
                //if the entered number 1 is an even
                if(i%2==0){
               sum=sum+(i*i);}
                 //if the entered number 1 is an odd
                 else{i=fn+1;
                     sum=sum+(i*i);}
}      
    return sum;
   }





//main function
int main(){
    //declaring variable
    int fn,sn,sum;
    //ask parameter
    cout<<"enter first and second number";
    //recieve parameter
    cin>>fn>>sn;
    //introduce function
    int SEN = sumEvenNumbers(fn,sn,sum);
    //to prinrt
    cout<<"the sum of even numbers between two numbers is"<<SEN<<endl; 
    //introduce function
    int SON = sumOddNumbers(fn,sn,sum);
    //to prinrt
    cout<<"the sum of odd numbers between two numbers is"<<SON<<endl;
    //introduce function 
    int SSON = sumSquareOddNumbers(fn,sn,sum);
     //to prinrt
    cout<<"the sum of squares of odd numbers between two numbers is"<<SSON<<endl; 
    //introduce function
    int SSEN = sumSquareEvenNumbers(fn,sn,sum);
     //to prinrt
    cout<<"the sum of squares of even numbers between two numbers is"<<SSEN<<endl; 
    return 0;
}
