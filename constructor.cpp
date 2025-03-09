#include<iostream>
#include<iomanip>
using namespace std;
class Coin{
	public:
		
		string c_name;
		int amount;
		float flow;
		int price;
		/*
		in cpp the consturctore make with name of class and 
		and revice the value if we declear the value in one oder then
		must pass from its orignal order .
		*/
	
	Coin(string cn,int a,float f,int p){ //constructor in oops
		c_name = cn;
		amount = a;
		flow = f;
		price = p;		
	}
	//------------------------------------------------------------------------MULTIPLE CONSTRUCTORE-----------------------------------------------

	Coin(string cn,int a,float f){	// another constructore inwhich three variable r pass when user enter 3 var then bydefault it'll be run.
 		c_name = cn;
 		amount = a;
 		flow = f;
	 }
};

 	
 	
 	
void print(Coin c){
	cout<<c.amount<<setw(22)<<c.c_name<<setw(22)<<c.flow<<setw(22)<<c.price<<endl;
}

int main(){
	Coin c1("dot",66,32.9090,5);//like this we call the constructore.
	Coin c2("xrp",44,8.89898);
	print(c2);
	print(c1);

}
//ther is default constructor also present in class 
