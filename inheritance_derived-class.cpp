#include<iostream>
using namespace std;
class xyz_1{
	protected:
	int a;
	public:
		xyz_1(int a){
			this->a = a;
		}
};

class xyz_2{
	protected:
	int b;
	public:
		xyz_2(int b){
			this->b = b;
		}
};

class xyz_3 : public xyz_1,public xyz_2{
	int c;
	public:
		xyz_3(int a,int b,int c):xyz_1(a),xyz_2(b){	//	templet we use for inheritance-object-calling....
			
			this->c=c;
			
		}
		void show(){
			cout<<"the 1st one is "<<a<<endl;
			cout<<"the 2nd one is "<<b<<endl;
			cout<<"the 3rd one is "<<c<<endl;
		}
};
int main(){
	xyz_3 aa(3,2,4);
	
	aa.show();
	return 0;
}
