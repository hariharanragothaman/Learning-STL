#include "../headers.h"

/* Get connected components in a graph */

void get_connected_components(vector<vi>& g, int n)
{
	/* Creating the graph */
	map<int, set<int>> graph;
	for(auto c: g)
	{
		graph[c[0]].insert(c[1]);
		graph[c[1]].insert(c[0]);
	}

	vector<set<int>> result;
	std::vector<bool> visited(n, false);
	int components = 0;

	for(int i=0; i<n; i++)
	{
		set<int> path = {};

		if(visited[i])
			continue;
		else
			components += 1;

		deque<int> stack = {i};

		while(!stack.empty())
		{
			auto node = stack.front();
			stack.pop_front();

			for(auto nei: graph[node])
			{
				if(visited[nei] == false)
				{
					visited[nei] = true;
					stack.emplace_back(nei);
				}
			}
			path.insert(node);
		}
		result.emplace_back(path);
	}

	/* Printing the connected components */
	cout << "The number of connected components are " << components << endl;
	cout << "The connected components are" << endl;
	for(auto c: result)
	{
		for(auto k: c)
			cout << k << " ";
		cout << endl;
	}
}


int main()
{
	std::vector<std::vector<int>> g = {{0, 1}, {1, 2}, {3, 4}};
	int n = 5;
	get_connected_components(g, n);
}