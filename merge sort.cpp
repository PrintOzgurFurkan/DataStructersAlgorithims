#include <iostream>
using namespace std;
const int MAX_SIZE = 50;

void merge (int *mergearray, int start , int mid, int end){
    int first = start, second= mid+1, temp = 0;
    int temparray[MAX_SIZE];
    
    for (;first<= mid && second <=end ;){
        if(mergearray[first]<mergearray[second]){
            temparray[temp]= mergearray[first];
            first++;
            temp++;
            
        }else{
            temparray[temp]= mergearray[second];
            second++;
            temp++;
            
        }
        
        
    }
    while(first<=mid){
        temparray[temp++] = mergearray[first++];
    }
    while(second<=end){
        temparray[temp++] = mergearray[second++];
    }
    for (first=start, temp=0; first<=end; first++, temp++){
        mergearray[first]= temparray[temp];
    }
    
}

void mergesort(int *array, int start, int end){
    
    if(start<end){
        int k = (start+end)/2;
        mergesort(array, start,k);
        mergesort(array, k+1, end);
    
        merge(array, start , k , end);
    }    
}




int main() {
    int Arr[MAX_SIZE] = {
        34, 7, 23, 32, 5, 62, 31, 14, 78, 1,
        45, 87, 12, 25, 18, 90, 66, 3, 27, 54,
        81, 39, 50, 99, 2, 76, 41, 8, 35, 63,
        13, 70, 21, 57, 44, 84, 10, 19, 6, 75,
        26, 88, 42, 9, 60, 33, 17, 92, 38, 4
    };

    cout << "Orijinal Dizi:\n";
    for (int i = 0; i < MAX_SIZE; ++i) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    cout << "\nSıralama yapılıyor...\n";
    mergesort(Arr, 0, MAX_SIZE -1);

    cout << "\nSıralanmış Dizi:\n";
    for (int j = 0; j < MAX_SIZE; ++j) {
        cout << Arr[j] << " ";
    }
    cout << endl;

    return 0;
}
