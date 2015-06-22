#include<bits/stdc++.h>

#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define msi map<string, int>

#define visit_ true
#define unvisit_ false
#define ull unsigned long long
#define EPS 1e-9
#define Pi acos(-1.0)
#define INF 2000000000
#define _INF 127
#define _HALF_INF 63

#define read(inp) freopen(inp,"r",stdin)
#define Clear(a) memset(a,0,sizeof(a))
#define setfalse(a) memset(a,false,sizeof(a))
#define pb(number) push_back(number)
#define MAX 100005
using namespace std;
vi adjList[MAX];
vi r_adjList[MAX];
vi sortedNode;
bool visit[MAX];
void dfs1(int src){
    visit[src] = visit_;
    for(int i = 0 ;i<adjList[src].size();i++){
        if(!visit[adjList[src][i]]){
            dfs1(adjList[src][i]);
        }
    }
    sortedNode.pb(src);

}
void dfs2(int src){
    //cout<<"S"<<src<<endl;
    visit[src] = visit_;
    for(int i = 0;i<adjList[src].size();i++){
        if(!visit[adjList[src][i]]){
            dfs2(adjList[src][i]);
        }
    }
}
int main(){
    int testcase;
    read("11504.txt");
    cin>>testcase;
    cin.ignore();
    while(testcase--){
        setfalse(visit);
        sortedNode.clear();
        for(int i = 0;i<MAX ;i++){
            adjList[i].clear();
            //r_adjList[i].clear();
        }
        int n,m;
        cin>>n>>m;
        cin.ignore();
        for(int i = 1;i<=m ;i++){
            int from,to;
            cin>>from>>to;
            adjList[from].pb(to);
            //r_adjList[to].pb(from);
        }
        for(int i = 1;i<=n;i++){
            if(!visit[i]){
                dfs1(i);
                //cout<<i<<endl;
            }
        }
//        for(int i = 0;i<sortedNode.size();i++){
//            cout<<sortedNode[i]<<" ";
//        }
//        cout<<endl;
        int c = 0;
        setfalse(visit);
        for(int i = sortedNode.size()-1;i>=0;i--){
            if(!visit[sortedNode[i]]){
                //cout<<sortedNode[i]<<endl;
                dfs2(sortedNode[i]);
                ++c;
            }
        }
        cout<<c<<endl;

    }
}
