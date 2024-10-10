#include <iostream>

using namespace std;

int main()
{
    int start, end, i, r;

    cout << "Enter start and end year to get the range of leap year : ";
    cin >> start >> end;

    if (start > end){
        start = start + end;
        end = start - end;
        start = start - end;
    }

    for (i = start; i <= end; i++)
    {
        if ((i % 4 == 0) && ((i % 100 != 0) || (i % 400 == 0)))
        {
            cout << i << " ";
        }
    }
    return 0;
}
