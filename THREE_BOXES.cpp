#include<bits/stdc++.h>
using  namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
        int a, b, c,d;
        cin>>a>>b>>c>>d;
        int n=1;
        d=d-a;
        if(b<=d)
           d=d-b;
        else
           n++;
        if(c<=d)
          d=d-c;
        else
           n++;
        
        cout<<n<<endl;
     }
