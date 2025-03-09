#include<iostream>
//#include<ioman.ip>
using namespace std;
int main(){
	int n=98;
	int m=67;
	if((n>100) and (n<100)){// and conditoin need both side ture other wise it'll give us fauls 
		cout<<"hellow"<<endl;
	}
	
	
	float f_loat = 34.3f;	// writing f with float consider its float number  b/c its help in functin overloading
	long double d_ouble = 34.3l;// writeing l with long double help to considering its long double 
	cout<<f_loat<<"  "<<d_ouble<<endl;
	cout<<sizeof(f_loat)<<"    "<<sizeof(d_ouble);
}
