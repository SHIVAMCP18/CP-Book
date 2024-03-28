    #include <bits/stdc++.h>
    using namespace std;

    #define endl '\n'
    #define S_R ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

    int main() {
        S_R;
        int n; //Array Size 
        cin >> n;

        int a[n][n];//2D-Array
        map<int,int> m; //C++ stl 

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cin >> a[i][j];   //2D-Array Input
                m[a[i][j]]++;     //Stores The Frequency Of All Elements in 2D-Array
            }
        }

        int X;  //Target Element
        cin >> X;
        auto it = m.find(X); //Returns The Iterator Of The Target Element

        if(it!=m.end()){ //If Target Is Not Present In The Array Then It will Return m.end()
            cout << it->second << endl;  //it->second Prints The Frequency 
        }

        else{
            cout << "Element Not Present :( " << endl;
        }
    }


    //Input

//    4 (Array Size)
//    1 2 3 4 (Array Input)
//    5 6 7 8
//    4 10 11 12
//    12 23 4 4
//    4   (Target Element)


    //Output

//    4   (Fequency of target element or the count of the target element)     