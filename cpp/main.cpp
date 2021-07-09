#include <iostream>
#include <set>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    srand(time(NULL));
    set<int> s;

    while (s.size() < 6) s.insert( rand() % 46 );
    
    cout << "CPP => [ ";
    for (set<int>::iterator iter = s.begin(); iter != s.end(); iter++)
        cout << *iter << ( iter != --s.end() ? ", " : " " );

    cout << "]";

    return 0;
}