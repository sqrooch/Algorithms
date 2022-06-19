#include <vector>

int FindOutlier(std::vector<int> arr)
{
	int odd{}, oddCounter{}, even{}, evenCounter{};

	for (auto el : arr)
	{
		el % 2 == 0 ? (evenCounter++, even = el) : (oddCounter++, odd = el);
	}

	return (evenCounter > 1) ? odd : even;
}