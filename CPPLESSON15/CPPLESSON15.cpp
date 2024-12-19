#include <iostream>
#include <string>
#include <map>
#include "Diary.h"
#include "SignInSystem.h"
using namespace std;

void PrintMenu()
{
    cout << "++++++++++++++++++++++++++++++++++++++\n";
    cout << "+               MENU                 +\n";
    cout << "+                                    +\n";
    cout << "+   1 - sign up                      +\n";
    cout << "+   2 - sign in                      +\n";
    cout << "+   3 - log out                      +\n";
    cout << "+   4 - show database                +\n";
    cout << "+   5 - show signed in users         +\n";
    cout << "+   6 - exit                         +\n";
    cout << "+                                    +\n";
    cout << "++++++++++++++++++++++++++++++++++++++\n\n";


}

int main()
{
    //map<string, int> words;
    //string text;

    //do {
    //    cout << "Enter text: ";
    //    cin >> text;
    //    
    //    if (words.find(text) == words.end())
    //    {
    //        //words.insert(pair<string, int>(text, 1));
    //        words[text] = 1;
    //    }
    //    else
    //    {
    //        words[text]++;
    //    }


    //} while (text != "stop");

    //cout << "-----------------------------------------------------------------\n";
    //words.erase("stop");
    //for (auto item = words.begin(); item != words.end(); item++)
    //{
    //    cout << item->first << " " << item->second << endl;
    //}

    //Diary Vlad;
    //Vlad.AddEvent(Date(2008, 12, 20), "MY BIRTHDAY");
    //Vlad.ShowList();
    //cout << "\n\nFind by Date\n";
    //Vlad.FindByDate(Date(2025, 01, 01));
    //cout << "\n\nFind by Event\n";
    //Vlad.FindByEvent("C++");
    //Vlad.DelEvent(Date(2025, 1, 10), "MY BIRTHDAY");
    //Vlad.DelEvent(Date(), "C++");
    //cout << "After deletion:\n\n";
    //Vlad.ShowList();


    SignInSystem system;
    while (true)
    {
        PrintMenu();
        int action;
        bool isExit = false;
        cout << "Enter action: "; cin >> action;
        switch (action)
        {
        case 1:
        {
            system.SignUp();
            break;
        }
        case 2:
        {
            system.SignIn();
            break;
        }
        case 3:
        {
            system.LogOut();
            break;
        }
        case 4:
        {
            system.ShowDatabase();
            break;
        }
        case 5:
        {
            system.ShowLoggedInUsers();
            break;
        }

        case 6:
            {
            isExit = true;
            break;
            }
        default:
            cout << "Erorr\n";
        }

        if (isExit)
        {
            cout << "See you soon\n";
            break;
        }
    }

    

}