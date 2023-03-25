// AUTHOR :: RAHUL MISTRY
// DATE   :: 25/03/2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
#define ALL(s) (s).begin(),(s).end()
#define R(i,m,n)	for(int i=m;i>=n;i--)
#define FF(i,m,n)	for(int i=m;i<n;i++)
#define F(i,n)	FF(i,0,n)
#define CLR(s,v) memset(s,v,sizeof(s))
string to_str(LL x){ ostringstream o;o<<x;return o.str();}
LL to_int(string s){ istringstream st(s); LL i;	st>>i;return i;}
#define FR(it,t) for(typeof(t.begin()) it=t.begin(); it!=t.end(); ++it)
typedef pair<int,int> PI;
#define MP(x,y) make_pair(x,y)
#define bp(i) __builtin_popcount(i)

int arr[100000], brr[100000];

int main() {
    int t; 
    cin>>t;
    while(t-- > 0) {
        int n,m;
        cin >> n >> m;
        F(i,n)  cin >> arr[i];
        F(i,m)  cin >> brr[i];
        int i = 0, j = 0;
        int k = 0;
        int ans = 0;
        while (true) {
            if (i==n || j==m) break;
            if (arr[i] < brr[j]) {
                if (k==1) ans++;
                k = 0;
                i++;
            } else {
                if (k==0) ans++;
                k = 1;
                j++;
            }
        }
        if (i < n && k == 1) ans++;
        if (j < m && k == 0) ans++;
        cout << ans << endl;
    }
    
	return 0;
}