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
int * insertion_sort(int n, int a[100])
{
    int i, j;
    for(i=0;i<n;i++){
        for(j=i; j<n;j++){
            if(a[j]<a[i]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];  
            }
        }
    }
    return a;
}
int * bubble_sort(int n, int a[100])
{
    int i, j;
    for(j=0;j<n;j++){
        for(i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                a[i]=a[i]+a[i+1];
                a[i+1]=a[i]-a[i+1];
                a[i]=a[i]-a[i+1];
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
    sort_arr=bubble_sort(n, arr);
    output_arr(n, sort_arr);
    return 0;
}

