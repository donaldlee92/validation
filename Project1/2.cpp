#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class HmhTest {
public:
	HmhTest() {
		cout << "HmhTest create!!!" << endl;
	}
	void myOperator() {
	}
	~HmhTest() {
		cout << "HmhTest destory!!!" << endl;
	}

private:
	int data[10];
	int sum;
};

int main(void) {
	HmhTest* test = new HmhTest;
	test->myOperator();

	delete test;
	test = NULL;
	return 0;
}