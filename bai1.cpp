#include<stdio.h>
#include<math.h>
const int MAX =10;
int arr[MAX];
 
int main(){
    for(int i = 0;i < 10; ++i){
        printf("\nNhap a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

int tg;
    for(int i = 0;i < 10-1;++i){
        for(int j = i+1; j < 10;++j){
            if(arr[i] > arr[j]){
                tg = arr[i];
                arr[i] = arr[j];
                arr[j] = tg;
            }
        }
    }
    printf("\nMang sau khi sap xep tang dan la: ");
    for(int i = 0;i <10;++i){
        printf("%d ", arr[i]);
    }
}
