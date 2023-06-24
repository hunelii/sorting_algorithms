#include <iostream>
#define MAX 50
using namespace std;


void is(int arr[], int size){
int i, j, temp;
    for(i=1; i<size; i++){
        temp = arr[i];
        j=i-1;
        
        while (j >= 0 && arr[j] > temp){
            arr[j+1]=arr[j];
            j--;
        }
    arr[j+1] = temp;
        
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
    is(array,size);
    printf("%d\n", size);
    for (i=0; i<size; i++){
        printf("%d ", array[i]);
        }
 
}