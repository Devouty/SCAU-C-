// Cpp8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <fstream>
#include <cctype>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
using namespace::std;

typedef pair<string, int> PAIR;
int cmp(const PAIR& x, const PAIR &y)
{
	return x.second < y.second;
}

int _tmain(int argc, _TCHAR* argv[])
{
	map<string, int> m;
	fstream fio;
	string filename = "1.txt";
	try
	{
		fio.open(filename.c_str(), fstream::in | fstream::out | fstream::app);
	}
	catch (...){}

	while (true)
	{
		if (fio.eof())
			break;
		string s;
		char c = fio.get();
		while (((c != ' ')&&(c != '.'))&&(c != ','))
		{
			if (fio.eof())
				break;
			s.push_back(c);
			c = fio.get();
		}
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		pair<map<string, int>::iterator, bool> ret = m.insert(make_pair(s, 1));
		if (!ret.second){
			++ret.first->second;
		}
	}
	fio.close();
	/*map<string, int>::iterator it;
	for (it = m.begin(); it != m.end(); ++it)
	{

		cout << it->first << "  " << it->second << endl;
	}*/
	vector<pair<string, int> > pair_vec;
	for (map<string, int>::iterator map_iter = m.begin(); map_iter != m.end(); map_iter++)
	{
		pair_vec.push_back(make_pair(map_iter->first,map_iter->second));
	}
	sort(pair_vec.begin(),pair_vec.end(),cmp);
	for (vector<PAIR>::iterator curr = pair_vec.begin(); curr != pair_vec.end(); curr++)
	{
		cout << "单词："<<curr->first << "  数量:" << curr->second << endl;
	}
	system("pause");
	return 0;
}

