#include<iostream>
using namespace std;
int main(){
	cout<<"This is for loop";
	for(int i=0; i<=5; i++){
		if(i==3){
			break;
		}
		cout<<"\n"<<i;
	}
	int k=0;
	cout<<"\nThis is while loop";
	while(k<=5){
		k++;
		if(k==3){
			continue;
		}
		cout<<"\n"<<k;
	
	}
	int j=0;
	cout<<"\nThis is do while loop";
     do{
		cout<<"\n"<<j;
		j++;
	}while(j<=5);
return 0;
}
