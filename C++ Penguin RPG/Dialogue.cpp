#include "StdAfx.h"
#include "dialogue.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


dialogue::dialogue(void)
{
}


dialogue::~dialogue(void)
{
}

	//alternative constructor
	dialogue::dialogue(std::string description, std::vector<std::string> choices)
	{
		//assign passed in values to the class values
		this->description = description; 
		this->choices = choices;

	}
	
	//method to display

int activate()
{
	//output description
	std::cout << dialogue::description << std::endl;

	//output all choices
	for (int i = 0; i < dialogue::choices.size(); i++)
	{
		std::cout << i+1 << ": " << dialogue::choices[i] << std::endl;
	};

	//read input until valid answer given
	int userInput = -1;
	while(true)
	{
		std::cin >> userInput;
		//valid answer is a number within the range of choices
		if(userInput >= 0 && userInput <= dialogue::choices.size())
		{
			return userInput;
		}
	};
	return 0;
}