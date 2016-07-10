#include <algorithm>
#include <iostream>

template<typename Collection, typename unop>
void for_each (Collection col, unop op) {
	std::for_each(col.begin(), col.end(), op);
}

template<typename Collection, typename unop>
Collection map (Collection col, unop op) {
	std::transform (col.begin(), col.end (), col.begin (), op);
	return col;
}

int main () {
	std::vector<int> col = {20,24,37,42,23,45,37};
	auto addOne = [] (int i) {return i+1;};
	auto lamda_echo = [](int i) {std::cout << i << std::endl;};
	auto returnCol = map (col, addOne);
	for_each(returnCol, lamda_echo);
	return 0;
}
