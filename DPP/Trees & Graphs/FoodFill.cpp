// // An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.

// // You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].

// To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as 
//the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color.

// Return the modified image after performing the flood fill.

// Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2
// Output: [[2,2,2],[2,2,0],[2,0,1]]

// Input: image = [[0,0,0],[0,0,0]], sr = 0, sc = 0, color = 0
// Output: [[0,0,0],[0,0,0]]

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e2 + 7;

void dfs(int i , int j , int initialColor , int newColor , vector<vector<int>>& image, int sr, int sc, int color){
    int n = image.size();
    int m = image[0].size();
    if(i < 0 || j < 0) return;
    if(i >= n || j >= m) return;
    if(image[i][j] != initialColor) return;

    image[i][j] = newColor;

    dfs(i - 1 , j , initialColor , newColor , image);
    dfs(i + 1 , j , initialColor , newColor , image);
    dfs(i , j - 1 , initialColor , newColor , image);
    dfs(i , j + 1 , initialColor , newColor , image);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor){
    int initialColor = image[sr][sc];
    if(initialColor != newColor)
     dfs(sr , sc , initialColor , newColor , image);
    return image;
}
void solve(){

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    //cin >> T;
    while(T--)
        solve();
}