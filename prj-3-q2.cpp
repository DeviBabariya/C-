#include<iostream>
using namespace std;
	// Q-2 Floyd's Triangle
	int main(){
		
		int i,j,n;
		n=11;
			
		for(i=1;i<=4;i++){
			for(j=1;j<=i;j++){
				cout<<n<<" ";
				n++;
			}
			cout<<endl;
		}
	
	return 0;	
	}
