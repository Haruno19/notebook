public class Lab2{
    public static void main(String args[]){
        int[] a = {0, 4, 6, 3, 2, 1};
        rev(a, 0, 5);
        for(int i = 0; i<a.length; i++){
            System.out.print(a[i]);
        }
    }

    //Maximum in a sequence
    public static int maximum(int[] a, int l, int r){
        int m1, m2;
        if(l==r)
            return a[l];
        else{
            m1 = maximum(a, l, r-((r-l)/2+1));
            m2 = maximum(a, r-((r-l)/2+1)+1, r);
            return (m1 > m2) ? m1 : m2;
        }
    }

    //Average of a sequence
    public static int average(int[] a, int l, int r){
        int m1, m2;
        if(l==r)
            return a[l];
        else{
            m1 = average(a, l, r-((r-l)/2+1));
            m2 = average(a, r-((r-l)/2+1)+1, r);
            return (m1 + m2) / 2;
        }
    }

    //Palindromes
    public static boolean isPalindrome(int[] x, int l, int r){
        if(r<=l) return true;
        return (x[r] == x[l] && isPalindrome(x, l+1, r-1));
    }

    //Reverse of an array
    public static int[] rev(int[] a, int i, int n){
        int buff;
        if(n==-1)
            return a;
        else{
            buff = a[i];
            for (int j=i+1; j<=n; j++)
                a[j-1] = a[j];
            a[n] = buff;
            return a;
        }
    }

    //Merge sort
    void MergeSort(int[] a, int i, int f){
        int m;
        if (i < f){
            m = (i+f)/2 + 1;
            MergeSort(a, i, m);
            MergeSort(a, m+1, f);
            Merge(a, i, m, f);
        }
    }

    void Merge(int[] a, int p1, int med, int p2){
        int i1, i2, ib, b[] = new int[a.length];
        i1 = p1;
        i2 = med+1;
        ib = p1;

        
    }
}