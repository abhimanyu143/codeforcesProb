#include <bits/stdc++.h>
using namespace std;
 
int main(){
 int t;
 cin>>t;
 while(t--)
  {long long int n,h;
   cin>>n>>h;
   
   priority_queue<long long int> q;
   for (long long int i = 0; i < n; ++i)
   {long long int x;
    cin>>x;
    q.push(x);
   }
   long long int max1=q.top();
   q.pop();
   long long int max2=q.top();
   q.pop();
   long long int move=max1+max2;
   long long int count=h/move;
   if(h%move==0)
     {count=2*count;
     }
   else if(h%move>max1)
     {count=2*count+2;
     }
   else
     {count=2*count+1;
     }
   cout<<count<<endl;
  }
 
}