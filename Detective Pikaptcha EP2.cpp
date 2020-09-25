#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int w, h, startX, startY, x, y, nextX, nextY, idx, trapped = 0;;
    cin >> w >> h; cin.ignore();
    string side, line, startD, check, d;
    vector<vector<string>> grid;
    vector<string> dirs = {">", "^", "<", "v"};
    vector<vector<int>> next = {{0,1}, {-1,0}, {0,-1}, {1,0}};

    // Store values
    for (int i = 0; i < h; i++) {
        vector<string> vec;
        cin >> line; cin.ignore();
        for (char c : line){
            if (find(begin(dirs), end(dirs),string(1,c)) != end(dirs)){
                startX = vec.size(); startY = i; startD = string(1,c);
            }
            vec.push_back(string(1,c));
        }
        grid.push_back(vec);
    }
    cin >> side; cin.ignore();

    x = startX; y = startY; d = startD;
    vector<string>::iterator it = find(begin(dirs), end(dirs), d);
    idx = distance(begin(dirs), it);

    // Check grid
    while(1){

        nextX = x+next[idx][1]; nextY = y+next[idx][0];

        // If point to empty cell
        if (nextX >= 0 && nextX < w && nextY >= 0 && nextY < h && grid[nextY][nextX] != "#"){
            
            trapped = 0;
            x = nextX; y = nextY;
            if (x == startX && y == startY){
                grid[y][x] = "1";
                break;
            }
            grid[y][x] = to_string(stoi(grid[y][x])+1);

            // New direction index
            if (side == "L"){
                idx = (idx+1)%4;
            } else {
                idx == 0 ? idx = 3 : idx--;
            }

        // If wall (or outbounds)
        } else {

            // Check if trapped
            trapped++;
            if (trapped == 4){
                grid[y][x] = "0";
                break;
            }

            // New direction index
            if (side == "R"){
                idx = (idx+1)%4;
            } else {
                idx == 0 ? idx = 3 : idx--;
            }
        }

        // Update direction
        d = dirs[idx];

    } // End while

    // Print resulting grid
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }

}