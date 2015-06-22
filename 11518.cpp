#include<bits/stdc++.h>

#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define msi map<string, int>
#define mem(arrayName,i) memset(arrayName,int (i),sizeof arrayName)
#define pb(number) push_back(number)
#define _VISIT true
#define _UNVISIT false

#define INF 2000000000
#define _INF 127
#define _HALF_INF 63

using namespace std;
#define MAXNODE 10001
bool visited[MAXNODE];
vi graph[MAXNODE];
void dfs(int src){
    visited[src] = true;
    for(int i = 0;i<graph[src].size();i++){
        if(!visited[graph[src][i]]){
            dfs(graph[src][i]);
        }
    }
}
int main(){
    int cases;
    //reopen("r.txt","r",stdin);
    cin>>cases;
    cin.ignore();
    for(int caseno = 1;caseno<=cases;caseno++){
        memset(visited,false,sizeof visited);
        for(int i = 0;i<MAXNODE;i++){
            graph[i].clear();
        }
        int n,m,l;
        cin>>n>>m>>l;
        cin.ignore();
        for(int i = 0;i<m;i++){
            int from,to;
            cin>>from>>to;
            graph[from].pb(to);
        }
//        for(int i =1;i<=n;i++){
//            for(int j =0;j<graph[i].size();j++){
//                cout<<graph[i][j]<<" ";
//            }
//            cout<<endl;
//        }
        cin.ignore();
        for(int i = 0;i<l;i++){
            int start;
            cin>>start;
            dfs(start);
        }
        int counter=0;
        for(int i =1;i<=n;i++){
            if(visited[i])
                ++counter;
        }
        cout<<counter<<endl;
    }
}
