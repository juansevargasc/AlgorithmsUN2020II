//package Week3.JavaPrograms.Week3.src;

import java.util.Scanner;
import java.util.ArrayList;

public class maximum_prizes
{

    public static ArrayList<Integer> max_prices(int n)
    {
        ArrayList<Integer> a = new ArrayList<>();
        if(n == 1)
        {
            a.add(1);
            return a;
        }

        int prizes = n;
        for (int i = 1; i < n; i++) {
            if( prizes > (2 * i) )
            {
                prizes -= i;
                a.add(i);
            }else
            {
                a.add(prizes);
                break;
            }
        }
        return a;
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        long n = input.nextInt();

        ArrayList<Integer> results = max_prices(n);
        System.out.println(results.size());
        for (int i = 0; i < results.size(); i++) 
        {
            System.out.print(results.get(i) + " ");
        }
        
        input.close();
        //System.out.println("no lie! Dua lIPA");
    }
}
