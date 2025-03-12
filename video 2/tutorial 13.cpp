#include<iostream>
using namespace std;

int fac(int n){
//	0!=1
//	1!=1
	if(n==0||n==1){
		return 1;
	}
	
//	5*fac(5-1)
//    5*4
//4*fac(4-1)
//4*3
//5*4*3*3*fac(3-1)
//5*4*3*2
//5*4*3*2*fac(2-1)
//5*4*3*2*1*1
	return n*fac(n-1);
}

int main(){
	int num;
	cout<<"Enter the number here: ";
    cin>>num;
    int result=fac(num);
    
    cout<<"factorial of "<<num<<"is "<<result;
    return 0;
}
