#include<iostream>
using namespace std;
//Sum of First and last Digit
int main(){
	int num,sum,firstdigit,lastdigit;
	sum=0;
	
	cout<<"Enter any no:";
	cin>>num;
	
	lastdigit=num%10;
	
	while(num>=10){
		num=num/10;
	}
	
	firstdigit=num;
	sum=firstdigit+lastdigit;
	
	cout<<"Sum of first and last digits:"<<sum<<endl;	
	return 0;
}


