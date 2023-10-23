#include <iostream>
#include <stdlib.h>
using namespace std;

int n, i, j, k, v, visit[10], visited[10], cost[10][10], rare, front, qu[10];
int main()
{
    int m;
    cout << "enter nomof vertex";
    cin >> n;
    cout << "enter no of edeges";
    cin >> m;
    cout << "\n EDGES \n";
    for (int k = 1; k <= m; k++)
    {
        cin >> i >> j;
        cost[i][j] = 1;
    }
    cout << "enter the start vertex";
    cin >> v;
    cout << "visited vertex";
    cout << v << " ";
    visited[v] = 1;
    k = 1;
    while (k < n)
    {
        for (int j = 1; j <= n; j++)
            if (cost[v][j] != 0 && visit[j] != 1 && visited[j] != 1)
            {
                visit[j] = 1;
                qu[rare++] = j;
            }
        v = qu[front++];
        cout << v << " ";
        k++;
        visit[v] = 0;
        visited[v] = 1;
    }
    return 0;
}
