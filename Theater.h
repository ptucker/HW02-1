//I affirm that all code given below was written solely by me, Madelyn, and that any help I recieved adhered to the rules stated for this exam.

#pragma once
class Theater
{
public:
	Theater();

	string GetMovieForHour();

	int GetShowTimeForGenre();

	int GetPopcornPrice();

	int GetCokePrice();

	void SetAddMovie();

	void AddMovie();

	//allowing main to see the private AddMovie
	Theater(string AddMovie)
	{
		SetAddMovie();
	}
	string GetAddMovie()
	{
		return AddMovie;
	}

private:
	
	void AddMovie()
};

