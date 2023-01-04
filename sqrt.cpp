#include <iostream>
using namespace std;

int squareRoot(int x)
{
    int start = 1;
    int end = x;
    int res = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if(mid <= x/mid){
            res = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return res;
}


int main()
{
    int n = 81;
    int root = squareRoot(n);
    cout<<root;
}