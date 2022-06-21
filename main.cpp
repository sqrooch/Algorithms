#include <iostream>
#include <vector>
#include <string>

#include "find_outlier.h"
#include "compare_str_end.h"

using namespace std;

int main()
{
	cout << find_outlier({ 2, 4, 0, 100, 4, 11, 2602, 36 }) << endl;
	cout << compare_str_end("abc", "bc") << endl;
	cout << find_outlier({ 2, 3, 4 }) << endl;
	cout << find_outlier({ 1, 2, 3 }) << endl;
	cout << find_outlier({ 4, 1, 3, 5, 9 }) << endl;

	return 0;
}
