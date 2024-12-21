#include<iostream>
using namespace std;
	// Q-3 Left Half Triangle Pattern
	int main(){
		
		int i,j,k,n;
		n=5;
			
		for(i=n;i>=1;i--){
			for(k=5;k>i;k--){
				cout<<" ";
			}
			for(j=1;j<=i;j++){
				if(j%2 == 0){
					cout<<"0";
				}
				else{
					cout<<"1";
				}
			}
			cout<<endl;
		}
	
	return 0;	
	}
