    #include <bits/stdc++.h>
    using namespace std;

    #define endl '\n'
    #define S_R ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

    int main() {
        S_R;
        int n,m;
        cin >> n >> m;

        int s[n][m],r[m][n];
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cin >> s[i][j];
            }
        }

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                r[j][i] = s[i][j];
            }
        }

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                cout << r[i][j] << " ";
            }
            cout << endl;
        }
    }
    