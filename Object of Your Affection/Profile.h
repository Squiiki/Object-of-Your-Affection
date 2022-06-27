#pragma once

#include <string>
#include <vector>
#include <iostream>

using namespace std;

//Profile Class
class Profile {

	//Variables within the class
private:
	string name;
	int age;
	string city;
	string country;
	string pronouns;
	vector<string> hobbies;

	//Pass in the variables instead of making them public
public:
	//Profile
	Profile(string newName, int newAge, string newCity, string newCountry, string newPronouns = "they/them");

	//Add a hobby
	void AddHobby(string newHobby);

	//Display profile
	string ViewProfile();	
};
