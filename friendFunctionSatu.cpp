#include <iostream>
using namespace std;

class pelajar;

class manusia {
public:
    void showNilaiPelajar(pelajar &x);
};
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
        void setid(int pId);
        void displayAll(orang &a);
        
    };
    
    void siswa::displayAll(orang &a)
    {
        cout << id << endl << a.nama;
    }
    void orang::setNama(string pNama)
    {
        nama = pNama;
    }
    void siswa::setId(int pId)
    {
        id=pId;
    }
    int main()
    {
            orang joko;
            joko.setNama("Joko Susilo");
            siswa joko_siswa;
            joko_siswa.setId(1);
            joko_siswa.displayAll(joko);
            return 0;
    }