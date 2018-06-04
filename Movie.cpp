//I affirm that all code given below was written solely by me, Madelyn, and that any help I recieved adhered to the rules stated for this exam.

#include "stdafx.h"
#include "Movie.h"
#include <string>
using namespace std;

//behaviors

Movie::Movie()
{
	Movie(string Title, string Genre, int ShowTime);

	//set title
	void SetTitle(string Title_a);
	{
		Title = Title_a
	}

	string GetTitle(); // Returns the movie title
	{
		return Title;
	}

	string GetGenre(); // Returns the movie genre
	{
		return Genre;
	}

	int GetShowtime(); //When is this movie shown? 
	{
		return Showtime;
	}
}