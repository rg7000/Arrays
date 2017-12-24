#include <stdio.h>
#include <iostream>
using namespace std;
class arr_op
{
    
    int N;
    int i;
    public:
    int get_n();
    void set_n();
    void initialize_arr(int a[], int size);
    void print(int a[], int size);
    
};
int arr_op::get_n()
{
    return N;
}
void arr_op::set_n()
{
    cin>>N;
}
void arr_op::initialize_arr(int a[], int size)
{
    for(i = 0; i<size; i++)
        cin>>a[i];
}
void arr_op::print(int a[], int size)
{
    for(i = size - 1; i>=0; i--)
        cout<<a[i]<<" ";
}
int main()
{
    int N;
    /*cin>>N;
    int a[N];*/
    arr_op obj;
    obj.set_n();
    N = obj.get_n();
    int a[N];
    cin>>N;
    int a[N];
    arr_op obj;
    obj.initialize_arr(a,N);
    obj.print(a,N);

    
}
