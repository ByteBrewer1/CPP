#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    string words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int n = a; n <= b; n++)
    {

        if (n >= 1 && n <= 9)
        {
            cout << words[n - 1] << "\n";
        }
        else if (n % 2 == 1)
        {
            cout << "odd" << endl;
        }
        else
        {
            cout << "even" << endl;
        }
    }

    return 0;
}