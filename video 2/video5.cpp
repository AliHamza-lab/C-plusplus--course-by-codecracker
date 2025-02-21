#include<iostream>
using namespace std;
int main(){
	int sum,sub,div,mult,value1, value2;
	cout<<"Enter the first value1: ";
	cin>>value1;
	cout<<"Enter the second value2: ";
	cin>>value2;
	
	sum=value1+value2; // 2.5
	mult=value1*value2;
	sub=value1-value2;
	div=value1/value2;
	
	cout<<"sum="<<sum<<"\n";
	cout<<"multiplication="<<mult<<"\n";
	cout<<"subtraction="<<sub<<"\n";
	cout<<"division="<<div;
	
	return 0;
}
