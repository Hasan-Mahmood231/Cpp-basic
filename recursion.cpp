#include<iostream>
using namespace std;
int fact(int x){
	if(x==1) return 1;
	return x * fact(x-1);
}

int print(int x){
	if(x==0) return 1;
	cout<<x<<endl;
	print(x-1);
	
}
int main(){
	int n;
	cout<<"enter number for factorial  :";
	cin>>n;
	
	cout;
	cout<<print(n)<<"         The factorial of a number is "<<fact(n);
}
