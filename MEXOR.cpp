#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,a=1;
	    cin>>x;
	    if(x==0) cout<<1<<endl;
	    else if(x==1||x==2) cout<<2<<endl;
	    else{
	        while(a*2<=x){
	            a*=2;
	        }
	        if(a==x){
	            cout<<x<<endl;
	        }
	        else if(x==(2*a-1)){
	            cout<<x+1<<endl;
	        }
	        else
	        {
	            cout<<a<<endl;
	        }
	    }
	}
	return 0;
}
