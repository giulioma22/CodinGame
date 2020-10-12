#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int speed, lightCount, distance, duration, t_delta;
    vector<vector<int>> stops;
    cin >> speed >> lightCount; cin.ignore();
    for (int i = 0; i < lightCount; i++) {
        cin >> distance >> duration; cin.ignore();
        stops.push_back({distance, duration});
    }

    while (1){
        
        // Check if good speed for all stops
        for (int i = 0; i < lightCount; i++){
            t_delta = 3.6/speed*stops[i][0]/stops[i][1];
            // If good
            if (t_delta%2 == 0){
                // If last stop, print speed
                if (i == lightCount-1){
                    cout << speed << endl;
                    return 0;
                }
            } else {
                speed--;
                break;
            }
        }
    }

}