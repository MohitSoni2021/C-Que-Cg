// Print all elements that are at even indexes in the array arr = [10, 20, 30, 40, 50].

int main() {
    
    int arr[] = {10,20,30,40, 50};
    
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(i%2==0){
            printf("%d\n", arr[i]);
        }
    }
    
    
    
}