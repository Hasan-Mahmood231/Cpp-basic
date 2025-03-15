#include<iostream>
using namespace std;
int count=0;
class des{
	public:
		des(){
			count++;
			cout<<"the numbe of obj is "<<count<<endl;
		}
		~des(){
			
			cout<<"the number of obj is destroy "<<count<<endl;
			count--;
		}
		
};
int main(){
	des obj1;
	des obj2;
	des obj3;
	des obj4;
	return 0;
}
