#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    int temp = n, rem , cnt =0, c = 0;
	    while(temp>0){
        rem = temp % 10;
        temp = temp /10;
        c++;
        if(rem == d){
            temp = temp*pow(10,c)+(rem+1)*pow(10,c-1);
            cnt = temp -n;
            c = 0;
            
        }
	}cout<<cnt<<endl;
	
}
return 0;
}
