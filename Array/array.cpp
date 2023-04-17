#include <iostream>
using namespace std;

struct Array{
    int a[10];
    int size;
    int length;
};

void Display(Array arr){
    for(int i = 0; i < arr.length; i++){
        cout << arr.a[i] << "\n";
    }
}

void Append(Array *arr, int x){
    if(arr->length < arr->size){
        arr->a[arr->length] = x;
        arr->length ++;
    }
    else{
        cout << "trying to access the incorrect index" << "\n";
    }
}

void Insert(Array *arr, int value, int index){
    if(index >= 0 && index <= arr->length){
        for(int i = arr->length; i < index; i--){
            arr->a[i] = arr->a[i-1];
        }
        arr->a[index] = value ;
        arr->length ++;
    }
}

int Delete(Array *arr, int index){
    if(index >= 0 && index <= arr->length){
        int x = arr->a[index];
        for(int i = index; i < arr->length - 1; i++){
            arr->a[i] = arr->a[i+1];
        }
        arr->length --;
        return x;
    }
    return 0;
}

int Get(Array arr, int index){
    if(index >= 0 && index <= arr.length){
        int value = arr.a[index];
        return value;
    }
    return -1;
}

void Set(Array *arr, int value, int index){
    if(index <= arr->length && index >=0){
        arr->a[index] = value;
    }
}

int MaximumValue(Array arr){
    int max = arr.a[0];
    for(int i = 1; i < arr.length; i++){
        if(arr.a[i] > max ){
            max = arr.a[i];
        }
    }
    return max;
}

int MinimumValue(Array arr){
    int min = arr.a[0];
    for(int i = 1; i < arr.length; i++){
        if(arr.a[i] < min ){
            min = arr.a[i];
        }
    }
    return min;
}

int Sum(Array arr){
    int sum = 0;
    for(int i = 0; i < arr.length; i++){
        sum += arr.a[i];
    }
    return sum;
}

void ReverseUsingSwap(Array *arr){
    for(int i = 0, j = arr->length - 1; i < j; i++, j--){
        int temp = arr->a[i];
        arr->a[i] = arr->a[j];
        arr->a[j] = temp;
    }
}

int main(){
    Array arr = {{1,2,3,4,5}, 10, 5};
}
