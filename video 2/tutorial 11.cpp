#include<iostream>
using namespace std;

int sub(int a,int b){
	return a-b;
}
void greet(){
	cout<<"Hello";
}

int main(){
	greet();
	cout<<"subtraction:"<<sub(10,30);
	return 0;
}
