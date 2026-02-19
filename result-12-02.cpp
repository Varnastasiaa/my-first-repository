#include "iostream"
#include "fstream"
#include "12-02.h"
#include "algorithm"
using namespace std;
int main(){
    int n;
    cout<<" Введіть кількість прямокутників: ";
    cin>>n;

    rectangle** rect=new rectangle*[n];
    for(int i=0; i<n; i++){
        rect[i]=new rectangle();
        cin>>*rect[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(rect[j]-> area()> rect[j+1]-> area()){
                rectangle* temp = rect[j];
                rect[j]= rect[j+1];
                rect[j+1]=temp;
            }
        }
    }
ofstream fout("Result.txt");

if(!fout){
    cout << "Помилка відкриття файлу!" << endl;
    return 1;
}

fout << "Відсортовані прямокутники:\n";

for(int i = 0; i < n; i++){
    fout << *rect[i] << endl;
}

fout.close();

    for(int i=0; i<n; i++){
        delete rect[i];
    }
    delete[] rect;
    return 0;
}