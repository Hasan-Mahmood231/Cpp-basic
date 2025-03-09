#include<iostream>
using namespace std;
class study{
	public:
		
		string subject;
		int hour_study;
		int topic;
		
//		void getinput(){
//				cout<<"enter sub,hour,topic : ";
//				cin>> subject >>hour_study >>topic;
//		}
//		
		study(string subject,int hour_study,int topic){
			this->subject = subject;
			this->hour_study = hour_study;
			this->topic = topic;
		}
		
	
};
	void print(study c){
			cout<<c.subject<<" "<<c.hour_study<<" "<<c.topic<<endl;
		}
//void print(study c){
//	cout<<c.hour_study<<" "<<c.subject<<" "<<c.topic<<endl;


int main(){
	study d1("physics",43,2);
	print(d1);
//	d1.getinput();
//	d1.print();
}
