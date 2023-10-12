#include <iostream>
#include <sstream>

using namespace std;

void test_array();
void test_reference();
void test_struct();
void test_const();

int main(int argc, char* argv[])
{
    /**
        Il main "vero" prende argomenti!
    
        int argc è il numero di parametri passati alla funzione
        char* argv[] è un array di puntatori a char (stringhe C), che contiene tutti i parametri passati
    **/

    if(argc > 1)
        cout << argv[0] << " " << argv[1] << endl;


    //conversione di stringhe in numeri tramite stream

    stringstream ss(argv[1]);
    int j;

    ss >> j;

    /*******************************************************************/

    test_array();
    test_reference();
    test_struct();
    test_const();

    /*******************************************************************/

    return 0;
}

void test_array()
{
    cout << "test array :)" << endl << endl;

    /*******************************************************************/

    int a[5] = {0, 0, 0, 0, 0};

    for(int i=0; i<5; i++)
        cout << a[i] << "; ";

    cout << endl;

    /*******************************************************************/

    /*int *p = a;

    for(int i=0; i<10; i++)     //accesso a celle di memoria oltre alla dimensione di a!
        cout << p[i] << "; ";
    */
    cout << endl;

    /*******************************************************************/

    int *b[5]; //array di 5 puntatori a intero
        cout << "a: " << sizeof(a) << " - b: " << sizeof(b) << endl;
    //non è possibile dedurre la dimensione di un array (statico) dall'array stesso
    cout << endl;

    /*******************************************************************/

    double d[2][3] = {{1.1, 1.2, 1.3}, {2.1, 2.2, 2.3}}; //sei celle di memoria contingue, "divise" a blocchi di tre
    
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
            cout << d[i][j] << "; ";
        cout << endl;
    }
    cout << endl;
    
    /*******************************************************************/

    double (*pd)[3] = d; //puntatore ad array di tre double

    for(int i=0; i<2; i++)
    {
        double *ptd = pd[i];
        for(int j=0; j<3; j++)
            cout << ptd[j] << "; ";
        cout << endl; 
    }

    /*******************************************************************/
    cout << endl;
}

void test_reference()
{
    cout << "test reference :)" << endl << endl;

    /*******************************************************************/

    double d = 999;
    double &ref = d;

    cout << &d << endl << &ref << endl;

    /*******************************************************************/
    cout << endl;
}

void test_struct()
{
    cout << "test struct :)" << endl << endl;

    /*******************************************************************/

    struct st {
        int i;
        double d;
        char c;
    };

    st s1 = { 1, 3.14, 'c' };

    cout << s1.i << " " << s1.d << " " << s1.c << endl;
    cout << endl;

    /*******************************************************************/

    cout << sizeof(st) << endl;
    cout << sizeof(int) + sizeof(double) + sizeof(char) << endl;
    cout << endl;

    /*******************************************************************/

    st *sp = &s1;
    sp->i = 2;

    /*******************************************************************/
    cout << endl;
}

void test_const()
{
    cout << "test const :)" << endl << endl;

    /*******************************************************************/

    const int i = 10;

    const int *ptr1 = &i;

    int *ptr2 = const_cast<int*>(&i);  //const_cast<int*>(ptr1)
    
    *ptr2 = 1;
    cout << ptr2 << endl << &i << endl;

    /*******************************************************************/
    cout << endl;
}