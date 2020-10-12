#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int w, h, countX, countY, i, x, y, max, squares = 0;
    cin >> w >> h >> countX >> countY; cin.ignore();
    vector<int> Vx, Vy;
    map<int, int> Mx{{w,1}}, My;
    map<int,int>::iterator it;

    // Store x values
    for (i = 0; i < countX; i++) {
        cin >> x; cin.ignore();
        Vx.push_back(x);

        it = Mx.find(x);
        if (it != end(Mx)){
            it->second++;
        } else {
            Mx.insert(make_pair(x, 1));
        }
    }

    Vx.push_back(w);

    // Store y values
    for (i = 0; i < countY+1; i++) {
        if (i == countY){y = h;}
        cin >> y; cin.ignore();
        Vy.push_back(y);

        it = My.find(y);
        if (it != end(My)){
            it->second++;
        } else {
            My.insert(make_pair(y,1));
        }
        if (Mx.find(y) != end(Mx)){
            squares += Mx[y];
        }
    }

    max = Mx.size() > My.size() ? Mx.size() : My.size();

    // Double loop to count all square combinations (x & y simultaneously)
    for (int u = 1; u < max; u++){
        for (int d = 0; d < u; d++){

            // Horizontal segments
            if (u < Vx.size()){
                it = Mx.find(Vx[u]-Vx[d]);
                if (it != end(Mx)){
                    it->second++;
                } else {
                    Mx.insert(make_pair(Vx[u]-Vx[d],1));
                }
                if (My.find(Vx[u]-Vx[d]) != end(My)){
                    squares += My[Vx[u]-Vx[d]];
                }
            }

            // Vertical segments
            if (u < Vy.size()){
                it = My.find(Vy[u]-Vy[d]);
                if (it != end(My)){
                    it->second++;
                } else {
                    My.insert(make_pair(Vy[u]-Vy[d],1));
                }
                if (Mx.find(Vy[u]-Vy[d]) != end(Mx)){
                    squares += Mx[Vy[u]-Vy[d]];
                }
            }
        }
    }

    cout << squares << endl;

}