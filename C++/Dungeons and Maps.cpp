#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int w, h, y, x, n, length, currX, currY;
    cin >> w >> h >> y >> x >> n; cin.ignore();
    string full_map[n][h];
    vector<int> result = {-1, 100};   // Map / Length

    // Store maps
    for (int m = 0; m < n; m++) {
        for (int j = 0; j < h; j++) {
            string mapRow;
            getline(cin, mapRow);
            full_map[m][j] = mapRow;
        }
    }

    for (int m = 0; m < n; m++){
        length = 1; currX = x; currY = y;

        // Walk each map's path
        while (1){
            length++;
            if (full_map[m][currY].substr(currX,1) == "^") {full_map[m][currY].replace(currX, 1, "."); currY--;}
            else if (full_map[m][currY].substr(currX,1) == "v") {full_map[m][currY].replace(currX, 1, "."); currY++;}
            else if (full_map[m][currY].substr(currX,1) == "<") {full_map[m][currY].replace(currX, 1, "."); currX--;}
            else if (full_map[m][currY].substr(currX,1) == ">") {full_map[m][currY].replace(currX, 1, "."); currX++;}
            else if (full_map[m][currY].substr(currX,1) == "T" && length < result[1]) {
                result[0] = m;
                result[1] = length;
                break;
            } else {
                break;
            }
        }
    }

    // Check if trap
    result[0] != -1 ? cout << result[0] << endl : cout << "TRAP" << endl;

}