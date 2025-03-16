#include<iostream>
using namespace std;
class name{
	int tax;
	int selery;
	public:
		name(int tax,int selery){
			this->tax = tax;
			this->selery = selery;
		}
		friend int cal_sum(name aa);
};

int cal_sum(name aa){		
	cout<<aa.tax*aa.selery;
}
int main(){
	
	name aa(9,7);
	cal_sum(aa);	// can't call it by usign obj name b/c its not member function .
	return 0;
}


/*
Now let see class name is (name) object is (aa)
first we make constructore assigne values to private 
member.and then declear friend function not define .
 
	use keyword (friend)then use (data_type)and then
	(function name)and then pass the class name and obj 
	is a argument.
now defin such friend function outside class just like 
simple function b/c its not member function.

now in main function call just like simple function 
b/c its not member function.
	*/
