#include <iostream>
using namespace std;
class myarray{
    private:
    int total_size;
    int used_size;
    int *ptr;
    public:
    myarray(int tsize,int usize){

       total_size = tsize;
       used_size = usize;
       ptr = new int[total_size];

    }
    ~myarray(){
        delete[] ptr;
    }

    void setval(){
        for (int i = 0; i < used_size; i++)

        {
            int value;
            cout<<"enter elements"<<i<<endl;
            cin>>value;
            ptr[i]=value;
        }
        
    }

    void show(){
        for (int i = 0; i < used_size; i++)
        {
            cout<<ptr[i]<<"  ";
        }
        
    }



};

int main() {
    myarray marks(10,5);
    marks.setval();
    marks.show();

    return 0;
}