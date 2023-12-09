#include <bits/stdc++.h>
using namespace std;
//T (the element type) and N (the size of the array).
template <class T, int N>
void sort(T (&a)[N]){//array of T type
    int size = sizeof(a) / sizeof(a[0]);
    //It is a bubble sort; its time complexity is O(n^2), so it is not efficient
    for (int i = 0; i < size; i++)
        for (int j = i+1; j < size; j++)
            if(a[i] > a[j])
                swap(a[i], a[j]);
    
    //also you can use a sort function with a time complexity of O(nlog(n))
    // sort(a, a+size);
}

void solve(){
    int a[] = {3, 90, 1, 45};
    cout << "Before sorting : ";
    for (auto i: a)
        cout << i << ' ';
    cout << '\n';
    
    sort <int>(a);
    cout << "After sorting : ";
    for(auto i: a)
        cout << i << ' ';
    cout << '\n';
}
int main(){
    solve ();

}
