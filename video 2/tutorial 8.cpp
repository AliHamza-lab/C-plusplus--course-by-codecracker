#include<iostream>
using namespace std;
int main(){
	int age=20;
	if (age>=18){
		cout<<"you are not okay";
	}

int num=1;
if (num>=8){
	cout<<"num is larger";
	
}
else{
	cout<<"num is smaller";
}

int marks=50;
if (marks>=90){
	cout<<"a";
	
}
else if (marks>=60){
	cout<<"c";
}
else if(marks>=50){
	cout<<"b";
}
else{
	cout<<"fail";
}
int marks=50;
if (marks<=90){
	cout<<"a";
	if (marks>=50){
		cout<<"b";
	}
}

int a=3;

switch (a){
	case 1:
		cout<<"match1";
		break;
	case 2:
		cout<<"match2";
		break;
	case 5:
		cout<<"match3";
		break;	
	default:
		cout<<"not match";
}

}
