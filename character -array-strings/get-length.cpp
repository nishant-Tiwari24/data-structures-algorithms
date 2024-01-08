#include <iostream>
using namespace std;

int getLength(char name[]) {
    int i = 0, count = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    return count;    
}