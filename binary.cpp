#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

template <typename T, size_t size>
int binarySearch(const array<T, size> &items, const T &key)
{
    int low = 0;                       // low index of elements to search
    int high = items.size() - 1;       // high index of elements to search
    int middle = (low + high + 1) / 2; // middle element
    int location = -1;                 // key’s index; -1 if not found
    do
    { // loop to search for element
        // if the element is found at the middle
        if (key == items[middle])
        {
            location = middle; // location is the current middle
        }
        else if (key < items[middle])
        {                      // middle is too high
            high = middle - 1; // eliminate the higher half
        }
        else
        {                     // middle element is too low
            low = middle + 1; // eliminate the lower half
        }
        middle = (low + high + 1) / 2; // recalculate the middle // in the next slide
    } while ((low <= high) && (location == -1));
    return location; // return location of key
}

int main()
{
    int searchKey;                                                                                                                                                                                                                                                                                                                                                                                                   // value to locate
    const size_t arraySize = 100;                                                                                                                                                                                                                                                                                                                                                                                    // size of array
    array<int, arraySize> data;                                                                                                                                                                                                                                                                                                                                                                                      // create array
    data = {48, 52, 19, 79, 62, 63, 81, 3, 61, 24, 22, 46, 17, 25, 39, 11, 12, 
        32, 44, 72, 73, 57, 85, 55, 26, 83, 59, 9, 35, 30, 53, 1, 77, 67, 31, 70, 
        20, 98, 78, 90, 29, 36, 54, 42, 94, 68, 41, 100, 8, 87, 43, 50, 92, 49, 45, 
        60, 71, 82, 69, 38, 93, 28, 58, 15, 37, 86, 7, 23, 13, 97, 76, 27, 5, 56, 
        89, 96, 51, 33, 99, 88, 80, 47, 75, 64, 66, 84, 65, 6, 40, 10, 21, 4, 18, 2, 
        95, 14, 16, 34, 91, 74}; // create some data
    cout << "Enter integer search key: ";
    cin >> searchKey;
    sort(data.begin(), data.end()); // sort the array
    int element = binarySearch(data, searchKey);
    if (element != -1)
    {
        cout << "Found value in element " << element << endl;
    }
    else
    {
        cout << "Value not found" << endl;
    }
}