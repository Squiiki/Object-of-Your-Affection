#include <string>
#include <vector>
#include <iostream>
#include "Profile.h"

using namespace std;

//Profile 'base'
Profile::Profile(string newName, int newAge, string newCity, string newCountry, string newPronouns)
	: name(newName), age(newAge), city(newCity), country(newCountry), pronouns(newPronouns) {
}

//View Profile Contents
string Profile::ViewProfile() {

	string bio = "Name: " + name;
	bio += "\nAge: " + to_string(age);
	bio += "\nPronouns: " + pronouns;

	//If hobbies is greater than 0
	if (hobbies.size() >= 0) {
		
		//Output the hobbies
		bio += "\nHobbies: ";

		//Loop through the hobbies
		for (int i = 0; i <= hobbies.size() - 1; i++)			//When dealing with c++ vectors, make sure you're referencing the correct number (I always subtract 1 because the 'first' vector is in position 0)
		{
			//Add the hobbies to the bio
			bio += hobbies[i] + ", ";
		}
	}

	return bio;
}

//Add a hobby
void Profile::AddHobby(string newHobby) {

	hobbies.push_back(newHobby);
}