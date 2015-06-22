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
        vector<int>v(105);
        int n,result=0;
        cin>>n;
        cin.ignore();
        for(int i = 1;i<=n;i++){
            string input;
            getline(cin,input);
            if(input=="LEFT"){
                v[i] = -1;
                result-=1;
            }
            else if(input == "RIGHT"){
                v[i] = +1;
                result+=1;
            }
            else{
                stringstream ss(input);
                int num;
                string s1,s2;
                ss>>s1>>s2>>num;
                v[i]=v[num];
                result =result + v[num];
            }
        }
        cout<<result<<endl;
    }
}
