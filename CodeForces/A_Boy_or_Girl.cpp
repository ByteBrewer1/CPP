#include <bits/stdc++.h>
using namespace std;

int main(){
  string name;
  cin>>name;
  
  set <char> s;
  for(int i = 0; i < name.size(); i++) {
    s.insert(name[i]);
  }
  int sz = s.size();

  if(sz%2==0) cout<<"CHAT WITH HER!";
  else cout<<"IGNORE HIM!";
  return 0;
}
