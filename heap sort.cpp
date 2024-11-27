#include <iostream>
using namespace std;
const int MAX_SIZE = 20;
int heapsize;

void heapify(int *array , int root){
    int leftchild = 2*root +1;
    int rightchild = 2*root +2;
    int temp, max;
    
    if(array[leftchild]> array[root] && leftchild<=heapsize){
        max = leftchild;
    }
    else{
        max = root;
    }
    
    if(array[rightchild]> array[max] && rightchild<=heapsize){
        max = rightchild;
    }
    if(max!=root){
        temp= array[root];
        array[root]= array[max];
        array[max]=temp;
        heapify(array, max);
    }
}

void buildheap(int *array , int size){
    int i =(size-1)/2;
    heapsize = size-1;
    
    for(; i >=0; i-- ){
        heapify(array,i);
    }
}

void heapsort(int* array, int size){
    int last = size-1;
    int temp;
    buildheap(array, size);
    for (int j = 0; j < MAX_SIZE; ++j) {
        cout << array[j] << " ";
    }
    cout<< endl;
    cout<< endl;
    for (;last>=1;last--){
        temp=array[last];
        array[last]= array[0];
        array[0] = temp; 
        heapsize--;
        heapify(array, 0);
        for (int k = 0; k < MAX_SIZE; ++k) {
        cout << array[k] << " ";
        }
        cout<< endl;
        cout<< endl;
    }
}

int main() {
    int Arr[MAX_SIZE] = {
        14, 7, 13, 20, 5, 12, 9, 4, 8, 1,
        3, 17, 19, 15, 11, 10, 6, 18, 16, 2};

    cout << "Orijinal Dizi:\n";
    for (int i = 0; i < MAX_SIZE; ++i) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    cout << "\nSıralama yapılıyor...\n";
    heapsort(Arr, MAX_SIZE);

    cout << "\nSıralanmış Dizi:\n";
    for (int j = 0; j < MAX_SIZE; ++j) {
        cout << Arr[j] << " ";
    }
    cout << endl;

    return 0;
}
