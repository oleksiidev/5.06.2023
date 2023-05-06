#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, const char *argv[])
{

    vector<int> vectorOne;

    vectorOne.push_back(11);
    vectorOne.push_back(12);
    vectorOne.push_back(13);

    copy(vectorOne.begin(), vectorOne.end(), ostream_iterator<int>(cout, ""));

    cout << endl;
    vector<int> vectorTwo;

    cout << "Capacity" << vectorTwo.capacity() << endl;
    cout << "Size" << vectorTwo.size() << endl;

    for (int i = 1; i <= 10; i++)
    {
        vectorTwo.push_back(i);
        cout << "Capasity" << vectorTwo.capacity() << endl;
        cout << "Size" << vectorTwo.size() << endl;
    }
    vectorTwo[1] = 1111;
    copy(vectorTwo.begin(), vectorOne.end(), ostream_iterator<int>(cout, ""));
    cout << "front" << vectorTwo.front() << endl;

    vector<string> vectorStr;
    
    vectorStr.push_back('xxxx');
    vectorStr.push_back('ddd');
    vectorStr.insert(find(vectorStr.begin(), vectorStr.end(), "ddd"), "www");

    vector return 0;
}
