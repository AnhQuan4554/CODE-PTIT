#include<bits/stdc++.h>
#include<vector>
using namespace std;
int check[1005];
int parent[1005];
#include<stdlib.h>
void DFS(int u, vector<int>list[1005]) {
	check[u] = 1;
	for (int i : list[u]) {
		if (check[i] == 0) {
			parent[i] = u;
			DFS(i, list);
		}
	}
}
//dat sau khi DFS roi
void Path(int s, int t) {//s la bat dau , t la diem ket thuc
	if (check[t] == 0) {
		cout << "-1";
	}
	else {
		vector<int>path;
		while (t != s) {
			path.push_back(t);
			t = parent[t];
		}
		//con diem cuoi cung phai cho not vao
		path.push_back(s);
		reverse(path.begin(), path.end());
		for (int x : path)cout << x << " ";
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		memset(check, 0, sizeof(check));
		memset(parent, 0, sizeof(check));
		int v, e, u,t; cin >> v >> e >> u>>t;
		vector<int>list[1002];
		for (int i = 1; i <= e; i++) {
			int x, y; cin >> x >> y;
			list[x].push_back(y);
		//	list[y].push_back(x);
		}
		DFS(u, list); 
		Path(u, t);
		cout << endl;
		/*for (int i = 1; i <= e; i++) {
			for (int j : list[i]) {
				cout << j << " ";
			}cout << endl;
		}*/
	}
	
	return 0;
	system("pause");
}
//6 9 5
//1 2
//1 3
//2 3
//2 4
//3 4
//3 5
//4 5
//4 6
//5 6
