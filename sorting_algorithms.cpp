#include <iostream>
using namespace std;
int * input_arr(int n)
{
    int i, j;
    static int a[10000];
    for(i=0;i<n;i++){
        cout<<"Number "<<i<<": ";
        cin>>a[i];
    }
    cout<<endl;
    for(i=0; i<n; i++){
        cout<<a[i]<<"    ";
    }
    return a;
}
int * selection_sort(int n, int a[100])
{
    int i, j, min;
    cout<<endl;
    for(j=0;j<n;j++){
        min=a[j];
        for(i=j+1;i<n;i++){
            if(a[i]<min){
                min=a[i];
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        } 
    }
    return a;
}
void output_arr(int n, int a[100]){
    int i;
    cout<<endl;
    for(i=0; i<n; i++){
        cout<<a[i]<<"    ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Number count:";
    cin>>n;
    int *arr;
    arr=input_arr(n);
    int *sort_arr;
    sort_arr=selection_sort(n, arr);
    output_arr(n, sort_arr);
    return 0;
}

