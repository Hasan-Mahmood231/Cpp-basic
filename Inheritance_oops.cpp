#include<iostream>
using namespace std;
//----------------------------INHERITANCE IN CPP------------------------------//	
 
class university{	
	public:					// parent class which contain all mendatory info about general sstudent of universty.
		string departement;	
		int phon_no;
		string address;
		string name;
};

class inter_depmnt : public university{ // child class which inherit some property from parent.
	public:
		string subject;
		int regNo;
		int sub_taken;
		
	inter_depmnt(string departement,int phon_no,string address,string subject,int regNo){
		this->departement = departement;	//constructore to intilize vaue.
		this->phon_no = phon_no;
		this->address = address;
		this->subject = subject;
		this->regNo = regNo;
	}
};

void print(inter_depmnt s){
	cout<<s.departement<<" "<<s.phon_no<<" "<<s.address<<" "<<s.subject<<" "<<s.regNo<<endl;
}

int main(){
//	/*						we can fill this menually and is well as by constructore.
	inter_depmnt s1;
	s1.departement = "english";
	s1.phon_no = 98799890;
	s1.address "xyz house no:42 ";
	s1.regNo = 90;
//	*/
	inter_depmnt s1("(english) ",034233232,"(xyz house no 89" ,"(english " ,99);// direct inetilization of values.
	
	print(s1);//function to print val
	
	
	
	return 0;
}
