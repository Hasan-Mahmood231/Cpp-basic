#include<iostream>
using namespace std;


typedef  struct employ{		// here by structure we store info about employ
	int selry;				//
	float waight;
	string name;
} ef;

int main(){
	ef hassan;
	
	hassan.name = "hassan";
	hassan.selry = 90000;
	hassan.waight = 32.2;
	
	
	cout<<hassan.name<<endl;
	cout<<hassan.waight<<endl;
	cout<<hassan.selry<<endl;
}


 /* A structure in C++ (struct) is a user-defined data type that allows grouping different
  variables under a single name. Unlike arrays, which store multiple values of the same type,
  structures can hold multiple values of different data types. This makes structures useful
  for organizing related data, such as student records or employee details. Each variable
  inside a structure is called a member,
and they can be accessed using the dot (.) operator. Structures provide a simple way to manage complex data efficiently in C++.
*/
