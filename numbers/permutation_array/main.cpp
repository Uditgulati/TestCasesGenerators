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

		int arr[n];

		for(int i = 0; i < n; i++)
			arr[i] = i + 1;
		
		int num = 10 * n;

		while(num--) {
			int ind1 = rand() % n;
			int ind2 = rand() % n;
			swap(arr[ind1], arr[ind2]);
		}

		vector <int> vec1, vec2;

		for(int i = 0; i < n; i++) {
			vec1.push_back(i + 1);
			vec2.push_back(arr[i]);
		}

		sort(vec2.begin(), vec2.end());

		assert(vec1 == vec2);

		for(int i = 0; i < n; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	return 0;
}