#include<iostream>
using namespace std;

template<class T>
class myArray{
        int total_size;
        T* ptr=new T[total_size];
        int used_size;
    public:
        myArray(int totSize,int usedSize):total_size(totSize),used_size(usedSize){}
        
        void set(){
        T ele;
        for(int i=0;i<used_size;i++){
            cout<<"Enter the element "<<i+1<<endl;
            cin>>ele;
            ptr[i]=ele;
        }
            
        }

        T get(int i){
           return ptr[i];
        }

        void display(){
            for(int i=0;i<used_size;i++){
                cout<<ptr[i]<<" ";
            }
            cout<<endl;
        }
        void insert(T ele,int pos){
            for(int i=used_size;i>pos;i--){
                ptr[i]=ptr[i-1];
            }
            ptr[pos]=ele;
            used_size++;
        }
        void append(T ele){
            ptr[used_size]=ele;
            used_size++;
        }
        bool search(T ele){
            for(int i=0;i<used_size;i++){
                if(ptr[i]==ele) return true;
                }
            return false;
        }
        T* begin(void){
            return ptr;
        }
        void erase1(T* addr){
            int index;
            for(int i=0;i<used_size;i++){
                if((*addr)==ptr[i]){
                    index=i;
                }
            }
            for(int j=index;j<used_size;j++){
                ptr[j]=ptr[j+1];
            }
            used_size--;
        }

};
int main()
{
    int index;
    myArray<int>arr(20,5);
    arr.set();
    cout<<"Enter the index of the element you want : ";
    cin>>index;
    cout<<arr.get(index)<<endl;
    cout<<"The elements in the array are "<<endl;
    arr.display();
    arr.insert(9,2);
    arr.display();
    arr.insert(60,3);
    arr.display();
    arr.append(100);
    arr.display();
    cout<<arr.search(220)<<endl;
    arr.erase1(arr.begin());
    arr.display();



    return 0;
}