/*
Input 
5
Output
5 5 5 5 5 4 4 4 4 4 3 3 3 3 3 2 2 2 2 2 1 1 1 1 1 
5 5 5 5 4 4 4 4 3 3 3 3 2 2 2 2 1 1 1 1 
5 5 5 4 4 4 3 3 3 2 2 2 1 1 1 
5 5 4 4 3 3 2 2 1 1 
5 4 3 2 1 
*/

//Program
#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=n;j>0;j--){
			for(int k=n;k>i;k--){
				cout<<j<<" ";
			}
		}
		cout<<endl;
	}
}
