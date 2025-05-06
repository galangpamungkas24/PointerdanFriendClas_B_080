#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang 
{
private:
    string nama;
public:
     void setNama(string pNama);
      friend class siswa; 
};
class siswa 
{
private:
    int id;
public:
    void setId(int pId);
    void displayAll(orang &a); 
};

void siswa::displayAll(orang &a) 
{
    cout << id << endl << a.nama ;
}
void orang::setNama(string pNama) 
{
    nama = pNama;
}
void siswa::setId(int pId) 
{
    id = pId;
}
























class pelajar {
private:
    int nilai;

public:
    pelajar() { nilai = 100; }
    friend void manusia::showNilaiPelajar(pelajar &x);
};

void manusia::showNilaiPelajar(pelajar &x) {
    cout << x.nilai;
}






