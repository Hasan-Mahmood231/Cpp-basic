#include<iostream>
using namespace std;

class exp{
	public:
		static int x;
		exp(){
			x++;
		}
};
int exp::x=0;
int main(){
	exp obj1,obj2,obj3;
	cout<<exp::x;
	return 0;
}
