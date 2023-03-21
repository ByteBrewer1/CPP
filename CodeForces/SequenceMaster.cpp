/*
"programmed to work and not to feel" ~Hello World
⡆⣐⢕⢕⢕⢕⢕⢕⢕⢕⠅⢗⢕⢕⢕⢕⢕⢕⢕⠕⠕⢕⢕⢕⢕⢕⢕⢕⢕⢕
⢐⢕⢕⢕⢕⢕⣕⢕⢕⠕⠁⢕⢕⢕⢕⢕⢕⢕⢕⠅⡄⢕⢕⢕⢕⢕⢕⢕⢕⢕
⢕⢕⢕⢕⢕⠅⢗⢕⠕⣠⠄⣗⢕⢕⠕⢕⢕⢕⠕⢠⣿⠐⢕⢕⢕⠑⢕⢕⠵⢕
⢕⢕⢕⢕⠁⢜⠕⢁⣴⣿⡇⢓⢕⢵⢐⢕⢕⠕⢁⣾⢿⣧⠑⢕⢕⠄⢑⢕⠅⢕
⢕⢕⠵⢁⠔⢁⣤⣤⣶⣶⣶⡐⣕⢽⠐⢕⠕⣡⣾⣶⣶⣶⣤⡁⢓⢕⠄⢑⢅⢑
⠍⣧⠄⣶⣾⣿⣿⣿⣿⣿⣿⣷⣔⢕⢄⢡⣾⣿⣿⣿⣿⣿⣿⣿⣦⡑⢕⢤⠱⢐
⢠⢕⠅⣾⣿⠋⢿⣿⣿⣿⠉⣿⣿⣷⣦⣶⣽⣿⣿⠈⣿⣿⣿⣿⠏⢹⣷⣷⡅⢐
⣔⢕⢥⢻⣿⡀⠈⠛⠛⠁⢠⣿⣿⣿⣿⣿⣿⣿⣿⡀⠈⠛⠛⠁⠄⣼⣿⣿⡇⢔
⢕⢕⢽⢸⢟⢟⢖⢖⢤⣶⡟⢻⣿⡿⠻⣿⣿⡟⢀⣿⣦⢤⢤⢔⢞⢿⢿⣿⠁⢕
⢕⢕⠅⣐⢕⢕⢕⢕⢕⣿⣿⡄⠛⢀⣦⠈⠛⢁⣼⣿⢗⢕⢕⢕⢕⢕⢕⡏⣘⢕
⢕⢕⠅⢓⣕⣕⣕⣕⣵⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣷⣕⢕⢕⢕⢕⡵⢀⢕⢕
⢑⢕⠃⡈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢃⢕⢕⢕
⣆⢕⠄⢱⣄⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⢁⢕⢕⠕⢁
⣿⣦⡀⣿⣿⣷⣶⣬⣍⣛⣛⣛⡛⠿⠿⠿⠛⠛⢛⣛⣉⣭⣤⣂⢜⠕⢑⣡⣴⣿
R      A       H       U       L        
*/
// AUTHOR :: RAHUL MISTRY
//! DATE  :: 21/03/2023
// template~ : 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define sws ios::sync_with_stdio(false);cin.tie( NULL);cout.tie(NULL);
#define pb push_back
#define endl '\n'
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
#define pll pair<long long,long long>
#define pqi priority_queue<int, vector<int>, greater<int>>
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
const int MAX = 2e5+10;
const ll MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const ld EPS = 1e-8;
const ld PI = acos(-1);
// . . . . . . . . . . . . . . . 
int main() {
    sws;

    int t; cin >> t;
    while(t--){
        int n; cin >> n; vll v(2*n);
        for(int i=0; i<2*n; i++){cin >> v[i];}
        ll ans = LLINF, aux = 0;
        if(n == 1){ans = min(ans, abs(v[0] - v[1]));}
        if(n == 2){
            aux = 0;
            for(int i=0; i<4; i++){
                aux += abs(v[i] - 2);
            }
            ans = min(ans, aux);
        }
        if(n % 2 == 0){
            ll maior=-LLINF, idxm=-1;
            for(int i=0; i<2*n; i++){
                if(v[i] > maior){maior = v[i]; idxm = i;}
            }
            aux = 0;
            for(int i=0; i<2*n; i++){
                if(idxm == i){aux += abs(v[i] - n);}
                else{aux += abs(v[i] + 1);}
            }
            ans = min(ans, aux);
        }
        aux = 0;
        for(int i=0; i<2*n; i++){
            aux += abs(v[i]);
        }
        ans = min(ans, aux);
        cout << ans << endl;
    }

    return 0;
}