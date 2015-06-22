#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    cin.ignore();
    for(int caseno = 0;caseno<cases;caseno++){
        long long int n,high_jump=-1,low_jump=0,prev=-100;
        cin>>n;
        cin.ignore();
        for(int i = 0;i<n;i++){
            int num;
            cin>>num;

            if(num>prev)
                ++high_jump;
            else if(num<prev){

                ++low_jump;
            //cout<<low_jump<<endl;
            }
            prev=num;
        }
        printf("Case %d: %lld %lld\n",caseno+1,high_jump,low_jump);
    }
}
