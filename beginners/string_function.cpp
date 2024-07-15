#include <iostream>
#include <string>
using namespace std;

main()
{
    string str = "Hello World!";
    cout << "String: " << str << endl;
    cout << "Length: " << str.length() << endl;
    cout << "Size: " << str.size() << endl;
    cout << "Capacity: " << str.capacity() << endl;
    cout << "Empty: " << str.empty() << endl;
    cout << "First character: " << str.front() << endl;
    cout << "Last character: " << str.back() << endl;
    cout << "Substring: " << str.substr(6, 5) << endl;
    cout << "Find: " << str.find("World") << endl;
    cout << "Replace: " << str.replace(6, 5, "Universe") << endl;
    cout << "Append: " << str.append(" Good Morning!") << endl;
    cout << "Insert: " << str.insert(6, "Beautiful ") << endl;
    cout << "Erase: " << str.erase(6, 10) << endl;
    cout << "Clear: ";
    str.clear();
    cout << str << endl;
    cout << "Empty: " << str.empty() << endl;
}