#include <bits/stdc++.h>
using namespace std;
int f1 = 0, f2 = 1;
void func(int n, int i)
{
    if (i > n)
        return;
    cout << i << " ";
    func(n, i + 1);
}
void rev_func(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    rev_func(n - 1);
}
void back_func(int n, int i)
{
    if (i == 0)
        return;
    back_func(n, i - 1);
    cout << i << " ";
}
void back_rev_func(int i, int n)
{
    if (i > n)
        return;
    back_rev_func(i + 1, n);
    cout << i << " ";
}
int main()
{
    int n;
    cin >> n;

    cout << "\nPrint 1 to n: ";
    func(n, 1);
    cout << endl;

    cout << "\nPrint n to 1: ";
    rev_func(n);
    cout << endl;

    cout << "\nPrint 1 to n using backtracing : ";
    back_func(n, n);
    cout << endl;

    cout << "\nPrint n to 1 using backtracing : ";
    back_rev_func(1, n);
    cout << endl
         << endl;
}