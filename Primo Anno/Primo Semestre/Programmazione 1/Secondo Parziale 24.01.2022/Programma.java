//MATRICOLA 879276 GINI STEFANO

public class Programma
{
    public static void main(String[] args)
    {
        //controllo che l'utente abbia inserito 3 stringhe
        if(args.length != 3)
        {
            System.out.println("Devi inserire 3 stringhe!");
            System.exit(0);
        }

        //copio le stringhe conteute in args nella variabili indicate
        String stringaA=args[0], stringaB=args[1], stringaC=args[2];

        //controllo che tutte le stringhe abbiano la stessa lunghezza
        if( stringaA.length() != stringaB.length() || 
            stringaA.length() != stringaC.length() || 
            stringaC.length() != stringaB.length())
        {
            System.out.println("Devi inserire 3 stringhe di lunghezza uguale!");
            System.exit(0);
        }

        //richiamo la funzione costruisci array e assegno il ritorno alla variabile indicata
        char [][] arrayABC = Metodi.costruisciArray(stringaA, stringaB, stringaC);

        //richiamo il metodo trasforma senza bisogno di ritorno in quanto lavora sull'indirizzo di arrayABC
        Metodi.trasforma(arrayABC);

        //stampo la matrice e contemporaneamente conto il numero di lettere maiuscole, evitando di ripetere la doppia iterazone per le due operazioni
        int nM = 0;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<arrayABC[i].length;j++)
            {
                System.out.print(arrayABC[i][j]);
                //se la lettera è compresa tra i valori ascii di A e Z è maiuscola
                if (arrayABC[i][j] >= 'A' && arrayABC[i][j]< 'Z')   //è necessario stabilire la Z come upper bound perchè anche il carattere ? è > di A
                    nM++;
            }
            System.out.println();
        }

        //stampo il ritorno del metodo ricorsivo
        System.out.println("\nMaiuscole: "+nM+"; funcRic: "+Metodi.funcRic(nM));
    }
}

class Metodi
{
    public static char[][] costruisciArray(String str1, String str2, String str3)
    {
        int k = str1.length();
        char [][] Mtr = new char [3][k];
        String [] strs = {str1, str2, str3};    //inserisco le tre stringhe in un array, per rendere il procedimento più semplice e pulito

        for(int i=0;i<3;i++)
            for(int j=0;j<k;j++)
                if(i<2) //scorro la matrice, e copio nelle celle delle prime due righe i caratteri delle prime due stringhe
                    Mtr[i][j]= strs[i].charAt(j);
                else    //alla terza riga (i=2), copio i caratteri della terza stringa invertiti.
                    Mtr[i][j]= strs[i].charAt(k-j-1);

        return Mtr;
    }

    public static void trasforma(char [][] par)
    {
        for(int i=0;i<3;i++)
            for(int j=0;j<par[i].length;j++)    //sostituisco tutte le consonanti (sia maiuscole che minuscole) con ?
                if( par[i][j] != 'a' && par[i][j] != 'A' && 
                    par[i][j] != 'e' && par[i][j] != 'E' && 
                    par[i][j] != 'i' && par[i][j] != 'I' && 
                    par[i][j] != 'o' && par[i][j] != 'O' && 
                    par[i][j] != 'u' && par[i][j] != 'U')
                        par[i][j] = '?';
    }

    public static int funcRic(int n)
    {
        //trascrizione con if-else della funzione ricorsiva indicata
        if(n==0)        
            return 1;
        else if (n>0)
            return 2*funcRic(n-1)+3;
        else
            return -3;

        /*
        il contenuto di questo metodo poteva essere scritto nella seguente forma, sfruttando l'operatore ternario:
             
            return (n==0) ? 1 : (n>0) ? 2*funcRic(n-1)+3 : -3;

        ma per una questione di leggibilità del codice ho preferito esplicitare l'if-else.
        */
    }
}