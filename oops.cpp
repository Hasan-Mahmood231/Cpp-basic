#include<iostream>
#include<iomanip>
using namespace std;
class Employ{
	public:
		string name;
		int age;
		int selery;
		int Reg_no;
	
};

void print(Employ c){		// function that recive the value by using calss name
	cout<<c.age<<setw(11)<<c.selery<<setw(11)<<c.Reg_no<<setw(11)<<c.name<<endl;
}

int main(){
	Employ emp1;		// obj two
	emp1.name = "hassan";
	emp1.age = 88;
	emp1.selery = 23000;
	emp1.Reg_no = 32;
	
	Employ emp2;	// obj one
	emp2.age = 90;
	emp2.name = "zahor";
	emp2.selery = 43000;
	emp2.Reg_no = 91;
	
	print(emp1);	//make a single function for printing such object details 
	print(emp2);
	
}
