#include<iostream>
using namespace std;

//Digits Counter
int main(){
	int num;
	sum=0;
	
	cout<<"Enter any no:";
	cin>>num;
	
	int count=0;
	while(num != 0){
		num/=10;
		count++;
	}
	
	cout<<"Total Number of Digits:"<<count<<endl;

	return 0;	
}
	
	