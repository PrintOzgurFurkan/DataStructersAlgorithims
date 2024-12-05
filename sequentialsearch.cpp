#include <iostream>
using namespace std;

int sequentiolsearch(int *array ,int size , int key){
  for(int i =0 ; i<size ; i++){
    if(array[i]== key)
      return i;
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

    	for (int i = 0; i < 50; ++i) {
        	cout << arr[i] << " ";
    	}
    	cout << endl;
  cout << sequentiolsearch(Arr,50, 10) << ". member = " << Arr[sequentiolsearch(Arr,50, 10)];

	return 0;
}
