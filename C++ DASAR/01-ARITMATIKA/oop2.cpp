#include <iostream>
using namespace std;

class bangunDatar
{
public:
    int panjang;
    int lebar;

    void luas()
    {
        int l = panjang * lebar;
        cout << "luas = " << l << endl;
    }

    int keliling()
    {
        int k = 2 * (panjang + lebar);
    }

    void setPL(int p, int l)
    {
        if ((p > 0 && l > 0))
        {
            if (p >= l)
            {
                panjang = p;
                lebar = l;
            }
            else
            {
                panjang = l;
                lebar = p;
            }
        }
        else
        {
            panjang = lebar = 1;
        }
    }
    int getP(){
        return panjang;
    }
    int getL(){
        return lebar;
    }
};

int main()
{
    bangunDatar persegi; // persegi = object

    persegi.setPL(6,4);
    persegi.luas();

    cout << "keliling = " << persegi.keliling() << endl;

    return 0;
}