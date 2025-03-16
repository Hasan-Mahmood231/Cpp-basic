#include<iostream>
using namespace std;

class exp{
	public:
		static int x;
		exp(){		// constructor increment value of x when obj is created.
			x++;
		}
};
int exp::x=0;	// must write the line 

int main(){
	exp obj1,obj2,obj3;//when obj is created constructr is automitcaly called and incremnt value of x.
	cout<<exp::x;		// access the static var by using class name b/c its not direct realted to object of class
	return 0;
}
