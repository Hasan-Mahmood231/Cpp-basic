#include<iostream>
using namespace std;
class vector{
	public:
		int size;
		int capecity;
		int *arr;
		// using default constructore to set the vectore initial values.
	vector(){
		size = 0;
		capecity = 1;
		arr = new int [1]; // intitalize array of size 1.
	}
	// function add() well add ele in last.
	void last(int ele){
		if(size == capecity){
			capecity *=2;
			int*arr2 = new int[capecity];
			for(int i=0;i<size;i++){
				arr2[i] = arr[i];
			}
			arr = arr2;
			
		}
		arr[size++] = ele;
//		arr2[size]=ele;
	}
	void print(){
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
//		cout<<arr[0];
	}
};


int main(){
	vector v1;
	v1.last(32);
	v1.last(11);
	v1.last(90);
	v1.last(2);
	v1.print();
	
	
}
