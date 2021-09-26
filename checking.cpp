#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <vector>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    int size = arr.size();
    vector<int> shift(size);
    int change;
    for (int i = 0; i < size; i++) {
        cout << i << " ";
        change = i - d;
        if (change < 0) {
            change = change + size;
        }
        shift[change] = arr[i];
    }
    return shift;
}

int main()
{
	vector<int> arr = { 41, 73, 89, 7, 10, 1 ,59, 58, 84, 77, 77, 97 ,58 ,1 ,86 ,58, 26, 10, 86 ,51};
    vector<int> shift = rotateLeft(10, arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << shift[i] << " ";
    }
}
