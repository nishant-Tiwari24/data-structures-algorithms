#include <iostream>
using namespace std;

int main() {
    int arr[10] = {2,9,4,5,6,7,8,3,2,6};
    cout<<"memory of first block of arr is "<<&arr[0]<<endl;
    cout<<"memory of first block of arr is "<<arr<<endl;
    cout<< "4th"<< *arr <<endl;
    cout<< "4th"<< *arr + 1 <<endl;
    cout<< "4th"<< *(arr + 1) <<endl;
    cout<<3[arr]<<endl;

    cout<< &arr[0] <<endl;
}