#include<iostream>
using namespace std;
//______________________OBJECT IS A FUNCTION__________________________________-
class ob{
	private:
		int a ;		//make a private var
	public:
		ob(int a){	// constructore
			this->a = a;
		}
		int operator()(int num){	//operatore for make obj like function we can call it litter on
			return num * a;			//return number *2.
		}
};
int main(){
	ob obj1(2);		//make obj and assing 2 
	int n;
	cout<<"enter number you wnat to double ";
	cin>>n;			// user can enter by theirown choice.
	cout<<obj1(n);
	
	return 0;
}

