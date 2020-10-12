#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

#define ERR(x) cerr << x << endl

using namespace std;

int main()
{

    map<string,vector<int>> grid;
    map<string,vector<int>>::iterator itCol, itSub;

    for (int i = 0; i < 9; i++) {
        int row[9] = {};
        for (int j = 0; j < 9; j++) {
            int n;
            cin >> n; cin.ignore();
            string col, sub;
            col = "c" + to_string(j);
            sub = "s" + to_string(j/3+3*(i/3));

            itCol = grid.find(col);
            itSub = grid.find(sub);

            // Check row
            if (find(begin(row), end(row), n) == end(row)){ // Not found
                row[j] = n;
            } else {
                cout << "false" << endl;
                return 0;
            }

            // Check column
            if (itCol == end(grid)){
                grid.insert(make_pair(col,vector<int> {n}));
            } else {
                if (find(begin(grid[col]), end(grid[col]), n) == end(grid[col])){
                    itCol->second.push_back(n);
                } else {
                    cout << "false" << endl;
                    return 0;
                }
            }

            // Check subgrid
            if (itSub == end(grid)){
                grid.insert(make_pair(sub,vector<int> {n}));
            } else {
                if (find(begin(grid[sub]), end(grid[sub]), n) == end(grid[sub])){
                    itSub->second.push_back(n);
                } else {
                    cout << "false" << endl;
                    return 0;
                }
            }
        } // End for (j)
    } // End for (i)

    cout << "true" << endl;

}