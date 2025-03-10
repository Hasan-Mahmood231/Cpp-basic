#include<iostream>
using namespace std;
//------------------------------MULTIPAL INHERIATANCE----------------------------------------------
class Engneer{   // first class (engneer)
	public:
		int age;
		string domain;
		int expercience;
	protected:
		int selery;		// Now let this is protected member and this is only accessibal to inside this class & child of this class.
	
};

class Trader{	//second class (trader)
	public:
	string type_of_trader;
	int dealy_pnl;
	int trades;
};

class expert : public Engneer,public Trader{	// now third one inherit the properties of 1st as well as 2nd so this is called multipal ingeritance.
	public:
	string name;
	string address;
	int QR_level;
	
	
	
	expert(int age,string domain,int expercience,int trades,string name,int selery){ // constructor for assigning values.
		this->age =age;
		this->domain = domain;
		this->expercience = expercience;
		this->trades = trades;
		this->name = name;
		this->selery = selery;
	}
	
	void print(){	// vales printing function
	cout<<age<<" "<<domain<<" "<<expercience<<" "<<trades<<" "<<name<<selery << endl;
	}
};





int main(){
	
	expert m1(43,"data_science",2,900,"Hassan",55000);	// assigne by help of constr
	m1.print();	// passing obj to print function.
	
	return 0;
}
