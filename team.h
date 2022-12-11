//
// Created by davidkodi on 12/10/22.
//
#ifndef UNTITLED_WRESTLER_H
#define UNTITLED_WRESTLER_H
#include <iostream>
using namespace std;
//Individual Wrestler with stats
struct Wrestler{
    string firstName, lastName;
    int TD, E, R, N2, N4, RT, Fall,
            tFall, tPoints, W, L;
};
//Team Struct to hold all Wrestlers on the team - Linked List Format
struct Team{
    Wrestler wrestler;
    Team* next;
};

//Adds a Wrestler to the Team List
Team* addWrestler(Wrestler, Team*);
//Add function to add to the list
Team* add2Team(Wrestler, Team*);
//Searches specific wrestler within the current team and returns the wrestler
void searchWrestler(Team*);

#endif //UNTITLED_WRESTLER_H
