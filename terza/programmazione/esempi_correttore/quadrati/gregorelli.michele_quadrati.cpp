#include <iostream>

using namespace std;

int main()
{
    int valutazione=0, num, contatore1=0, contatore2=0;
    int riga=0, colonna=0, contatore3=0;
    int mezzo;
    cin>>num;

    if (num>=0) valutazione=1;
    if (num<0 && num%2==0) valutazione=2;
    if (num<0 && num%2!=0) valutazione=3;
//prima soluzione
    if (valutazione==1) {
        for(contatore1=0; contatore1<num;contatore1++) {
            while (contatore2<num) {
                cout<<"x";
                contatore2++;
            }
            contatore2=0;
            cout<<endl;
        }
    }
//seconda soluzione
    if (valutazione==2) {
        num=-num;
        for(contatore1=0; contatore1<num;contatore1++) {
                //colonne
            colonna++;
            if (colonna==1 || colonna==num) {
                while (contatore2<num) {
                    cout<<"x";
                    contatore2++;
                }
                contatore2=0;
            }
            else {
                while (contatore2<num) {
                    riga++;//righe
                    contatore2++;
                if (riga==1 || riga==num) {
                    cout<<"x";
                }
                else
                    cout<<" ";
                }
            }
            cout<<endl;
            riga=0;
            contatore2=0;
        }
    }
//terza soluzione
    if (valutazione==3) {
        num=-num;
        mezzo=num/2;
        //contatore2 = numero di righe
        while (mezzo>0) {
        //mezzo= spazi bianchi
            for (contatore1=0; contatore1<mezzo; contatore1++) {
                cout<<" ";
        //contatore1=quant ispazi bianchi mettere
            }
            for (contatore1=0; contatore1<num-mezzo*2; contatore1++)
                cout<<"x";
            cout<<endl;
            mezzo--;
        }
        for (contatore3=0; contatore3<num; contatore3++)
            cout<<"x";
        cout<<endl;
        mezzo=2;
        while(mezzo<num) {
            for (contatore1=0; contatore1<mezzo/2; contatore1++)
                cout<<" ";
            for (contatore2=0; contatore2<num-mezzo; contatore2++)
                cout<<"x";
            cout<<endl;
            mezzo=mezzo+2;
        }
    }
    return 0;
}
