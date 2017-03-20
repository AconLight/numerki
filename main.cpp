#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>

using namespace std;

bool wybor (string & wejsciowy){
    char odp;
    cout<<"Co chcesz zrobic?"<<endl
    <<"Wczytac zestaw wspolczynnikow ukladu z podanego przeze mnie pliku- wpisz 1"<<endl
    <<"Wybrac gotowa macierz -wpisz 2,3 lub 4"<<endl
    <<"Wpisac wspolczynniki z klawiatury -wybierz 5"<<endl;
    cin.get(odp);
    switch( odp )
{
case 1:
        cout<< "Podaj nazwe pliku wejsciowego"<<endl;
        cin>>wejsciowy;
    break;

case 2:
    wejsciowy="";
    break;

case 3:
    wejsciowy=" ";
    break;

case 4:
    wejsciowy=" ";
    break;

case 5:
    //funkcja wczytująca z klawiatury
    break;

default:
    cout<<" Bład";  //return 1;
    break;
}

}

bool sprawdz (ifstream &plik){
    if( plik.good() == true ){
        cout << "Uzyskano dostep" <<endl;
        return 1;
    }
    else{
        cout << "Brak dostepu" <<endl;
        return 0;
    }
}

/*double *odczyt (ifstream &plik){  //dodac macierz


    for(int i=0; i!='\n'; i++)
    {
            for(int j=0; j='\n'; j++)
            {
                plik>>tab[i][j];
            }
    }
}*/


void algorytm (){ //przyjmuje macierz

}
int main()
{
    int maks =10; //maksymalna ilosc rownan
    //int ileR, ileN; // ile równañ, ile niewdiadomych
    string *nazwa=new string; //wskaŸnik na nazwê pliku

    wybor(*nazwa); //wybór macierzy
    cout<<nazwa;
    ifstream plik_we;
    plik_we.open((*nazwa).c_str(), ios_base::in);

    if(sprawdz(plik_we)==0)
    {
        return 0;
    }


//macierz dynamiczna
//double **tablica= new double [];

//odczyt(plik_we);

    delete nazwa;
   // delete tablica;
    return 0;
}


