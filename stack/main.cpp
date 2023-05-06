#include <iostream>
#include <stack>
#include <string>
#include <queue>
using namespace std;

int main(int argc, const char *argv[])
{

    stack<int> s1;

    s1.push(1);
    s1.push(10);
    s1.push(111);
    s1.push(21);

    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }

    stack<string> s2;

    s2.push("aaa");
    s2.push("bbb");
    s2.push("ccc");
    s2.push("ddd");

    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }

    queue<int> q1;
    q1.push(1);
    q1.push(12);
    q1.push(31);
    q1.push(51);
    q1.push(71);

    while (!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    return 0;
}