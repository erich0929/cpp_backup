#include <algorithm>
#include <iostream>

template <typename Collection, typename unop>
void for_each(Collection col, unop op) {
	std::for_each(col.begin(), col.end(), op);
}

int main() {
	auto lamda_echo = [](int i) {std::cout << i << std::endl;};	
	std::vector<int> col{20,24,37,42,23,45,37};
	for_each(col, lamda_echo);
	return 0;
}
