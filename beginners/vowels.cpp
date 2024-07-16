#include <iostream>
#include <string>
using namespace std;

void vowels_from_sentence(string sentence)
{
    int count = 0;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' ||
            sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')
        {
            count++;
        }
    }
    cout << count << endl;
}

main()
{
    string input_string;
    cout << "Enter the string = " << endl;
    getline(cin, input_string);
    cout << "The vowels present in sentence are = " << endl;
    vowels_from_sentence(input_string);
}