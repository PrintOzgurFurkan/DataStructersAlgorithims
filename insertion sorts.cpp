#include <iostream>
using namespace std;

void insertionsort(int *array , int size){
    int i , j , key;
    for(i = 1; i< size ; i++){
        
        key = array[i];
        for(j=i-1; j>=0 && array[j] > key; j--){
            array[j+1]=array[j];
        }
        array[j+1] = key;
    }
    
}


int main() {
	int Arr[50] = {
        34, 7, 23, 32, 5, 62, 31, 14, 78, 1, 
        45, 87, 12, 25, 18, 90, 66, 3, 27, 54, 
        81, 39, 50, 99, 2, 76, 41, 8, 35, 63, 
        13, 70, 21, 57, 44, 84, 10, 19, 6, 75, 
        26, 88, 42, 9, 60, 33, 17, 92, 38, 4
        };

    	
    	for (int i = 0; i < 50; ++i) {
        	cout << Arr[i] << " ";
    	}
    	cout <<endl;
    	cout <<endl;
    	
    	cout << " sort yapiliyor";
    	insertionsort(Arr , 50);
    	cout <<endl;
    	cout <<endl;
    	
    	for (int j = 0; j < 50; ++j) {
        	cout << Arr[j] << " ";
    	}
    	cout <<endl;

	return 0;
}
