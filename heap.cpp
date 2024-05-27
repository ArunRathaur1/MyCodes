/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
class heap {
    public:
    int ar[100];
    int size;
    heap(){
        ar[0]=-1;
        size=0;
    }
    void insert(int data){
        if(size==100)return;
        size++;
        ar[size]=data;
        int i=size;
        while(i>1){
            int tem=i/2;
            if(ar[tem]<ar[i])
            {
                swap(ar[tem],ar[i]);
                i=tem;
                
            }
            else{
                break;
            }
        }
    }
    void Deletion (){
        ar[1]=ar[size];
        size--;
        int i=1;
        while(i<size)
        {
            if(i*2<size&&ar[i*2]>ar[i]){
              swap(ar[i*2],ar[i]);
              i=i*2;
            } 
            else if(i*2+1<size&& ar[i*2+1]>ar[i]){
                swap(ar[i*2+1],ar[i]);
                i=i*2+1;
            }
            else{
                break;
            }
        }
    }
    void display(){
        for(int i=1;i<size+1;i++){
            cout<<ar[i]<<" ";
        }
    }
};
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    cout<<endl;
    heap h;
    h.insert(5);
    h.insert(10);
    h.insert(21);
    h.insert(51);
    h.insert(10);
    h.Deletion();
    h.display();

    return 0;
}
