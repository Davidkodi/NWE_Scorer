#include <iostream>
#include <istream>
#include "session.h"
#include "team.h"
using namespace std;

int main(){
    cout << "Welcome to NWE Scorer Suite\n" << endl;
    string ans;

    while(ans != "exit"){
        Session session;
        Wrestler wrestler;
        Team* team;
        cout << "Enter Selection: (#)" << endl;
        cout << "\t(1) Start New Session" << endl;
        cout << "\t(2) Add Wrestler" << endl;
        cout << "\t(3) Search Wrestler" << endl;

        cin >> ans;

        if(ans == "1")
            sessionStart();
        if(ans == "2")
            addWrestler(wrestler, team);
        if(ans == "3")
            searchWrestler(team);
    }


    return 0;
}
