#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("i.txt","r",stdin);
    int n,b,h,w;
    while(scanf("%d %d %d %d",&n,&b,&h,&w)==4){
        int cost[25];
        for(int i =0;i<25;i++){
            cost[i] = 1<<30;
        }
        bool got = false;
        for(int i = 0;i<h;i++){
            int c;
            cin>>c;
            for(int j = 0;j<w;j++){
                int a;
                cin>>a;
                if(a>=n){
                    cost[i] = n*c;

                }
            }
        }
        int mn = 1<<30;
        for(int i =0;i<h;i++){
            mn = min(mn,cost[i]);
        }
        if(mn>b){
            cout<<"stay home"<<endl;
        }
        else
            cout<<mn<<endl;

//        else{
//            cout<<"stay home";
//        }

    }
}
