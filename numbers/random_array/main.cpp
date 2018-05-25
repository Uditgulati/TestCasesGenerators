#include <bits/stdc++.h>

using namespace std;

int lim1_low = 1, lim1_high = 10;
int lim2_low = 1, lim2_high = 100;
int lim3_low = 1, lim3_high = 1e9;

int main() {
	srand(time(NULL));

	int testcases = rand() % (lim1_high - lim1_low + 1) + lim1_low;
	printf("%d\n", testcases);
	
	assert(testcases >= lim1_low && testcases <= lim1_high);

	while(testcases--) {
		int n = rand() % (lim2_high - lim2_low + 1) + lim2_low;
		printf("%d\n", n);

		assert(n >= lim2_low && n <= lim2_high);

		for(int i = 0; i < n; i++) {
			int x = rand() % (lim3_high - lim3_low + 1) + lim3_low;
			
			assert(x >= lim3_low && x <= lim3_high);

			printf("%d ", x);
		}
		printf("\n");
	}
	return 0;
}