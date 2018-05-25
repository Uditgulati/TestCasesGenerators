#include <bits/stdc++.h>

using namespace std;

int lim1_low = 1, lim1_high = 10;
int lim2_low = 1, lim2_high = 100;
int lim3_low = 1, lim3_high = 100;
int lim4_low = 1, lim4_high = 1e9;

int main() {
	srand(time(NULL));

	int testcases = rand() % (lim1_high - lim1_low + 1) + lim1_low;
	printf("%d\n", testcases);
	
	assert(testcases >= lim1_low && testcases <= lim1_high);

	while(testcases--) {
		int n = rand() % (lim2_high - lim2_low + 1) + lim2_low;

		assert(n >= lim2_low && n <= lim2_high);

		int m = rand() % (lim3_high - lim3_low + 1) + lim3_low;

		assert(m >= lim3_low && m <= lim3_high);

		printf("%d %d\n", n, m);

		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {

				int x = rand() % (lim4_high - lim4_low + 1) + lim4_low;
				
				assert(x >= lim4_low && x <= lim4_high);

				printf("%d ", x);
			}
			printf("\n");
		}
	}
	return 0;
}