#include <iostream>
using namespace std;

const int MAX_CHARS    = 81;
const int MAX_MOVIES   = 5;
const int MAX_CAST     = 3;
const int MOVIE_NOT_FOUND = -1;

typedef char text[MAX_CHARS];

struct Cast {
  text actors[MAX_CAST];
};

struct Crew {
  int idMovie;
  text director;
  Cast cast;
};

struct Movie {
  int idMovie;
  text title;
  int year;
  Crew crew;
};

void printMovie (Movie movie) {
  cout << movie.year << ": " 
       << movie.title;
}

int searchMovie (Movie movies[MAX_MOVIES], int idMovie) {
  for (int i = 0; i < MAX_MOVIES; i++)
    if (movies[i].idMovie == idMovie)
      return i;
  return MOVIE_NOT_FOUND;
} 

void printCrew (Crew crew) {
  cout << "Director: ";
  /* 
    IMPRIME o nome do diretor do filme
  */
  cout << endl;
  cout << "Cast: ";
  for (int j = 0; j < MAX_CAST; j++) {
    /*
      IMPRIME o j-ésimo ator da estrutura cast dentro da variável crew
    */
    cout << " ";
  }
}

int main() {
  int positionMovie;
  Movie movie;
  Crew crew;

  Movie movies[MAX_MOVIES] = {
    { 101, "Star Wars - Nova Esperanca: Episodio 4", 1977 },
    { 102, "Star Wars - O Imperio Contra-Ataca: Episodio 5", 1980 },
    { 103, "Star Wars - O Retorno do Jedi: Episodio 6", 1983 }, 
    { 201, "Um sonho de liberdade", 1994 },
    { 202, "Pulp Fiction", 1994 }
  };

  Cast casts[MAX_MOVIES] = {
    { "Mark Hamill", "Harrison Ford", "Carrie Fisher" },
    { "Mark Hamill", "Harrison Ford", "Billie Dee Williams" },
    { "Mark Hamill", "Alec Guinness", "Carrie Fisher" },
    { "Tim Robbins", "Morgan Freeman", "Bob Gunton" },
    { "John Travolta", "Samuel L. Jackson", "Uma Thurman" }
  };

  Crew crews[MAX_MOVIES] = {
    { 202, "Quentin Tarantino", casts[4] },
    { 201, "Frank Darabont", casts[3] },
    { 103, "George Lucas", casts[2] },
    { 102, "George Lucas", casts[1] },
    { 101, "George Lucas", casts[0] }
  };

  for (int i = 0; i < MAX_MOVIES; i++) {
    positionMovie = searchMovie(movies, crews[i].idMovie);
    movie = movies[positionMovie];
    printMovie (movie);
    cout << endl;
    crew = crews[i];
    printCrew (crew);
    cout << endl;
  }

  return 0;
}
