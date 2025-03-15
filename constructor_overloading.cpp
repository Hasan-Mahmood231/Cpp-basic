#include<iostream>
using namespace std;
class exampl{
	int a;
	public:
		exampl(){
			cout<<"im default .";
		}
		exampl(int x){
			cout<<x*x<<endl;
			
		}
		exampl(int x,int z){
			cout<<x*z<<endl;
		}
	
};
int main(){
	exampl aa;
	exampl ff(8);
	exampl abb(8,3);

	return 0;
}
