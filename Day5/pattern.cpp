#include <iostream>
using namespace std;

void printStars(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;
}

int main()
{
    int n;

    int t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            printStars(i);
        }
    }
}