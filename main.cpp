#include <iostream>
#include "isPopOrder.h"
#include <vector>
using namespace std;
int main() {
	vector<int> v1 = {1, 2, 3, 4, 5};
	vector<int> v2 = {4, 5, 3, 2, 1};
	cout<<IsPopOrder(v1, v2)<<endl;
	return 0;
}

