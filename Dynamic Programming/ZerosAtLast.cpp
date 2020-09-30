#include <iostream>

using namespace std;


int main()
{ int n, counter=0;
int temp=0;
cin>>n;
   int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 for(int i=0;i<n;i++)
{
    if(arr[i]!=0){

        swap(arr[i],arr[counter]);
        counter++;
    }
    }

for(int j=0;j<n;j++){
    cout<<arr[j];
}
}
