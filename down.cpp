#include <iostream>
#include <vector>

using namespace std;

	void siftDown(vector<int>& heap, int v) {
	while (v * 2 < heap.size()) {
		int maxIndex = v * 2;
		if ((v * 2 + 1 < heap.size()) && (heap[v * 2 + 1] > heap[v * 2])) {
			maxIndex = v * 2 + 1;
		}
		if (heap[maxIndex] > heap[v]) {
			swap(heap[v], heap[maxIndex]);
			v = maxIndex;
		} else {
			break;
		}
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
		a[num] -= plus;
		siftDown(a, num);
	}
	for (int i = 0; i < n; ++i) {
		cout << a[i + 1] << " ";
	}
	cout << endl;
	
}

