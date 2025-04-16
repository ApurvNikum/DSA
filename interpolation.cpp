#include<iostream>
#include<vector>
using namespace std;


int interpolation(vector<int>&array, int key){
    int low = 0;
    int high = array.size() - 1;

    while(low<=high && key>=array[low] && key<=array[low]){
        if(low==high){
            if(array[low]= key)return low;
            return -1;
        }

    
    int pos = low + ((key-array[low])*(high-low)/(array[high]-array[low]));

    if(array[pos]==key)
        return pos;
    if(array[pos]<key)
        low = pos + 1;
    else
        high = pos -1;
    }
    return -1;

}
int main()
{

    int num,key;

    cout<<"Enter number of elements in the array";
    cin>>num;

    vector<int> array(num);
    cout<<"Enter elements"<<endl;

    for(int i =0;i<num;i++){
        cin>>array[i];

    }

    cout<<"Enter a number to search";
    cin>>key;

    int loc  = interpolation(array,key);
    
    if (loc == -1) {
        cout << "Number not found in the list." << endl;
    } else {
        cout << "Number found at location " << loc + 1 << "." << endl;
    }


    return 0;
}