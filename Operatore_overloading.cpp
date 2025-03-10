#include<iostream>
using namespace std;
//-----------------------------OPERATORE OVERLOADING----------------------------------------->

class function{
	public:
		int num;
		int denm;
		
	   function(int num,int denum){
			this->num = num;
			this->denm = denum;
		}
		void print(){
			cout<<num<<" / "<<denm<<"		";
		}
		
		
		
		function operator +(function f1){
			
			int newnum = this->num*f1.denm + this->denm*f1.num;
			int newdenm = this->denm * f1.denm;
			function ans(newnum,newdenm);
			return ans;
		} 
};

int main(){
	function f1(2,9);
	function f2(6,7);
	f1.print();
	f2.print();
	function f3 = f1+f2;
	f3.print();
	
	return 0;
}
