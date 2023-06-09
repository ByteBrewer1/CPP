// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023
#include <bits/stdc++.h>
using namespace std;
#define FREP(b) for(int i=0;i<b;i++)
#define REP(a,b,c) for(int a=b;a<c;a++)
#define asd(x)              cout<<__LINE__<<" :: "<<#x<< ": "<<x<<endl;
#define asdf(x, y)          cout<<__LINE__<<" :: "<<#x<< ": "<<x<<" | "<<#y<< ": "<<y<<endl;
typedef pair<int,int> ii;
typedef long long LL;
 
int dp[53][1 << 15], prime[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47}, A[53], n;
vector<int> G[51];
void scan(){
    cin >> n;
    REP(i, 0, n) cin >> A[i];
}
 
 
int rec(int id, int mask){
    if(id == n) return 0;
    int &ret = dp[id][mask];
    if(ret != -1) return ret;
 
    if(A[id] == 1) return ret = 1 + rec(id + 1, mask);
    ret = rec(id + 1, mask);
    REP(i, 0, G[A[id]].size()){
        int u = G[A[id]][i];
        if(mask & (1 << u)) return ret;
        mask |= (1 << u);
    }
    ret = max(ret, 1 + rec(id + 1, mask));
    return ret;
}
 
int solve(){
    REP(i, 0, 51){
        G[i].clear();
        REP(j, 0, 15){
            if(prime[j] > i) break;
            if(i % prime[j] == 0) G[i].push_back(j);
        }
    }
    memset(dp, -1, sizeof dp);
    return rec(0, 0);
}
 
int main(){
    int test;
    cin >> test;
    while(test--){
        scan();
        cout << solve() << endl;
    }
    return 0;
}