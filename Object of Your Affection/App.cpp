/*
 Purpose:     This basic program will the programmer to create profiles that include name, age, city, country, and pronouns, as well as an unlimited amount of hobbies for each profile
 Author:      Braeden Corr
 Date:        June 21st, 2022
*/

#include <iostream>
#include <string>
#include <vector>
#include "Profile.h"

using namespace std;

int main()
{
    //Add a profile for Sonic
    Profile sonic("Sonic the Hedgehog", 15, "South Island", "Mobius", "he/him");

    //His hobbies are the lyrics from Escape from the city
    sonic.AddHobby("Rolling around at the speed of sound");
    sonic.AddHobby("Going to places");
    sonic.AddHobby("Following his rainbow");
    sonic.AddHobby("Always movin' (Can't stick around)");

    //Output Sonics profile
    cout << sonic.ViewProfile() << "\n\n\n";
}

