#include <bits/stdc++.h>
using namespace std;

queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> s;

    // Enqueue the first K elements into the stack
    for (int i = 0; i < k; i++)
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    // Enqueue the elements from the stack back into the queue
    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }

    // Move the remaining elements in the queue to the back
    for (int i = 0; i < q.size() - k; i++)
    {
        int element = q.front();
        q.pop();
        q.push(element);
    }

    return q;
}