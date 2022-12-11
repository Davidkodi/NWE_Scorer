#include <iostream>
#include <istream>
#include "session.h"
#include "team.h"
using namespace std;

int main(){
    cout << "\n"
            "                                                              \n"
            " _   ___        _______    ____   ____ ___  ____  _____ ____  \n"
            "| \\ | \\ \\      / | ____|  / ___| / ___/ _ \\|  _ \\| ____|  _ \\ \n"
            "|  \\| |\\ \\ /\\ / /|  _|    \\___ \\| |  | | | | |_) |  _| | |_) |\n"
            "| |\\  | \\ V  V / | |___    ___) | |__| |_| |  _ <| |___|  _ < \n"
            "|_| \\_|  \\_/\\_/  |_____|  |____/ \\____\\___/|_| \\_|_____|_| \\_\\\n"
            "                                                              " << endl;
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
            addWrestler();
        if(ans == "3")
            searchWrestler(team);
    }


    return 0;
}
