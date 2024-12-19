#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "Date.h"
using namespace std;

class Diary
{
	map <Date, vector<string>>Book;
public:
	Diary();
	void ShowList()const;
	void AddEvent(Date d, string event);
	void FindByDate(Date d)const;
	void FindByEvent(string event)const;
	void DelEvent(Date d, string event);

};

