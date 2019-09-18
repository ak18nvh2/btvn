#include <iostream>
#include <queue>
using namespace std;
#define Max 100
int a[100][100];
int d[Max];
bool kt[Max];
int n,m;

void BFS(int dinhBD)
{
    queue<int> q;
    q.push(dinhBD);
    kt[dinhBD]=true;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=1;i<n+1;i++)
        {
            if(kt[i]==false && a[u][i]==1)
            {
                q.push(i);
                d[i]=d[u]+1;
                kt[i]=true;
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    int u,v;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        a[u][v]=1;
        a[v][u]=1;
        a[u][u] = 1;
        a[v][v] = 1;
    }
    BFS(1);
    cout<<d[6];
    //    for(int i=1;i<=n;i++)
    //        cout<<d[i]<<" ";
    
    //    for(int i=1;i<=n;i++)
    //    {
    //        for(int j=1;j<=n;j++)
    //            cout<<a[i][j]<<" ";
    //        cout<<endl;
    //    }
    return 0;
}
/*
 7 10
 1 2
 1 4
 1 5
 2 3
 2 4
 3 4
 3 6
 4 5
 5 7
 6 7
 */
