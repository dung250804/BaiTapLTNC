#include <iostream>

using namespace std;

int search_key (int key, int* a, int first, int last)
{
    if (first > last) return -1;

    int mid = (first + last) / 2;
    int* p = &a[mid];
    if (*p == key) return mid;
    if (*p > key) return search_key (key, a, first, mid-1);
    return search_key (key, a, mid+1, last);
}
int main ()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key; 
	cin >> key;
    int index = search_key (key, a, 0, 9);
    cout << index+1;
    return 0;
}
