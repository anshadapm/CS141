/*
1.
Tax Rate Calculation using Functions 
  a.Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
  b.Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
  c.Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
  d.Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
Pseudocode and Indentation must be present. 
*/

//include library
#include<iostream>
using namespace std;

//option a.Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function
int returnvalues(int &unitCst,int &unit,int &taxRt){
			cout<< "Enter a value for the unit cost: "<<endl;
			cin>>unitCst;
			cout<< "Enter a value for the unit purchase: "<<endl;
			cin>>unit;
			cout<< "Enter a value for the total due: "<<endl;
			cin>>taxRt;
			
}


// option b.Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
int recievevalues(int &unitCst,int &unit,int &taxRt){
                   
			cout<< "The unit cost is: " <<unitCst <<endl;
			cout<< "The unit purchase is: " <<unit <<endl;
			cout<< "The tax rate is: " <<taxRt <<endl;
     }


//option  c.Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
int calculation(int unitCst,int unit,int taxRt, int &salesTx, int &totDue){
	
		returnvalues(unitCst,unit,taxRt);
		salesTx=(unitCst* unit* taxRt);
		totDue=(unitCst*unit)+salesTx;
}

//option d.Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
//main function
int main(){
                //Declare variables
		int unitCst,unit,taxRt,salesTx,totDue;
		calculation(unitCst,unit,taxRt,salesTx,totDue);
		//Give values
		cout<< "The sales tax is "<<salesTx<<" and "<<"the total due is "<<totDue<<"."
		//Call the fucntions
		<<endl;


return 0;
}
