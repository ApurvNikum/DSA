#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

#define MAX 8
#define SWAP(x, y) { int t = x; x = y; y = t; }

// Global data and direction
vector<int> data(MAX);
const int UP = 1;
const int DOWN = 0;

void compare(int i,int j,int dir){
    if(dir == (data[i]>data[j])){
        SWAP(data[i],data[j]);
    }
}

void bitonicmerge(int low, int count, int dir){
    if(count>1){
        int k = count/2;
        for(int i = low;i<low+k;i++){
            compare(i,i+k,dir);
        }
        //important ..might forget this
        bitonicmerge(low,k,dir);
        bitonicmerge(low+k,k,dir);
    }
}

void recursivebitonic(int low, int count, int dir){
    if(count>1){
        int k = count/2;

        //this time we include up and down for giving different directions in which sorting should take place
        recursivebitonic(low,k,UP);
        recursivebitonic(low+k,k,DOWN);
        bitonicmerge(low,count,dir);
    }
}

//sorts the entire array
void sort(){
    recursivebitonic(0,MAX,UP);
}

int main(){
    cout<<"Enter the data "<<endl;
    for(int i =0;i<MAX;i++){
        cin>>data[i];
    }

    sort();

    cout<<"sorted data: "<<endl;
    for(int i = 0;i<MAX;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;

    return 0;
}

