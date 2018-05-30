#include <bits/stdc++.h>

using namespace std;

const int siz = 1e5 + 10;

vector <int> graph[siz];

int visited[siz];

int lim1_low = 1, lim1_high = 10;
int lim2_low = 1, lim2_high = 1e5;
int lim3_low = 1, lim3_high = 1e9;

int sum1 = 0;

void check_dfs(int source) {
	int len = graph[source].size();
	if(!visited[source])
		sum1++;
	visited[source] = 1;

	for(int i = 0; i < len; i++) {
		int temp = graph[source][i];
		if(!visited[temp])
			check_dfs(temp);
	}
}

int main() {
	srand(time(NULL));

	int testcases = rand() % (lim1_high - lim1_low + 1) + lim1_low;
	printf("%d\n", testcases);
	
	assert(testcases >= lim1_low && testcases <= lim1_high);

	while(testcases--) {
		sum1 = 0;

		for(int i = 0; i < siz; i++)
			graph[i].clear();

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

		for(int i = 1; i < n; i++) {
			int u = arr[i];

			int ind = rand() % i;
			int v = arr[ind];

			int weight = rand() % (lim2_high - lim2_low + 1) + lim2_low;

			printf("%d %d %d\n", u, v, weight);	//to make it an unweight tree,
												//just remove the weight from print

			graph[u].push_back(v);
			graph[v].push_back(u);
		}

		memset(visited, 0, sizeof visited);

		check_dfs(1);	//to confirm that the graph generated is a tree.

		assert(sum1 == n);
	}
	return 0;
}