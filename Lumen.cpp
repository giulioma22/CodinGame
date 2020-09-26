#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to compute lit cells
void expand_light(vector<vector<int>>& grid, const int& i, const int& j, const int& L){

    int minX, maxX, minY, maxY;

    minX = j < L-1 ? 0 : j-(L-1);
    maxX = j+L > grid.size() ? grid.size() : j+L;
    minY = i < L-1 ? 0 : i-(L-1);
    maxY = i+L > grid.size() ? grid.size() : i+L;

    // "Turn on" lit cells around candle
    for (int k = minY; k < maxY; k++){
        fill(begin(grid[k])+minX, begin(grid[k])+maxX, 1);
    }
 
}

int main()
{
    int N, L, result = 0;
    cin >> N >> L; cin.ignore();
    vector<vector<int>> grid (N, vector<int> (N, 0));

    // Find candles in grid
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            string cell;
            cin >> cell; cin.ignore();
            if (cell == "C"){
                expand_light(grid,i,j,L);
            }
        }
    }

    // Count all dark (0) cells
    for (int i = 0; i < N; i++) {
        result += count(begin(grid[i]), end(grid[i]), 0);
    }
    cout << result << endl;

}