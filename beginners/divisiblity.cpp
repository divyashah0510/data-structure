#include <iostream>
using namespace std;
main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 4 == 0 && i % 6 == 0)
        {
            cout << i << endl;
        }
    }
    // int i = 1;
    // while(i!=100){
    //     if (i%4==0 && i%6==0)
    //     {
    //         cout<<i<<" ";
    //     }
    //     i++;        
    // }
}