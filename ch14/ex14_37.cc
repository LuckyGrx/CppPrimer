#include <iostream>
#include <algorithm>
#include <vector>

class IsEqual {
public:
	IsEqual(int val) : value(val) {
	}
	bool operator()(int elem) {
		return value == elem;
	}
private:
    int value;
};

int main(){
	std::vector<int> ivec{1, 2, 1, 3, 1, 4};
	std::replace_if(ivec.begin(), ivec.end(), IsEqual(1), 5);
	std::for_each(ivec.cbegin(), ivec.cend(), [](int val){ std::cout << val << " ";});
	std::cout << std::endl;
	return 0;
}
