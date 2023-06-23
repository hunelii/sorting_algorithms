#include <iostream>
#define MAX 50
using namespace std;


void ss(int arr[], int size){
  int i, j, min;
    for(i=0; i<size; i++){
        min=i;
        for(j=i;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        } 
        int temp= arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

int main(){
    int array[MAX], size;
    int i;
    printf("Kaç Elemanlı?");
    scanf("%d", &size);
    for (i=0; i<size; i++){
        scanf("%d", &array[i]);
    }
    ss(array,size);
    printf("%d\n", size);
    for (i=0; i<size; i++){
        printf("%d ", array[i]);
    }
 
}