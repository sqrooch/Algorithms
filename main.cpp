#include <iostream>
#include <vector>

#include "FindOutlier.h"

using namespace std;

int main()
{
	cout << FindOutlier({ 2, 4, 0, 100, 4, 11, 2602, 36 }) << endl;
	cout << FindOutlier({ 160, 3, 1719, 19, 11, 13, -21 }) << endl;
	cout << FindOutlier({ 2, 3, 4 }) << endl;
	cout << FindOutlier({ 1, 2, 3 }) << endl;
	cout << FindOutlier({ 4, 1, 3, 5, 9 }) << endl;

	return 0;
}
