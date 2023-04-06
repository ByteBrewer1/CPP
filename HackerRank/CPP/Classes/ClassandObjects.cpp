// AUTHOR :: RAHUL MISTRY
// DATE   :: 06/04/2023

#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
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

class Student
{
private:
    vector<int> scores;
    
public:
    void input()
    {
        for(int i=0; i<5; i++)
        {
            int temp {};
            cin >> temp;
            scores.push_back(temp);
        }
    }
    
    int calculateTotalScore()
    {
        int sum {};
        for(const int &i: scores)
        {
            sum += i;
        }
        return sum;
    }
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int num_of_students {};
    vector<Student> students;
    int kristens_score {};
    int better_score {};
    
    cin >> num_of_students;
    
    for(int i=0; i<num_of_students; i++)
    {
        students.push_back(Student());
        students[i].input();
    }
    
    kristens_score = students[0].calculateTotalScore();
    
    for(int i=1; i<students.size(); i++)
    {
        if(kristens_score<students[i].calculateTotalScore())
            better_score += 1;
    }
    
    cout << better_score;
    
    return 0;
}




/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
// Write your Student class here
class Student
{
    private:
    int scores[5];
    public:
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> scores[i];
        }
    }
    int calculateTotalScore()
    {
        int count = 0;
        for (int i = 0; i < 5; i++)
        {
            count += scores[i];
        }
        return count;
    }
};
int main()
{
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    for(int i = 0; i < n; i++)
    {
        s[i].input();
    }
    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();
    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if(total > kristen_score)
        {
            count++;
        }
    }
    // print result
    cout << count;
    return 0;
}
*/