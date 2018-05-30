#include <bits/stdc++.h>

using namespace std;

int lim1_low = 1, lim1_high = 10;
int lim2_low = 1, lim2_high = 1000;

int main() {
	srand(time(NULL));

	int testcases = rand() % (lim1_high - lim1_low + 1) + lim1_low;
	printf("%d\n", testcases);
	
	assert(testcases >= lim1_low && testcases <= lim1_high);

	while(testcases--) {
		int n = rand() % (lim2_high - lim2_low + 1) + lim2_low;
		printf("%d\n", n);

		assert(n >= lim2_low && n <= lim2_high);

		string s1;

		for(int i = 0; i < n; i++) {
			int x = rand() % 26;
			char ch = 'a' + x;	//change 'a' to 'A' for capital letters

			s1 += ch;
		}

		cout << s1 << endl;
	}
	return 0;
}