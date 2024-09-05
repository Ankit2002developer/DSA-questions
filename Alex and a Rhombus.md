# [Alex and rhombus](https://codeforces.com/problemset/problem/1180/A)

While playing with geometric figures Alex has accidentally invented a concept of a n
-th order rhombus in a cell grid.

A 1
-st order rhombus is just a square 1×1
 (i.e just a cell).

A n
-th order rhombus for all n≥2
 one obtains from a n−1
-th order rhombus adding all cells which have a common side with it to it (look at the picture to understand it better).

Alex asks you to compute the number of cells in a n
-th order rhombus.

Input <br>
The first and only input line contains integer n
 (1≤n≤100
) — order of a rhombus whose numbers of cells should be computed.

Output <br>
Print exactly one integer — the number of cells in a n
-th order rhombus.


```` cpp
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
 
// function to print the number of cells in nth-order rhombus
 
int numberOfCells(int n) {
    if (n == 1) {
        return 1;
    }
    int num = numberOfCells(n - 1) + 4 * (n - 1);
    return num;
}
 
int main() {
    int n;
    cin >> n;
    cout << numberOfCells(n) << endl;
}
