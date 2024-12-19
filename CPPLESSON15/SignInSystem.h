#pragma once
#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class SignInSystem
{
	map<string, string> users;
	vector < string > signInUsers;
public:
	void SignUp()
	{
		string username;
		cout << "Enter username: "; cin.ignore(); getline(cin, username);
		    if (users.find(username) == users.end())
			{
				string password;
				cout << "Enter password: "; getline(cin, password);
				users[username] = password;
				cout << "success: new user added\n\n";
			}
			else
			{
				cout << "fail: user already exists\n\n";
			}
	}

	void SignIn()
	{
		string username;
		cout << "Enter username: "; cin.ignore(); getline(cin, username);
		if (users.find(username) != users.end())
		{
			auto it = users.find(username);
			string password;
			cout << "Enter password: "; getline(cin, password);
			if (it->second == password)
			{
				auto it = find(signInUsers.begin(), signInUsers.end(), username);
				if (it == signInUsers.end())
				{
					signInUsers.push_back(username);
					cout << "success: user logged in\n\n";
				}
				else
				{
					cout << "fail: already logged in\n\n";
				}
			}
			else
			{
				cout << "fail: incorrect password\n\n";
			}
		}
		else
		{
			cout << "fail: no such user\n\n";
		}
	}

	void LogOut()
	{
		string username;
		cout << "Enter username: "; cin.ignore(); getline(cin, username);
		if (users.find(username) != users.end())
		{
			auto it = find(signInUsers.begin(), signInUsers.end(), username);
			if (it != signInUsers.end())
			{
				signInUsers.erase(it);
				cout << "success: user logged out\n\n";
			}
			else
			{
				cout << "fail: already logged out\n\n";
			}
		}
		else
		{
			cout << "fail: no such user\n\n";
		}
		
	}

	void ShowDatabase()
	{
		cout << "Database:\n\n";
		for (auto item : users)
		{
			cout << "\t" << item.first << " : " << item.second << endl;
		}
		cout << "\n\n";
	}
	
	void ShowLoggedInUsers()
	{
		cout << "Logged in users:\n\n";
		for (auto item : signInUsers)
		{
			cout << "\t" << item << endl;
		}
		cout << "\n\n";
	}

};

