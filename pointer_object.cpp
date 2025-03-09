// pointer and ojects
#include<iostream>
using namespace std;
class shop{
	public:
	int product_v;
	int products;
	string name;
	
	
	shop(int product_v,int products,string name){
		this->product_v = product_v;
		this->products = products; 	// use this in order to seperate the value of local var and class member .
		this->name = name;
	}
	
	void print(){
		cout<<product_v<<" "<<products<<" "<<name<<endl;
	}
};


int main(){
	shop s1(32,2,"baby garments");
	shop*s2 = new shop(90,4,"bags");	// dynamically store the obj values in pointer 
	
	
	shop *p = &s1;	// make a object pointer and store the adress of object (s1)
//	cout<<(*p).name;

	
	/*
	now by using pointer of obj we can 
	change everything inside such calss 
	and structure of obj pinter is like 
	(*p).class memeber where p is var
	*/
	
	//-----------------USING (->) IS A POITNER----------------------------->
	
	p->name = "lader coat";
	p->products = 90;	//by using -> we access the member and change whole value 
	p->product_v = 2;
	cout<<endl;
	//use the p only and only if it is pointer of object.othwise its not correct.
	
	
	s1.print();	   //access the s2 obj is a simple obj and print values. (orignal s1 obj)
	s1.print();	  //access the s2 obj is a simple obj and print values. (changed using pointer)
	s2->print(); //access the s2 obj is a pointer obj and print values.
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
