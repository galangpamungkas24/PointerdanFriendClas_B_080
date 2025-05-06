#include <iostream>
using namespace std;
class mahasiswa{

    public:
    int nim;
    void ShowNim(){
        cout<<"No Induk = "<<nim<<endl;
    }

};

int main (){
    mahasiswa mhs{1}; //Object mhs
    mhs.ShowNim(); //Member Acces Operator


    mahasiswa &refMhs = mhs; //Pointer Reference refMhs
    refMhs.nim = 2; //Member Access Operator
    mhs.ShowNim();

    mahasiswa *pMhs = &mhs; //Pointer Deference pMhs
    pMhs->nim = 3; //Arrow Operator
    pMhs->ShowNim();
    return 0;
}