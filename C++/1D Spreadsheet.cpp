#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define LOG(x) cout << x << endl;

using namespace std;

int do_oper(const string& operation, const int& arg_1, const int& arg_2)
{
    if (operation == "VALUE"){return arg_1;}
    else if (operation == "ADD"){return arg_1+arg_2;}
    else if (operation == "SUB"){return arg_1-arg_2;}
    else if (operation == "MULT"){return arg_1*arg_2;}
    else {LOG("operation invalid")}
    return -1;
}

int main()
{
    int N, no_ref;
    cin >> N; cin.ignore();

    int final_list[N] = {0};
    string sec_list[N][3];
    vector<int> cnt_vec;
    string operation;
    string arg_1;
    string arg_2;

    for (int i = 0; i < N; i++) {
        
        cin >> operation >> arg_1 >> arg_2; cin.ignore();

        // Check if $ appears in any arg
        if (arg_1.find("$") != string::npos or arg_2.find("$") != string::npos)
        {
            sec_list[i][0] = operation;
            sec_list[i][1] = arg_1;
            if (arg_2 != "_"){
                sec_list[i][2] = arg_2;
            } else {
                sec_list[i][2] = "0";
            }
        } 
        else 
        {
            int a = stoi(arg_1);
            int b = 0;
            if (arg_2 != "_")
            {
                b = stoi(arg_2);
            }
            final_list[i] = do_oper(operation, a, b);
            cnt_vec.push_back(i);
        }

    }

    while (cnt_vec.size() < N){

        for (int i = 0; i < N; i++){

            if (sec_list[i][0]!="VALUE"&&sec_list[i][0]!="ADD"&&sec_list[i][0]!="SUB"&&sec_list[i][0]!="MULT"){
                continue;
            }

            if (sec_list[i][1].find("$") != string::npos){
                no_ref = stoi(sec_list[i][1].substr(1,sizeof(sec_list[i][1])));
                if (find(cnt_vec.begin(), cnt_vec.end(), no_ref) != cnt_vec.end()){
                    sec_list[i][1] = to_string(final_list[no_ref]);
                } else {
                    continue;
                }
            }

            if (sec_list[i][2].find("$") != string::npos){
                no_ref = stoi(sec_list[i][2].substr(1,sizeof(sec_list[i][2])));
                if (find(cnt_vec.begin(), cnt_vec.end(), no_ref) != cnt_vec.end()){
                    sec_list[i][2] = to_string(final_list[no_ref]);
                } else {
                    continue;
                }
            }

            final_list[i] = do_oper(sec_list[i][0], stoi(sec_list[i][1]), stoi(sec_list[i][2]));
            cnt_vec.push_back(i);
            sec_list[i][0] = "_";
            
        }
    }

    for (int i = 0; i < N; i++) {
        cout << final_list[i] << endl;
    }
}