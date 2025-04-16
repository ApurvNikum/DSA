#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elemenets: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter "<<n<<" integers: "<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int j = i;
        while(j>0 &&arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }

    }

    cout<<"sorted list in ascending order: "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}