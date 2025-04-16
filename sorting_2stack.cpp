#include<iostream>
#include<stack>
using namespace std;

void sortstack(stack<int>&inputstack){
    stack<int> tempstack;
    while(!inputstack.empty()){
        int temp = inputstack.top();
        inputstack.pop();

        while(!tempstack.empty()&&tempstack.top()>temp){
            inputstack.push(tempstack.top());
            tempstack.pop();
        }
        tempstack.push(temp);
    }

    while(!tempstack.empty()){
        inputstack.push(tempstack.top());
        tempstack.pop();
    }


}

int main(){
    stack<int> inputstack;
    int n , val;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements from top to bottom of stack:\n ";
    for(int i =0;i<n;i++){
        cin>>val;
        inputstack.push(val);
    }

    sortstack(inputstack);

    cout<<"\nsorted stack (top to bottom): \n";
    while(!inputstack.empty()){
        cout<<inputstack.top()<<" ";
        inputstack.pop();
    }
    cout<<endl;
    return 0;
}