#include <vector>

int find_outlier(std::vector<int> arr)
{
	int odd{}, odd_counter{}, even{}, even_counter{};

	for (auto el : arr)
	{
		el % 2 == 0 ? (even_counter++, even = el) : (odd_counter++, odd = el);
	}

	return (even_counter > 1) ? odd : even;
}