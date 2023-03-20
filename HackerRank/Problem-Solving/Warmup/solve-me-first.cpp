// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023

#include<bits/stdc++.h>
using namespace std;

int solveMeFirst(int a, int b) {
    return a+b;
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}