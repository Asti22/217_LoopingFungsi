#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma, nNB, nCompas, nNike;
int hAdidas = 300, nNB = 250, nPuma = 150, nNike = 350;

void input()
{
    cout <<"Masukan jumlah adidas=";
    cin >>nAdidas;

    cout <<"Masukan jumlah Puma=";
    cin >>nPuma;

    cout <<"Masukan jumlah New Balance=";
    cin >>nNB;

    cout <<"Masukan julah Nike=";
    cin >>nNike;

}
int totalharga(){
    return(nAdidas * nAdidas) + (nPuma*nPuma) + (nNB*nNB) + (nNike *nNike);

}
void display() {
    cout << endl;
    cout <<"===================="<<endl;
    cout <<endl;
    cout << "Jumlah puma="<< nPuma << endl;
    cout << "Jumlah Adidas =" <<nAdidas <<endl;
    cout <<endl;
    cout << "Total Harga =Rp." <<totalharga()<<endl;
}



int main() 
{
    input();
    display();
    
}