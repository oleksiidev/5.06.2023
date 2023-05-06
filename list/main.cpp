#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;

int main(int argc, const char *argv[])
{

    list<int> l1, l2, l3;

    for (int i = 1; i < 11; i++)
        l1.push_back(i);
    // cout<< "capacity" << l1.capacity()<< endl;
    cout << "size" << l1.size() << endl;
    copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));

    cout << endl << "list 2: ";
    for (int i = 1; i < 11; i++)
        l2.push_front(i);
    copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, " "));
    l2.sort();
    cout<< endl<< "sort list 2 :";
    copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, " "));

    l1.merge(l2);
    cout<< endl << "list 1: ";
    copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));

    l1.reverse();
    cout<< endl << "reverse list 1: ";
    copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));

    l1.unique();
    cout<< endl << "reverse list 1: ";
    copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));
    l1.clear();
    
    return 0;
}