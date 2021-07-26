#include <iostream>
using namespace std;

const int MAX_MOVIES = 5;
const int MAX_OPINIONS = 6;
const int OPINIONS = 5;
const int MAX_CHARS = 81;

struct Movie {
  int idMovie;
  char title[MAX_CHARS];
  int year;
};

struct Opinions {
  int idMovie;
  int stars[MAX_OPINIONS];
};

void printMovie (Movie movie) {
  cout << movie.year << ": " 
       << movie.title;
}

float calculateStars (Opinions opinions[], int idMovie) {
  float meanStars = 0;

  /*
    PARA cada posição do vetor opinions EXECUTE
      SE opinions[i].idMovie == idMovie ENTÃO
        PARA cada posição do vetor opinions[i].star EXECUTE
          some cada uma das "estrelas" de opinions[i].star[s]
        FIM-PARA
      FIM-SE
    FIM-PARA
  */

  return meanStars / MAX_OPINIONS;
}

int main() {
  Movie movies[MAX_MOVIES] = {
    { 101, "Star Wars - Nova Esperanca: Episodio 4", 1977 },
    { 102, "Star Wars - O Imperio Contra-Ataca: Episodio 5", 1980 },
    { 103, "Star Wars - O Retorno do Jedi: Episodio 6", 1983 }, 
    { 201, "Um sonho de liberdade", 1994 },
    { 202, "Pulp Fiction", 1994 }
  };

  Opinions opinions[OPINIONS] = {
    { 101, { 3, 4, 5, 5, 5, 5 } },
    { 201, { 4, 4, 5, 4, 5, 5 } },
    { 102, { 4, 4, 3, 5, 5, 3 } },
    { 202, { 4, 4, 3, 5, 5, 3 } },
    { 103, { 4, 3, 4, 5, 5, 3 } }
  };

  for (int i = 0; i < MAX_MOVIES; i++) {
    printMovie (movies[i]);
    cout << " had " << calculateStars (opinions, movies[i].idMovie) << " stars\n"; 
  }

  return 0;
}
