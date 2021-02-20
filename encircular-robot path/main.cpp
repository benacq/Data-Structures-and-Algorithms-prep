// A c++ program to check if the given path for a robot is circular or not 
#include<iostream>
#include <vector>

using namespace std;

#define N 0
#define E 1
#define S 2
//#define W 3

bool isCircular(const std::string &path) {

    int x = 0, y = 0;
    int dir = N;

    // Traverse the path given for robot
    for (int i = 0; path[i]; i++) {
        // Find current move
        char move = path[i];

        // If move is left or right, then change direction
        if (move == 'R')
            dir = (dir + 1) % 4;
        else if (move == 'L')
            dir = (4 + dir - 1) % 4;

            // If move is Go, then change  x or y according to
            // current direction
        else {
            switch (dir) {
                case N:
                    y++;
                    break;

                case E:
                    x++;
                    break;

                case S:
                    y--;
                    break;

                default:
                    x--;
            }
        }
    }

    // If robot comes back to (0, 0), then path is cyclic
    return (x == 0 && y == 0);
}


vector<string> encircular(vector<string> commands) {
    vector<string> outputs;
    outputs.reserve(commands.size());
    string data;

    for (int j = 0; j < commands.size(); ++j) {
        if (isCircular(commands[j])){
             data = "YES";
             outputs.emplace_back(data);
//            outputs.insert( outputs.end(), "YES" );
        }else{
            data = "NO";
//            outputs.insert( outputs.end(), "NO" );
             outputs.emplace_back(data);
        }
    }

    for (int j = 0; j < commands.size(); ++j) {
        cout<<commands[j]<<" ";
    }


}


int main() {
    int n;
    cin >> n;
    vector<string> commands(n);

    for (int i = 0; i < n; ++i) {
        cin >> commands[i];
    }

    encircular(commands);

//    for (int j = 0; j < commands.size(); ++j) {
//        if (isCircular(commands[j]))
//            cout << "Given sequence of moves is circular" << endl;
//        else
//            cout << "Given sequence of moves is NOT circular" << endl;
//    }



//    std::string path = "GLGLGLG";
////    char path[] = "GLGLGLG";
//    if (isCircular(path))
//        cout << "Given sequence of moves is circular";
//    else
//        cout << "Given sequence of moves is NOT circular";
}