#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Function for encryption/decryption
void code(const string& action, string& s, const string& rotor, const string& ab){
    string newS;
    if (action == "ENCODE"){
        for (int i = 0; i < s.length(); i++){
            newS.append(string(1, rotor[ab.find(s[i])]));
        }
    } else {
        for (int i = 0; i < s.length(); i++){
            newS.append(string(1, ab[rotor.find(s[i])]));
        }
    }

    s = newS;

}

int main()
{
    string action, rotor, message, newM, ab = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    getline(cin, action);
    string R[3];
    int shift;
    cin >> shift; cin.ignore();
    for (int i = 0; i < 3; i++) {
        getline(cin, rotor);
        R[i] = rotor;
    }
    getline(cin, message);

    // Encoding
    if (action == "ENCODE"){

        for (int i = 0; i < message.length(); i++){
            newM.append(string(1, ab[(ab.find(message[i])+shift+i)%26]));
        }

        message = newM;

        code(action, message, R[0], ab);
        code(action, message, R[1], ab);
        code(action, message, R[2], ab);

    // Decoding
    } else {

        code(action, message, R[2], ab);
        code(action, message, R[1], ab);
        code(action, message, R[0], ab); 

        for (int i = 0; i < message.length(); i++){
            int idx = (ab.find(message[i])-shift-i);
            idx = idx < 0 ? 26+(idx%26) : idx%26;
            if (idx == 26){idx = 0;}
            
            newM.append(string(1, ab[idx]));
        }

        message = newM;

    }

    // Result
    cout << message << endl;

}