#include<iostream>
using namespace std;
class op{
	public :
		void show(){
			cout<<"im base class .";
		}
	
};
class op2 : public op{
	public:
		void show(){
			cout<<"im derived class ";
		}
};
int main(){
	
	op2 aa;		//make the obj of derived class 
	
//	aa.show(); // output (im derived class) and override the base class.
//	aa.show();::op;
	aa.op::show();		// use the obj.class_name :: method name.
	return 0;
}
 
