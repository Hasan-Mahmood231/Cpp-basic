#include<iostream>
using namespace std;
class func{
	int num;
	int denum;
	public:
		func(int num=0,int denum=1){
			this->num = num;
			this->denum = denum;
		}
		void print(){
			cout<<num<<" / "<<denum<<"\t";
		}
		
		func sum(func aa,func bb){
			int new_num = (aa.num*bb.denum)+(aa.denum*bb.num);
			int new_denum = (aa.denum*bb.denum);
//			return func(new_num,new_denum);
			cout<<new_num<<" / "<<new_denum;
		}
};
int main(){
	func aa(3,9);
	func bb(6,2);
	func cc;
	aa.print();
	bb.print();
	cc = cc.sum(aa,bb);
//	cc.print();
	return 0;
}
