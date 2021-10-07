#include <bits/stdc++.h>
using namespace std;
void AddEdge(vector<vector<int>> &graph,int u,int v)
{graph[u].push_back(v);
 
}
int main()
 vector<vector<int>> graph(5);
 AddEdge(graph,0,1);
 AddEdge(graph,0,2);
 AddEdge(graph,1,3);
 AddEdge(graph,1,2);
 AddEdge(graph,2,3);
 AddEdge(graph,2,4);
 vector<int> counte(graph.size(),0);
 for(int i=0;i<graph.size();i++)
    {
    for(int j=0;j<graph[i].size();j++)
      {
       counte[graph[i][j]]+=1;
      }
    }
  
 queue<int> q;
 for(int i=0;i<counte.size();i++)
   {if(counte[i]==0)
      {q.push(i);
      }
   }

 vector<int> result;
 while(!q.empty())
  {int u=q.front();

   q.pop();
   result.push_back(u);
   for(int i=0;i<graph[u].size();i++)
     {int v=graph[u][i];
      counte[v]--;
      if(counte[v]==0)
        {q.push(v);
        }

     }

  }

for (int i = 0; i < result.size(); ++i)
   {cout<<result[i]<<endl;
  }
}
