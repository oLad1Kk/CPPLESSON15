#include "Diary.h"

Diary::Diary()
{
	Book[Date()].push_back("C++");
	Book[Date(2025, 1, 1)].push_back("New year");
	Book[Date(2024, 12, 16)].push_back("C#");
	Book[Date(2024, 12, 16)].push_back("C++");
	Book[Date(2024, 12, 19)].push_back("Film");
	Book[Date(2025, 1, 1)].push_back("Sleep");
	Book[Date(2025, 1, 1)].push_back("Eat");


}

void Diary::ShowList() const
{
	for (auto item : Book) {
		cout << item.first << endl;
		for (int i = 0; i < item.second.size(); i++)
		{
			cout << "\t" << item.second[i] << endl;
		}
		cout << endl;
	}

}

void Diary::AddEvent(Date d, string event)
{
	Book[d].push_back(event);
}

void Diary::FindByDate(Date d) const
{
	auto it = Book.find(d);
	if (it != Book.end())
	{
		cout << it->first << endl;
		for (auto item : it->second)
		{
			cout <<"\t"<< item << "\n";
		}
	}
	else
	{
		cout << "Not found\n";
	}
}

void Diary::FindByEvent(string event) const
{	
	for (auto item : Book) {
		for (int i = 0; i < item.second.size(); i++)
		{
			if (item.second[i] == event)
			{
				cout << item.first << endl;
				cout <<"\t"<< item.second[i] << endl;
			}
		}
	}
}

void Diary::DelEvent(Date d, string event)
{
	auto it = Book.find(d);
	if (it != Book.end())
	{
		for (auto item = it->second.begin(); item != it->second.end(); item++)
		{
			if (*item == event)
			{
				it->second.erase(item);
				break;
				if (it->second.size() == 0)
				{
					Book.erase(d);
				}
			}
		}
	}
}