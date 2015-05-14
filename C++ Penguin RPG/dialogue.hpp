#pragma once
#include <iostream>;
#include <string>;
#include <vector>;


class dialogue //actions the dialogue text to the player
{
public:
	//constructor
	dialogue(void);
	//destructor
	~dialogue(void);

	//alternative constructor
	dialogue(std::string description, std::vector<std::string> choices);


	//information text
	static std::string description;
	//vector of choices to be displayed.
	//a vector is a c++ list (resizable array) from the STL library
	static std::vector<std::string> choices;
	//method to display
	 int activate();

};

