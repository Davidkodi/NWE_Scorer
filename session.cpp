//
// Created by davidkodi on 12/10/22.
//
#include "session.h"
Session sessionStart(){
    int ans;
    Session S;
    cout << "Enter Type of Session:" << endl;
    cout << "\t(1) Meet \n\t(2)Tournament \n\t(3) Match" << endl;
    cin >> S.type;

    return S;
}