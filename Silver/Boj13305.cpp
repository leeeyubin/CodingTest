#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {

	int N;
	cin >> N;
	vector<int> distance(N - 1);
	vector<int> node(N);

	for (int i = 0; i < N - 1; i++) {
		cin >> distance[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> node[i];
	}

	long long currNode = node[0];
	long long res = 0;

	for (int i = 0; i < N - 1; i++) {
		currNode = min(currNode, (long long)node[i]);
		res += distance[i] * currNode;
	}

	cout << res << endl;

	return 0;
}