#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int N, L, E; // Number of nodes / links / gateways
    cin >> N >> L >> E; cin.ignore();

    map<int, vector<int>> links;
    vector<int> ga_nodes;

    // Store linked nodes
    for (int i = 0; i < L; i++) {
        int N1, N2; // Linked nodes
        cin >> N1 >> N2; cin.ignore();

        // Update N1 links
        if (links.find(N1) == end(links)){
            links.insert(make_pair(N1, vector<int> {N2}));
        } else {
            links.find(N1)->second.push_back(N2);
        }
        // Update N2 links
        if (links.find(N2) == end(links)){
            links.insert(make_pair(N2, vector<int> {N1}));
        } else {
            links.find(N2)->second.push_back(N1);
        }
    }

    // Store gateway nodes
    for (int i = 0; i < E; i++) {
        int EI; // Getaway node index
        cin >> EI; cin.ignore();
        ga_nodes.push_back(EI);
    }

    // Game loop
    while (1) {
        int SI; // Skynet agent position index
        cin >> SI; cin.ignore();

        // Find link to cut
        for (int i = 0; i < ga_nodes.size(); i++){
            if (find(begin(links[SI]), end(links[SI]), ga_nodes[i]) != end(links[SI])){
                cout << SI << " " << ga_nodes[i] << endl;
            } else if ( i == ga_nodes.size()-1 ){
                cout << ga_nodes[0] << " " << links.find(ga_nodes[0])->second[0] << endl;
            } else {
                continue;
            }
            break;
        }
    }
}