//http://www.codechef.com/problems/NUKES/

#include<iostream>
 
using namespace std;
 
int main(){
	long a;
	int n,k;
	cin>>a>>n>>k;
	int arr[101]={0};
 
	n++;
	
	for(int i=0;i<k;i++){
		cout<<a%n<<" ";
		a /= n;
 
	}
 
	
 
	return 0;
}