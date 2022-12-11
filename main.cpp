#include <iostream>
#include <istream>
#include "session.h"
using namespace std;
/*
struct Session{
    //Meet, Tournament, Dual
    string type;
};

struct Wrestler{
    string name;
    int TD, E, R, N2, N4, RT, Fall,
            tFall, tPoints, W, L;
};

struct Event{
    int totals;
    double avg, oldAvg, increase;
};*/

int main(){
    cout << "Welcome to NWE Scorer Suite\n" << endl;
    string ans;

    while(ans != "exit"){
        cout << "Enter Selection:" << endl;
        cout << "\t(1) Start New Session" << endl;
        cin >> ans;

        if(ans == "1")
            sessionStart();
    }


    return 0;
}
