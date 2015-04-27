#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void rotate(vector<vector<T> > &v)
{
    size_t n = v.size();
    for (size_t r = 0; r < n / 2; ++r)
        for (size_t c = 0; c < (n + 1) / 2; ++c)
        {
            T temp = v[r][c];
            v[r][c] = v[n - 1 - c][r];
            v[n - 1 - c][r] = v[n - 1 - r][n - 1 - c];
            v[n - 1 - r][n - 1 - c] = v[c][n - 1 - r];
            v[c][n - 1 - r] = temp;
        }
}


template <typename T>
void reflect(vector<vector<T> > &v)
{
    size_t n = v.size();
    for (size_t r = 0; r < n / 2; ++r)
        for (size_t c = 0; c < n; ++c)
            swap(v[r][c], v[n - 1 - r][c]);
}


void compare(vector<vector<char> > &pattern,
             const vector<vector<char> > &newPattern,
             int &ro,
             int &re)
{

    while (re < 2)
    {
        while (ro < 4)
        {
            if (pattern == newPattern)
                return;

            rotate(pattern);
            ++ro;
        }

        ro = 0;
        reflect(pattern);
        ++re;
    }
}

int main()
{
    int T = 1;
    int n;
    while (cin >> n)
    {
        vector<vector<char> > pattern(n, vector<char>(n)),
                              newPattern(n, vector<char>(n));
        for (int r = 0; r < n; ++r)
        {
            for (int c = 0; c < n; ++c)
                cin >> pattern[r][c];
            for (int c = 0; c < n; ++c)
                cin >> newPattern[r][c];
        }

        int ro = 0, re = 0;
        compare(pattern, newPattern, ro, re);

        cout << "Pattern " << T++ << " was ";

        if (re == 2)
            cout << "improperly transformed.";
        else if (re == 0)
        {
            if (ro == 0)
                cout << "preserved.";
            else
                cout << "rotated "
                     << 90 * ro
                     << " degrees.";
        }
        else
        {
            cout << "reflected vertically";
            if (ro == 0)
                cout << ".";
            else
            {
                cout << " and rotated "
                     << 90 * ro
                     << " degrees.";
            }
        }
        cout << endl;
    }
    return 0;
}
