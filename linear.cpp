#include <iostream>
#include <array>
using namespace std;

template <typename T, size_t size>
int linearSearch(const array<T, size> &items, const T &key)
{
    for (size_t i = 0; i < items.size(); ++i)
    {
        if (key == items[i])
        {             // if found,
            return i; // return location of key
        }
    }
    return -1; // key not found
}

int main()
{
    int searchKey;                // value to locate
    const size_t arraySize = 100; // size of array
    array<int, arraySize> data;   // create array
    data = {35, 68, 8, 91, 44, 90, 1, 13, 72, 26, 6, 62, 80, 96, 88, 28, 54, 
            38, 19, 66, 43, 16, 59, 9, 58, 32, 15, 61, 2, 70, 57, 97, 75, 12, 
            40, 30, 36, 85, 45, 69, 100, 22, 50, 11, 60, 81, 20, 99, 92, 65, 78, 
            83, 89, 34, 77, 64, 95, 31, 39, 98, 71, 73, 37, 3, 48, 14, 67, 84, 42, 
            5, 18, 46, 33, 52, 74, 93, 53, 47, 86, 17, 49, 51, 29, 25, 82, 41, 27, 
            10, 21, 24, 94, 87, 63, 7, 56, 4, 76, 79, 23, 55}; // create some data
    cout << "Enter integer search key: ";
    cin >> searchKey;
    int element = linearSearch(data, searchKey);
    if (element != -1)
    {
        cout << "Found value in element " << element << endl;
    }
    else
    {
        cout << "Value not found" << endl;
    }
}