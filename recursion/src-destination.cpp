#include <iostream>
using namespace std;

void reachhome(int src,int dest) {
    if(src==dest)
        cout << "Reach Home" << endl;
    reachhome(src+1,dest);
}