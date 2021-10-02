#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int v, e, adj[20][20], visited[21];

void addEdge(int l, int r)
{
    adj[l][r] = 1;
    adj[r][l] = 1;
}
// function for dfs
void DFS(int start)
{

    for (int i = 1; i <= v; i++)
        visited[i] = 0;

    stack<int> st;

    st.push(start);
    visited[start] = 1;

    while (!st.empty())
    {
        start = st.top();

        cout << start << " ";

        st.pop();

        for (int i = 1; i <= v; i++)
        {
            if (adj[start][i] == 1 && visited[i] == 0)
            {
                st.push(i);
                visited[i] = 1;
            }
        }
    }
}
//Driver code
int main()
{
    cout << "ENTER NO. OF VERTICES: ";
    cin >> v;
    cout << "Enter NO. OF EDGES: ";
    cin >> e;

    for (int i = 0; i < e; i++)
    {
        int l, r;
        cin >> l >> r;
        addEdge(l, r);
    }

    int s;
    cout << "ENTER START VERTEX: ";
    cin >> s;
    DFS(s);

    return 0;
}
