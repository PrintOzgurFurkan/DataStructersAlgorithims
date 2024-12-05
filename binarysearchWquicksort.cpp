#include <iostream>
using namespace std;
const int MAX_SIZE = 50;

void quicksort(int* array, int start , int end){
    int midpivot=array[(start+end)/2];
    int temp, left = start , right= end;
    
    for(;left<=right;){
         while(array[left]<midpivot && left<end){
             left++;
         }
         while(array[right]>midpivot && right>start){
             right--;
         }
         if(left<=right){
             temp= array[left];
             array[left]= array[right];
             array[right]= temp;
             left++;
             right--;
             
         }
    }
    
    if(left> start)
        quicksort(array ,start , right);
    if(right<end)
        quicksort(array, left, end);
}

int binarysearch(int *array ,int size , int key){
  int left= 0, right = size-1;
  int mid;
  
    while (left<=right){
        
        mid=(right+left)/2;
        if(array[mid]== key)
            return mid;
        else if(array[mid] < key)
            left= mid +1;
        else
            right= mid -1;
    }
  return -1;

}


int main() {
	int Arr[50] = {
        34, 7, 23, 32, 5, 62, 31, 14, 78, 1, 
        45, 87, 12, 25, 18, 90, 66, 3, 27, 54, 
        81, 39, 50, 99, 2, 76, 41, 8, 35, 63, 
        13, 70, 21, 57, 44, 84, 10, 19, 6, 75, 
        26, 88, 42, 9, 60, 33, 17, 92, 38, 4
        };

    	// Diziyi ekrana yazdırma
    	for (int i = 0; i < 50; ++i) {
        	cout << Arr[i] << " ";
    	}
    	cout << endl;

    cout << "\nSıralama yapılıyor...\n";
    quicksort(Arr, 0, MAX_SIZE -1);

    cout << "\nSıralanmış Dizi:\n";
    for (int j = 0; j < MAX_SIZE; ++j) {
        cout << Arr[j] << " ";
    }
    cout << endl;
    	cout << endl;
  cout << binarysearch(Arr,50, 10) << ". member = " << Arr[binarysearch(Arr,50, 10)];
    
	return 0;
}
