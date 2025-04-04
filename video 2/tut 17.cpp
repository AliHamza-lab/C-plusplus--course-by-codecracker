#include<iostream>
using namespace std;

int main(){
	int arr[3];
	// manual
	arr[0]=1;
	arr[1]=3;
	arr[2]=5;
	
	cout<<arr[0];
	cout<<arr[1];
	cout<<arr[2];
	
	cout<<"\n";
	// inline
	int arr1[4]={1,2,5,6};
for(int i=0; i<4; i++){
	cout<<arr1[i];
}
int arr2[2][3]={
{1,2,4},
{2,45,6},

};
cout<<"\n";
cout<<arr2[1][1];

}
