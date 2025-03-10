#include<iostream>
using namespace std;
//--------------------------------------ACCESS MODIFIER-----------------------------------------
class Coin{
	public:
		string c_name;
		int amount;
		int price;
	
	
	Coin(string c_name,int amount,int price,int targit){
		this->c_name = c_name;
		this->amount = amount;
		this->price = price;
		this->targit = targit;
	}
	void print(){
		cout<<c_name<<" "<<amount<<" "<<price<<" "<<targit<<endl;
	}
	private:
		int targit;
	 // function for printing values.
	
};


int main(){
	
	Coin c1("xrp",44,3,10);
    //	c1.targit = 90; // we can't access targit b/c its private.

	
	// Access to private member by using constructore.
	c1.print();
	return 0;
}

/*
	inside the class private variable is accessible for 
	thir method and constructore so we can access by using 
	class method r functions.
*/





















