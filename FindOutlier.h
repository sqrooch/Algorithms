#pragma once
#ifndef _FindOutlier_H_

#define _FindOutlier_H_
/*
The function takes an array (which will be at least 3 long, but can be very large) containing integers.
The array either consists entirely of odd integers, or consists entirely of even integers, with the exception of one integer N.
The function returns this "outlier" N.
Examples:
{2, 4, 0, 100, 4, 11, 2602, 36}
Should return: 11
{160, 3, 1719, 19, 11, 13, -21}
Should return: 160
*/
int FindOutlier(std::vector<int> arr);

#endif // !_FindOutlier_H_


