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
int main(){
    int cases;
    cin>>cases;
    cin.ignore();
    for(int caseno = 1;caseno<=cases;caseno++){
        set<int> st;
        int scary;
        cin>>scary;
        cin.ignore();
        for(int i=0;i<scary;i++){
            int num;
            cin>>num;
            st.insert(num);
        }
        set<int> ::iterator it;
        it=st.end();
        --it;
        cout<<"Case "<<caseno<<": "<<*it<<endl;
        st.clear();
    }
}
