#include<stdio.h>

int main(){
    int n,arr[100],key,low=0,h,mid,found=0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter sorted array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d",&key);

    h=n-1;

    while(low<=h){
        mid=(low+h)/2;

        if(arr[mid]==key){
            found=1;
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            h=mid-1;
        }
    }

    if(found){
        printf("Element found at position %d",mid+1);
    }
    else{
        printf("Element not found");
    }

    return 0;
}