    #include <bits/stdc++.h>
    using namespace std;

    #define endl '\n'
    #define S_R ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

    int main() {
        S_R;

        int n;
        cin >> n;
        int a[n][n];

        for (int i = 0 ; i < n; ++i)
        {
            for (int j = 0 ; i < n ; ++j)
            {
                cin >> a[i][j];
            }
        }
        int pri_sum = 0 , sec_sum = 0;
        for (int i = 0 ; i < n ; ++i)
        {
            pri_sum+= a[i][i];
            sec_sum+= a[i][n - i - 1];
        }

        cout << "Principal Diagonal Sum" << pri_sum << endl;
        cout << "Secondary Diagonal Sum" << sec_sum << endl;
    }
