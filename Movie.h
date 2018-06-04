//I affirm that all code given below was written solely by me, Madelyn, and that any help I recieved adhered to the rules stated for this exam.

#pragma once
class Movie
{
public:
	Movie();

	string GetTitle();

	string GetGenre();

	int GetShowtime();

	//allowing main to see the private SetTitle
	Movie(string SetTitle)
	{
		SetTitle();
	}
	string SetTitle()
	{
		return SetTitle;
	}


private:
	void SetTitle();
};

