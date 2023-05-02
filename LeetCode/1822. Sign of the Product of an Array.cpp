██████    █████   ██   ██  ██    ██  ██             ███    ███  ██  ███████  ████████  ██████   ██    ██
██   ██  ██   ██  ██   ██  ██    ██  ██             ████  ████  ██  ██          ██     ██   ██   ██  ██ 
██████   ███████  ███████  ██    ██  ██             ██ ████ ██  ██  ███████     ██     ██████     ████  
██   ██  ██   ██  ██   ██  ██    ██  ██             ██  ██  ██  ██       ██     ██     ██   ██     ██   
██   ██  ██   ██  ██   ██   ██████   ███████        ██      ██  ██  ███████     ██     ██   ██     ██   


// AUTHOR :: RAHUL MISTRY
// DATE   :: 00 / 00 / 2023


#include <bits/stdc++.h>
using namespace std;

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b)*b)
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)
#define is_prime(a) ((a)==2||(a)>1&&((a)&1)&&__builtin_probabiliyll((a),2))
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"


class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                return 0;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                ans = -ans;
            }
        }
        return ans;
    }
};


// Main Function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--){
        Solution obj;
        vector<int> nums;
        int n;
        cin>>n;
        while(n--){
            int x;
            cin>>x;
            nums.pb(x);
        }
        cout<<obj.arraySign(nums)<<"\n";
    }
    return 0;
}


