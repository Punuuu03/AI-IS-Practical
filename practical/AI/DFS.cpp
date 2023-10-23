#include <iostream>
#include <stdlib.h>
using namespace std;

    int cost[10][10], i, j, k, n, m, stk[10], top, v, visit[10], visited[10];
int main()
{
    cout << "enter no of vertex";
    cin >> n;
    cout << "enter no of edges";
    cin >> m;
    cout << "EDGED\n";
    for (k = 1; k <= m; k++)
    {
        cin >> i >> j;
        cost[i][j] = 1;
    }
    cout << "enter starting vertex";
    cin >> v;
    cout << "visited vertex";
    cout << v << " ";
    visited[v] = 1;
    k = 1;
    while (k < n)
    {
        for (j = n; j >= 1; j--)

            if (cost[v][j] != 0 && visit[j] != 1 && visited[j] != 1)
            {
                visit[j] = 1;
                stk[top++] = j;
            }
        v = stk[--top];
        cout << v << " ";
        k++;
        visit[v] = 0;
        visited[v] = 1;
    }
    return 0;
}
