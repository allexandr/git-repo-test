/*

*/

#include <iostream>
using namespace std;

int main() {
	int n, c = 0, i = 1;
	cin >> n;
	while (c < n) {
		c = i * i;
		if (c > n)  break;
		cout << c << " ";
		i++;
	}		
}