#include<iostream>
using namespace std;
int main(){
	int arr[4]={32,22,44,53};
	int i = 0;
	while(i<=4){
		cout<<"enter the number "<<i<<"  :";
		cin>>arr[i];
		i++;
	}
	
	int j=0;
	do{
		cout<<arr[j]<<" ";
		j++;
	}
	while(j<=4);
	
	
	
	
	
	
	int *p = arr;
	for(int i=0;i<4;i++){// in this loop we print the array elemnt by their address using .....
		int res = *(p+i);
		cout<<res<<" ";
	}
	
}
