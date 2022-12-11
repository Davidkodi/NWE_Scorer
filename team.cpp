//
// Created by davidkodi on 12/10/22.
//

#include "team.h"

Team* addWrestler(){
    cout << "Enter first and last name of the wrestler: (FIRST LAST)" << endl;
    Team* team;
    Wrestler w;
    cin >> w.firstName >> w.lastName;

    Team* t = add2Team(w, team);

    return t;
}

Team* add2Team(Wrestler w, Team* head) {
    if (head == NULL){
        Team* newhead = new Team;
        newhead->wrestler = w;
        newhead->next = NULL;
        return newhead;
    }

    head->next = add2Team(w, head->next);
    return head;
}

void searchWrestler(Team* team) {
    cout << "Search Wrestler: (FIRST LAST)" << endl;
    string first, last;
    cin >> first >> last;

    while(team != NULL){
        if(team->wrestler.firstName == first && team->wrestler.lastName == last){
            //getWrestlerData();
            //TEMPORARY
            cout << first << " " << last << endl;
        }
        else{
            team = team->next;
        }
    }
}
//Save Data Export Team with Wrestlers to file

//Fix add Wrestler to work without saving data first
//Fix search Wrestler to work without savng data first

