#include "functions.hpp"

#include <fstream>

using namespace std;

void GenerateText(const string& name, const string& interests)
{
    if (interests.size() == 0) exit(1);

    ofstream ofs{"/mnt/c/Users/evjos/Documents/Cru Texts/cru-text-for-" + name + ".txt"};
    ofs << "Hi " << name << "! This is Evan Berman, a student leader with Cru. ";
    ofs << "You filled out a comment card and indicated that you ";

    string one = "are new and want to learn more about what we have to offer";
    string two = "are interested in hearing more about having a relationship with God";
    string three = "want to get plugged into a Bible study";
    
    if (interests.size() == 1)
    {
        switch (stoi(interests)) {
            case 1:
                ofs << one << "! ";
                break;
            case 2:
                ofs << two << "! ";
                break;
            case 3:
                ofs << three << "! ";
        }
    }
    else if (interests.size() == 2)
    {
        char char1 = interests.at(0);
        int choice1 = char1 - '0';
        switch (choice1) {
            case 1:
                ofs << one;
                break;
            case 2:
                ofs << two;
                break;
            case 3:
                ofs << three;
        }

        ofs << " and ";

        char char2 = interests.at(1);
        int choice2 = char2 - '0';
        switch (choice2) {
            case 1:
                ofs << one << "! ";
                break;
            case 2:
                ofs << two << "! ";
                break;
            case 3:
                ofs << three << "! ";
        }
    }
    else
    {
        ofs << "are new and want to learn more about what we have to offer, ";
        ofs << "are interested in hearing more about having a relationship with God, ";
        ofs << "and want to get plugged into a Bible study! ";
    }



    ofs << "I would love to connect with you if that interests you!";

    ofs.close();
    
}