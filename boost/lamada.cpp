#include <iostream>
#include <vector>
#include <algorithm>

#include <boost/lambda/lambda.hpp>

int main(int argc, char *argv[])
{
	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	std::for_each(v.begin(), v.end(), std::cout << boost::lambda::_1 << "\n");

	return 0;
}
