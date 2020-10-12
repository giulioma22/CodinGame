#include <iostream>
#include <vector>

using namespace std;

int compute_neighbor(const vector<string>& grid, const int& i, const int& j){

    int result = 0;

    // Ensure we only check inbounds
    if (i != grid.size()-1 && grid[i+1][j] != '#'){result++;}
    if (i != 0 && grid[i-1][j] != '#'){result++;}
    if (j != grid[0].size()-1 && grid[i][j+1] != '#'){result++;}
    if (j != 0 && grid[i][j-1] != '#'){result++;}

    return result;
}

int main()
{
    int width, height;
    cin >> width >> height; cin.ignore();
    vector<string> grid;

    // Store lines in grid
    for (int i = 0; i < height; i++) {
        string line;
        cin >> line; cin.ignore();
        grid.push_back(line);
    }

    // Calculate new value only on empty cells
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++){
            if (grid[i][j] == '#'){
                cout << grid[i][j];
            } else {
                cout << compute_neighbor(grid, i, j);
            }
        }
        cout << endl;
    }
}