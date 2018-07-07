#include "array.h"

void initadjlist(char * chess,struct adjlist * adjlist1,struct adjlist * adjlist2);

int compare(void const *e1, void const *e2);

bool Visited(char new_element, Array *ends);

void FindAllJump(char * chess , char start , Array *ends);

Array * ReturnAllOfTheMove(char * chess , char start);

void FirstScore(char * chess);

void SecondScore(char * chess);

char *ScoreINIT(bool is_first);

int ScoreCaculate(char *chess_score,char start,char end);
