#include<iostream>
using namespace std;

//-------------------Inheritance---------------------------->

class A{
	public:
		int amount;
		string name;
};

class B : public A{			//class B is child class and A is base class .
	public:
		int milage;
		string car_color;
		string mdoel;
};


int main(){
	
	B car1;					//obj of derivd class
	car1.amount =90000;		//access to base class member.
	car1.mdoel = "tyota";	//access to their own member.
}









//-----------------------------Multilevel-inheritance-------------------------------------->
a class derive from another 
derived class -> multilevel.
class A{
	public:
		int roll_no;
		string name;
};

class B : public A{			//B is derived from A itself.
	public:
	string department_name;
	int semester;
	string subjec;
};

class C : public B{			//C is derivd from another derived class which is B.
	public:
	string extra_course;
	int fee;
	int duration;
	int course_code;
	
};

int main(){					//access to both classes define above.
	C aa;
	aa.name "Mr.Noormast";
	aa.department_name = "CS";
	aa.subjec = "cs";
}






//-------------------------Multiple-inheritance--------------------------------->
class A{		//Base class
	public :
		int n;
		int m;
};

class B{		//another Base class
	public :
		string name;
		int age;
};

class C : public A, public B{	//derived from A as well as B
	public:
		int price;
		string result;
};

int main(){
	C aa;
	aa.m = 90;
	aa.age = 33;
	aa.price = 12944;	//access to three classes dierectly its multiple inheritance.
}





























