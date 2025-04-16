#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr, int left, int mid, int right){
    int size1 = mid - left + 1;
    int size2 = right - mid;

    //create temporary arrays
    vector<int> Left(size1), Right(size2);

    //copy the data to temporary array
    for(int i =0;i<size1;i++){
        Left[i] = arr[left + i];
    }
    for(int j = 0;j<size2;j++){
        Right[j] = arr[mid + 1 + j];
    }

    //merge the arrays
    int i = 0, j = 0, k = left;
    while(i<size1 && j< size2){
        if(Left[i]<=Right[j]){
            arr[k] = Left[i];
            i++;
        }else{
            arr[k] = Right[j];
            j++;
        }
        k++;
    }
    //copy remaining elements of Left[] if any
    while(i<size1){
    arr[k] = Left[i];
    i++;
    k++;
    }

    //copy remaining elements of right[] if any
    while(j<size2){
        arr[k] = Right[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int>& arr,int left, int right){
    if(left<right){
        int mid = left + (right - left)/2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);

        merge(arr,left,mid,right);
    }
}



int main()
{

    int size;
    cout<<"Enter number of elements: "<<endl;
    cin>>size;

    vector<int> arr(size);
    cout<<"Enter the elements: ";
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }

    merge_sort(arr,0,size-1);

    cout<<"The sorted array is: ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}