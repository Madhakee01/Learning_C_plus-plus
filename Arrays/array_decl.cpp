#include <iostream>

using namespace std;


int main()
{
    int A[] = {2, 4, 6, 8, 10, 12};
    
    for(int i = 0; i < 6; i++)
    {
        cout << A[i] << endl;
    }
    
    // for each loop
    cout << "\n" << endl;
    for( int x:A)
    {
          cout << x << endl;
    }
    
    // for each loop to change the value of the elements
    cout << "\n" << endl;
    for( int &x:A)
    {
          cout << ++x << endl;
    }
    
    return 0;
}
