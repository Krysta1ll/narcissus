#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main() {
	int num;
	cin >> num;
	if (num == 1 || num == 2 || num == 0) {
		cout << "错误" << num << "无水仙花数";
	}
	int flowerEnd,flowerStart;
	flowerEnd = pow(10, num) - 1;
	flowerStart = pow(10, num - 1);
	
	for (int i=flowerStart; i <= flowerEnd; i++) {
		int sum = 0;
		int i2 = i;
		while (i2 / 10 >= 1) {
			sum = sum + pow(i2 % 10, num);
			i2 = i2 / 10;
		}
		sum = sum + pow(i2,num);
		if (sum == i) {
			cout << i << endl;
		}
	}
	
	return 0;

}