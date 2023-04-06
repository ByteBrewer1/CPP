// AUTHOR :: RAHUL MISTRY
// DATE   :: 06/04/2023

#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

class student
{
    int age;
    string firstname;
    string lastname;
    int standard;

public:
    void setage(int a)
    {
        age = a;
    }
    int getage()
    {
        return age;
    }
    void setfirstname(string b)
    {
        firstname = b;
    }
    string getfirstname()
    {
        return firstname;
    }
    void setlastname(string c)
    {
        lastname = c;
    }
    string getlastname()
    {
        return lastname;
    }
    void setstandard(int d)
    {
        standard = d;
    }
    int getstandard()
    {
        return standard;
    }
    string to_string()
    {
        stringstream ss;
        ss << age << "," << firstname << "," << lastname << "," << standard;
        return ss.str();
    }
};

int main()
{
    int A;
    string B, C;
    int D;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    student s1;
    s1.setage(A);
    s1.setfirstname(B);
    s1.setlastname(C);
    s1.setstandard(D);

    cout << s1.getage() << endl;
    cout << s1.getlastname() << ", " << s1.getfirstname() << endl;
    cout << s1.getstandard() << endl;
    cout << endl;
    cout << s1.to_string() << endl;

    return 0;
}
