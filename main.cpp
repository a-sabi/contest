#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int *a = new int[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    double min_sr = INT_MAX;
    for(int i = 0; i < n-k; i++)
    {
        double sr = 0;
        for(int j = i; j < i+k; j++)
        {
            sr += a[j];
        }
        sr /= k;
        min_sr = min(min_sr, sr);
    }
    cout << min_sr;

    delete[] a;
    a = 0;
}