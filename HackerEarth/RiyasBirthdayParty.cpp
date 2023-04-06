#pragma GCC optimize("unroll-loops")
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
#define r(i ,n) for (int64_t (i) = 0; (i) < (n); (i) ++ )
#define f(i,a,b) for(int64_t (i) = (a); (i) < (b); (i)++)
#define fd(i,a,b) for(int64_t (i) = (a); (i) > (b); (i)--)
#define ll int64_t
namespace fast_io {
    const int kBufSize = 1 << 15;
    char input_buf[kBufSize];
    int input_pos, input_len;
    char GetC() {
        if (input_pos == input_len) {
            input_pos = 0, input_len = static_cast<int>(fread(input_buf, 1, kBufSize, stdin));
            if (!input_len)
                return EOF;
        }
        return input_buf[input_pos++];
    }
    void GetS(string& s) {
        char c;
        while (isspace(c = GetC()));
        do {
            s += c;
        } while (!isspace(c = GetC()) && c != EOF);
    }
    template <class T>
    void GetN(T& n) {
        char c;
        int sign = 1;
        while (!isdigit(c = GetC()))
            if (c == '-')
                sign *= -1;
        n = c - '0';
        while (isdigit(c = GetC()))
            n = n * 10 + (c - '0');
        n *= sign;
    }
    template <class T, class... Ts>
    void GetN(T& t, Ts&... ts) {
        GetN(t), GetN(ts...);
    }
    char output_buf[kBufSize], number_buf[100];
    int output_pos;
    void flush() {
        fwrite(output_buf, 1, output_pos, stdout);
        output_pos = 0;
    }
    void PutC(char c) {
        if (output_pos == kBufSize)
            flush();
        output_buf[output_pos++] = c;
    }
    void PutS(const string& s) {
        for (auto& c : s)
            PutC(c);
    }
    template <class T>
    void PutN(T n, char after = '\0') {
        if (n < 0)
            PutC('-'), n *= -1;
        int len = 0;
        for ( ; n >= 10; n /= 10)
            number_buf[len++] = static_cast<char>('0' + (n % 10));
        PutC(static_cast<char>('0' + n));
        for (int i = len - 1; i >= 0; --i)
            PutC(number_buf[i]);
        if (after)
            PutC(after);
    }
    void Init() {
        assert(atexit(flush) == 0);
    }
}
 
//driver code
const int mod = 1e9+7;
const int M   = 1e6+1;
const ll inf  = 1e18+1;
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    using namespace fast_io;
    Init();
    
    ll res;
    ll test;
    GetN(test);
    ll n;
    r(i, test){
        GetN(n);
        if(n==1){
            PutC('1');
            PutC('\n');
        }
        else{;
        n%=mod;
        res = (6*n-6)-(n-2)+2*(n-1)*(n-2);
        res%=mod;
        PutN(res);
            PutC('\n');
        }
    }
}