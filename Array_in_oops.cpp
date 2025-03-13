#include<iostream>
using namespace std;
//------------------------------------ARRAY OF OBJ------------------------------------>
class Emp{
	int id;
	int selery;
	public:
		void g_data(){
			cout<<"enter id of employ ";
			cin>>id;
		}
		void p_data(){
			cout<<"your id is "<<id<<endl;
		}
	
};
int main(){
	Emp em[4];
	for(int i=0;i<4;i++){
		em[i].g_data();
		em[i].p_data();
	}
	
	
	return 0;
}
