#include<iostream>
using namespace std;
int main(){
	int a = 10;
	if(a=5){	// here the = operatore well true this condition and this statement well be run
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	//--------------------------
	cout<<endl;
	int x = 0;
	if(x==x++){		//the result of this code well be undefine conventionaly incrementing of x multiple time in single line can lead to undefine behaviour
		cout<<"equal ";
	}
	else{
		cout<<"not equal ";
	}
	cout<<endl;
	//--------------------------
	
	if(-1){
		cout<<"non_true";
	}
	else{
		cout<<"true";
	}
	//--------------------------
	cout<<endl;
	int c = 0;
	if(c++ and --c){	// here the value of c first used then incfement and when c=0 then it gives faluse means one side is false other well not be excuted
		cout<<"yes";	// the value of c increment to 1 and if conditon goes false and inside else value of c well printed
	}
	else{
		cout<<"the vaue of c is "<<c;
	}
	//--------------------------
	cout<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
