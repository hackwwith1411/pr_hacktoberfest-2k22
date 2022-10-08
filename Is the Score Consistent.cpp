#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b;
		cin>>c>>d;
		if((c-a)>=0 && (d-b)>=0)
		{
			cout<<"POSSIBLE"<<endl;
		}
		else{
			cout<<"IMPOSSIBLE"<<endl;
		}
	}
}
