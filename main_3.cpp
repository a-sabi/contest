#include <iostream>
using namespace std;



void enter(int **array, int n, int m){
    for(int i =0; i < n; i++){
        for(int j = 0; j<m; j++){
            array[i][j] = rand() % 101 + 0;
        }
    }
}

void out(int **array, int n, int m){
    for (int i =0; i < n; i++){
        for (int j=0; j < m; j++){
            cout<<array[i][j]<< " ";
        }
        cout<<endl;
    }
}

void diagonal(int **array, int n, int m){
    int sum = 0;
    for (int i=0;i<n;i++) {
        sum += array[i][n - 1 - i];
    }
    cout << "Summa:" << sum << endl;}

int main()
{
    int n;
    int m;
    cout << "Enter size: ";
    cin >> n;
    cin >> m;

    int **array = new int*[n];
    for (int i = 0; i < n; i++) {
        array[i] = new int[m];
    }


    enter(array, n, m);
    out(array, n, m);
    diagonal(array, n, m);

    delete [] array;
    return 0;
}