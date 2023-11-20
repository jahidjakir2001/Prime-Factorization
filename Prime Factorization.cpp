#include<bits/stdc++.h>
using namespace std;
const int mx=1e7;
void prime_factorization(int a)
{
    if(a<2){
        cout<<"Imposible Prime factorization"<<endl;
        return;
    }
    set<int>s;
    map<int,int>cnt;
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            s.insert(i);
            while(a%i==0){
                cnt[i]++;
                a/=i;
            }
        }
    }
    if(a>1){
        s.insert(a);
        cnt[a]++;
    }
    int j=1;
    for(auto u:s){

        cout<<u<<"^"<<cnt[u];
        if(j<s.size()){
            cout<<" * ";
        }
        j++;
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        prime_factorization(a);
    }
}
