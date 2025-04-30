#include <iostream> //Lab2E5

using namespace std;
int amou=5;
int i;
int arr1[5] = {1,4,7,10,15};
int arr2[5];
int* ptr = &arr1[i];

int main()
{
for (i = 0; i <= amou-1; i++){
ptr = &arr1[i];
arr2[(amou-i-1)]= *ptr;
//cout << *ptr << "\n";'
}
for (i = 0; i <= amou-1; i++){
cout << arr2[i] << "\n";
    }


    return 0;
}
