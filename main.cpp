#include <iostream>
#include <vector>

#include "find_outlier.h"

using namespace std;

int main()
{
	cout << find_outlier({ 2, 4, 0, 100, 4, 11, 2602, 36 }) << endl;
	cout << find_outlier({ 160, 3, 1719, 19, 11, 13, -21 }) << endl;
	cout << find_outlier({ 2, 3, 4 }) << endl;
	cout << find_outlier({ 1, 2, 3 }) << endl;
	cout << find_outlier({ 4, 1, 3, 5, 9 }) << endl;

	return 0;
}
