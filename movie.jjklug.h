//
// Created by jackk on 9/3/2024.
//

#ifndef PRACTICE2_JJKLUG_H
#define PRACTICE2_JJKLUG_H

//string max length
#define MAX_MOVIE_NAME_LEN 63

//struct declaration
typedef struct {
char title[MAX_MOVIE_NAME_LEN+1];
int year;
int audience;
int critics;
} Movie;

//function declarations
int initializeMovie(Movie *m, char *title, int year, int audience, int critics);
int compareByTitle(Movie *m1, Movie *m2);
int compareByAudience(Movie *m1, Movie *m2);
int compareByYear(Movie *m1, Movie *m2);
void printMovie(Movie *m);

#endif //PRACTICE2_JJKLUG_H
