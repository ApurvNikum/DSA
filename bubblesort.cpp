#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size: "<<endl;
    cin>>n;

    vector<int> array(n);

    cout<<"Enter the elements one by one : "<<endl;
    for(int i = 0;i<n;i++){
        cin>>array[i];
    }

    cout<<"Input array is: "<<endl;
    for(int i= 0;i<n;i++){
        cout<<array[i]<<endl;
    }

    //bubble sort begins
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }

    cout<<"Array after sorting is : "<<endl;
    for(int i =0;i<n;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}
