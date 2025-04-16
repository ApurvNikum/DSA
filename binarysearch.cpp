#include<iostream>
#include<vector>
using namespace std;

int binarysearch(const vector<int>&array, int key){
    int low = 0;
    int high = array.size() - 1;

    while(low<=high){
        int mid = (low+high)/2;
        if(array[mid]==key)
        return mid;
        else if(array[mid]<key)
        low = mid + 1;
        else
        high = mid - 1;

    }
    return -1;
}
int main()
{
    int num,key;
    cout<<"enter number of elemnts";
    cin>>num;

    vector <int> array(num);
    for(int i =0; i<num;i++){
        cin>>array[i];
    }

    cout<<"Enter key";
    cin>>key;

    int loc = binarysearch(array,key);
    if(loc==-1){
        cout<<"Number not found"<<endl;

    }else{
        cout<<"Number found  at location"<<loc + 1<<"."<<endl;
    }

    return 0;
}