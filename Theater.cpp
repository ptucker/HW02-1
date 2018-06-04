//I affirm that all code given below was written solely by me, Madelyn, and that any help I recieved adhered to the rules stated for this exam.

#include "stdafx.h"
#include "Theater.h"
#include <string>

using namespace std;

//behaviors

Theater::Theater()
{
	Theater(string Name, string Phone); //The name for this theater


	string GetMovieForHour(int hour); // What movie is shown at the given hour?
	{
		return MovieForHour;
	}

	int GetShowTimeForGenre(string Genre); //When will the movie of the given genre be shown?
	{
		return ShowTimeForGenre;
	}

	int GetPopcornPrice(); //Make up a cost in dollars for popcorn
	{
		return PopcornPrice;
	}

	int GetCokePrice(); //Make up a cost on Coke
	{
		return CokePrice;
	}

	void SetAddMovie(string n)
	{
		AddMovie = n;
	}
	string getAddMovie()
	{
		return AddMovieovie;
	}

	void AddMovie(Movie& Movie);
}
