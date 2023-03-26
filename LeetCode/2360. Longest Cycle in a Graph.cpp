// AUTHOR :: RAHUL MISTRY
// DATE   :: 27/03/2023

class Solution {
public:
    int size;
    int curr;
    bool reached = false;
    int maxCycle = -1;

    int cycleSize(int node, vector<int>& edges, vector<bool>& visited) {
        if (node == -1 || size == edges.size())
            return -1;
        if (visited[node] && node == curr) {
            reached = true;
            return ++size;
        }
        if (visited[node])
            return maxCycle;
        size++;
        visited[node] = true;
        return cycleSize(edges[node], edges, visited);
    }

    int longestCycle(vector<int>& edges) {
        int N = edges.size();
        vector<bool> visited(N);

        for (int i = 0; i < edges.size(); i++) {
            if (edges[i] != -1) {   
                size = -1;
                curr = i;
                maxCycle = max(maxCycle, cycleSize(i, edges, visited));
                if (!reached)
                    fill(visited.begin(), visited.end(), false);
            }
        }
        return maxCycle;
    }
};