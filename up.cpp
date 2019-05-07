#include <iostream>
#include <vector>

using namespace std;

	void siftUp(vector<int>& heap, int v) {
	while ((v > 1) && (heap[v] > heap[v / 2])) {
		swap(heap[v], heap[v / 2]);
		v /= 2;
	}
	cout<<v<<endl;
}


int main() {
	
	int n;
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 0; i < n; ++i) {
		cin >> a[i + 1];
	}
	int k;
	cin >> k;
	for (int i = 0; i < k; ++i) {
		int num, plus;
		cin >> num >> plus;
		a[num] += plus;
		siftUp(a, num);
	}
	for (int i = 0; i < n; ++i) {
		cout << a[i + 1] << " ";
	}
	cout << endl;
	
}

