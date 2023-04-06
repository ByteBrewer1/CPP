#include<bits/stdc++.h>
using namespace std;


vector<int> parseInts(string str) {
    istringstream ss(str);
    int num;
    char ch;
    vector<int> result;
    while(ss){
        ss >> num;
        ss >> ch;
        result.push_back(num);
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}