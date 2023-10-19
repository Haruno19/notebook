#include <iostream>

using namespace std;

/*
    @param s1 stringa in cui cercare
    @return prima occorrenza di st in s1
*/
char* f6(char* s1, char* st)
{
    char* pt = st;
    char* ps = s1;
    char* pr;

    while(*ps!='\0' && *pt!='\0')
    {
        if(*ps == *pt)
        {
            if(pr == nullptr) pr = ps;
            pt++;
        }else{
            pr = nullptr;
            pt = st;
        }
        ps++;
    }

    return pr;
}

char* f7(char* s1, char* st, char* sr)
{
    char* bp=s1, *srb;
    while(*bp != '\0')
    {
        bp = f6(bp, st);
        if(bp == nullptr) return s1;
        srb = sr;
        while(*srb != '\0')
        {
            *bp = *srb;
            bp++;
            srb++;
        }
    }

    return s1;
}

int main(int argc, char* args[])
{
    cout << f6(args[1], args[2]) << endl;
    cout << f7(args[1], args[2], args[3]) << endl;

    return 0;
}