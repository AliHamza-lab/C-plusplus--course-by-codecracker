#include<iostream>
using namespace std;
int main(){
//	inline
	int arr[4]={1,2,3,6};
	cout<<arr[0];
	cout<<arr[1];
	cout<<arr[2];
	cout<<arr[3];
	
//	manual
int arr1[3];
 cout<<"\n";
 arr1[0]=2;
 arr1[1]=3;
 arr1[2]=4;
 cout<<arr1[0];
 cout<<arr1[1];
 cout<<arr1[2];
// for loop method
 int arr3[4];
 cout<<"\n";
 for(int i=0; i<4; i++){
 	arr3[i]=2;
 	cout<<arr3[i];
 }
 cout<<"\n";
 int matrix[2][3]={
 {1,2,3 },
 {2,4,5}
 };
 cout<<matrix[1][2];
 
}
