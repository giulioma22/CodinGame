#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    int width, height, x, y;
    cin >> width >> height; cin.ignore();
    vector<vector<vector<int>>> grid;
    vector<int> prevX(height, -1), prevY(width, -1);

    // Create grid
    for (int i = 0; i < height; i++) {
        string line;
        getline(cin, line);
        vector<vector<int>> v;
        for(char c : line){

            // If node ('0')
            if (c == '0'){
                // Update left node
                if (v.size() > 0 && prevX[i] != -1){
                    v[prevX[i]][1] = v.size();
                }
                // Update upper node
                if (i > 0 && prevY[v.size()] != -1){
                    grid[prevY[v.size()]][v.size()][2] = i;
                }

                prevX[i] = v.size();
                prevY[v.size()] = i;
                v.push_back({0,-1,-1});
            
            // If NO node ('.')
            } else {
                v.push_back({-1,-1,-1});
            }
        }
        grid.push_back(v);
    }

    // Print results
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            x = grid[i][j][1]; y = grid[i][j][2];
            if (grid[i][j][0] == 0){
                printf("%d %d ", j, i);
                x > 0 ? printf("%d %d ", x, i) : printf("-1 -1 ");
                y > 0 ? printf("%d %d\n", j, y) : printf("-1 -1\n");
            }
        }
    }
}