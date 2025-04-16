#include<iostream>
using namespace std;


void update(int *p){

    *p = *p + 1;
}

int GetSum(int arr[],int n){

    int sum = 0;
    for(int i=0;i<n;i++){
        sum += i[arr];
    }
    return sum;
}
int main()
{
//   int a = 10;
//   int *p = &a;

//   cout<<"Before"<<*p<<endl;
//   update(p);
//   cout<<"After"<<*p<<endl;


int arr[6] = {1,2,3,4,5,6};
cout<<"sum of array is: "<<GetSum(arr+3,3)<<endl;


//   cout<<*p<<endl;
//   //prints value stored by pointer
//   cout<<p<<endl;
//   //prints adress value stored by pointer
  
//   int i = 5;
//   int *ptr = 0;
//   ptr = &i;

//   cout<<*ptr<<endl;
//   cout<<ptr<<endl;
//   //inceases value stored by pointer
//   (*ptr)++;
//   cout<<*ptr<<endl;
//   ptr++;
//   //increases adress of pointer by 4
//   cout<<ptr<<endl;
  

//   int temp[10];
//   int *ptr = &temp[0];
//   cout<<sizeof(temp)<<endl;
//   cout<<sizeof(ptr)<<endl;
//   cout<<sizeof(*ptr)<<endl;
//   cout<<sizeof(&ptr)<<endl;

//   cout<<&temp[0]<<endl;
//   cout<<&ptr<<endl;

//   char ch[6] = "abcde";
//   char *c = &ch[0];

//   cout<<c<<endl;

//   char ch = 'z';
//   char *c = &ch;
//   cout<<c<<endl;
// continues to print until it finds null value
    return 0;
}