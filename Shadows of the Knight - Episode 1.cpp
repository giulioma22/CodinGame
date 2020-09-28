#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

struct state {
    int x,y, dx,dy;   // Position / Bomb direction
};

map <string, pair<int,int>> move_map {
    {"U", make_pair(0, -1)}, {"UR", make_pair(1, -1)}, {"R", make_pair(1, 0)},
    {"DR", make_pair(1, 1)}, {"D", make_pair(0, 1)}, {"DL", make_pair(-1, 1)},
    {"L", make_pair(-1, 0)}, {"UL", make_pair(-1, -1)}};

int main()
{
    int W, H, N; // Width / Height / Moves left
    cin >> W >> H >> N; cin.ignore();

    state CURR, PREV;
    cin >> CURR.x >> CURR.y; cin.ignore();

    int jumpX, jumpY, minX = 0, minY = 0, maxX = W, maxY = H;
    bool first_loop = true;

    while (1) {

        string bombDir;
        cin >> bombDir; cin.ignore();

        // Compute direction multipliers
        CURR.dx = get<0>(move_map[bombDir]);
        CURR.dy = get<1>(move_map[bombDir]);

        // Update min & max bomb boundaries
        if (CURR.dx == 1 && CURR.x > minX) {minX = CURR.x;}
        else if (CURR.dx == -1 && CURR.x < maxX) {maxX = CURR.x;}
        if (CURR.dy == 1 && CURR.y > minY) {minY = CURR.y;}
        else if (CURR.dy == -1 && CURR.y < maxY) {maxY = CURR.y;}

        if (first_loop){
            jumpX = CURR.dx == 1 ? round(abs(W-1-CURR.x)/2.) : round(abs(CURR.x)/2.);
            jumpY = CURR.dy == 1 ? round(abs(H-1-CURR.y)/2.) : round(abs(CURR.y)/2.);
        } else {
            jumpX = CURR.dx == 1 ? round(abs(maxX-CURR.x)/2.) : round(abs(minX-CURR.x)/2.);
            jumpY = CURR.dy == 1 ? round(abs(maxY-CURR.y)/2.) : round(abs(minY-CURR.y)/2.);
        }

        // Ensure jumps != 0
        if (jumpX < 1){jumpX = 1;}
        if (jumpY < 1){jumpY = 1;}
        first_loop = false;

        // Save current state
        PREV.x = CURR.x; PREV.y = CURR.y; PREV.dx = CURR.dx; PREV.dy = CURR.dy;

        // Compute solution
        CURR.x += CURR.dx * jumpX;
        CURR.y += CURR.dy * jumpY;

        // Ensure inbounds
        if (CURR.x < 0) {CURR.x = 0;}
        else if (CURR.x > W-1) {CURR.x = W-1;}
        if (CURR.y < 0) {CURR.y = 0;}
        else if (CURR.y > H-1) {CURR.y = H-1;}

        // Location of next window Batman should jump to
        cout << CURR.x << " " << CURR.y << endl;
    }
}