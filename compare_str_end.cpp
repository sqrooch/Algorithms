#include <iostream>
#include <string>

using namespace std;

// My solution:
/*
bool line_ending_matcher(string const& str, string const& ending)
{
	cout << boolalpha;
	if (ending.empty())
	{
		return true;
	}
	else if (str.length() < ending.length())
	{
		return false;
	}
	for (int i = ending.length() - 1; i >= 0; i--)
	{
		if (str[i + str.length() - ending.length()] != ending[i])
		{
			return false;
		}
	}
	return true;
}
*/


// The Best solution:
bool compare_str_end(string const& str, string const& ending)
{
	cout << boolalpha;
	return str.size() >= ending.size() && str.compare(str.size() - ending.size(), string::npos, ending) == 0;
}