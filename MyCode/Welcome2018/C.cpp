#include <iostream>
#include <vector>
#include <queue>
using namespace std;

std::vector<int> adj[10000001];
std::vector<unsigned char> visited;

int main() {
	int n,m,a,b,k,l;
	queue <int> q;

	cin >> n >> m;
	int arr[n+1];
	visited.resize(n+1);
	for(auto&n :visited) {
		n = false;
	}


	for(int i{1}; i <=m; ++i) {
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	cin >> k;

	for(int i{1}; i<=k; ++i) {
		cin >> l;
	
		q.push(l);
		visited[l] = true;
		arr[l] = 0;	
	}

	while(!q.empty()) {
		int s = q.front();
		q.pop(); 
		for(auto i: adj[s]) {
			if(!visited[i]) {
				visited[i] = true;
				q.push(i);
				arr[i] = arr[s] +1;
			}
		}	
	}

	for(int i {1}; i <=n; ++i) {
		if(visited[i] == true) {
		std::cout << arr[i] << " ";
	} else {
		std::cout << -1 << " ";
	}
}
	std::cout << "\n";

	return 0;
}
