#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int rq, cq;
	cin >> rq >> cq;
	int up = n - rq;
	int down = rq - 1;
	int right = n - cq;
	int left = cq - 1;
	int up_left = min(up, left);
	int up_right = min(up, right);
	int down_left = min(down, left);
	int down_right = min(down, right);
	for (int i = 0; i < k; i++) {
		int r, c;
		cin >> r >> c;
		if (c == cq) {
			if (r > rq) up = min(up, r - rq - 1);
			else down = min(down, rq - r - 1);
		}
		else if (r == rq) {
			if (c > cq) right = min(right, c - cq - 1);
			else left = min(left, cq - c - 1);
		}
		else if (abs(r - rq) == abs(c - cq)) {
			if (r > rq && c > cq) up_right = min(up_right, r - rq - 1);
			else if (r > rq && c < cq) up_left = min(up_left, r - rq - 1);
			else if (r < rq && c > cq) down_right = min(down_right, rq - r - 1);
			else if (r < rq && c < cq) down_left = min(down_left, rq - r - 1);
		}
	}
	int result = up + down + left + right + up_left + up_right + down_left + down_right;
	cout << result << "\n";
	return 0;
}