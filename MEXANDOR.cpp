#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	  {int n;
	   cin>>n;
	   int temp=n;
	   int i=0;
	   for(;i<100000;i++)
	   	  {int p=pow(2,i)-1;
	   	   if(p>n)
	   	   	 {break;
	   	   	 }
	   	  }
	   	
	   	int a=pow(2,i-1);
	    cout<<a;

	  }  


}