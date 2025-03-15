#include<iostream>
#include<string>
using namespace std;
int main(){
	int age ,num1, num2,day;
	string name;
	
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"\nEnter your name: ";
	cin>>name;
	
	cout<<"Welcome "<<name<<" and your age "<<age;
	
	cout<<"\nEneter the number one: ";
	cin>>num1;
	
	cout<<"\nEnter the number second: ";
	cin>>num2;
	
	if(num1>num2){
		cout<<"Num1 is greater";
	}
	else if(num1==num2){
		cout<<"Both numbers are equal";
	}
	else{
		cout<<"num2 is greater";
	}
	
	for(int i=0; i<=10; i++){
		if(i==5){
			continue;
		}
		cout<<i<<"\n";
		
	}
	cout<<"Enter the number that related to name of week: ";
	cin>>day;
	switch(day){
		case 1:
			 cout<<"Monday";
			 break;
		case 2:
		     cout<<"tuesday";
		     break;
		case 3:
			 cout<<"Wednesday";
			 break;
		case 4:
		     cout<<"thursday";
		     break;
	    case 5:
		     cout<<"Firday";
			 break;	
	    case 6:
	    	 cout<<"saturday";
	    	 break;
	    case 7:
	    	 cout<<"Sunday";
	    	 break;
	    default:
	    	 cout<<"Invalid choice";
	    	 break;
	}
}
