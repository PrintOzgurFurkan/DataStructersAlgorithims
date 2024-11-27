#include <iostream>
using namespace std;

void selectionsort(int *array , int size){
    int i , index , j , key;
    for(i=0;i<size-1;i++){
        index= array[i];
        key=i;
        for(j=i+1; j<size ; j++){
            if (array[j]<index){
                index=array[j];
                key = j;
            }
        
        }
        
        array[key]=array[i];
        array[i]=index;
        
        
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
    	selectionsort(Arr , 50);
    	cout <<endl;
    	cout <<endl;
    	
    	for (int j = 0; j < 50; ++j) {
        	cout << Arr[j] << " ";
    	}
    	cout <<endl;

	return 0;
}
