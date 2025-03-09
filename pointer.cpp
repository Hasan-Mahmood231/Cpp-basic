#include<iostream>
using namespace std;
int main(){
	int n = 90;
	int *x = &n;	
	cout<<&n<<endl;
	cout<<*x<<endl;
	
	
	
	
	
	int **dpt = &x;
	cout<<dpt<<endl;	// print the address of double poitner 
	cout<<*dpt<<endl;	// print the adress of above use pointer 
	cout<<**dpt<<endl;	// print the value store in above poitner 
	
}
/*
	The (*) is dereference operatore and which show the value inside the address 
	and also its used with variable to stroe the address the another variable 
*/
