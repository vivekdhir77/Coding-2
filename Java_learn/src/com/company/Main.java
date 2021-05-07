package com.company;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Random;
public class Main {
    static int bull_(String bull_no, String inp)
    {
        int ans=0;
        String b = bull_no;
        String in = inp;
        if (b.charAt(0)==in.charAt(0))
            ans++;
        if (b.charAt(1)==in.charAt(1))
            ans++;
        if (b.charAt(2)==in.charAt(2))
            ans++;
        return ans;
    }
    static int cow_(String bull_no, String inp)
    {
        int ans=0;
        String b = bull_no.toString();
        String in = inp.toString();
        int bNo[], iNo[];
        bNo = new int[256];
        iNo = new int[256];
        for (int i=0;i<3;i++)
        {
            bNo[b.charAt(i)]++;
            iNo[in.charAt(i)]++;
        }
        for (int i = 0; i < 256; i++) {
            // If freq1[i] and freq2[i] both exceeds 0
            if (bNo[i] > 0 & iNo[i] > 0) {
                ans+= Math.min(bNo[i],iNo[i]);
            }
        }
        ans = ans - bull_(bull_no,inp);
        return ans;
    }
    static boolean checker(String s)
    {
        try {
            int d = Integer.parseInt(s);
        } catch (NumberFormatException nfe) {
            return false;
        }
        if (s.length()!=3)
            return true;
        else
            return false;
    }
    static void choice1()throws Exception
    {
        InputStreamReader ir= new InputStreamReader(System.in);
        BufferedReader br= new BufferedReader(ir);
        Random rand = new Random();
        int  r= rand.nextInt(1000);
        String bull_no = String.valueOf(r);
        int len= bull_no.length();
        if (len<3) {
            if (len == 2)
                bull_no = "0" + bull_no;
            else
                bull_no = "00" + bull_no;
        }
        int i = 1;
        int check = 1;
        while (check == 1) {
            if (i == 1)
                System.out.println("Enter your " + i + "st guess");
//                else if (i == 2)
//                    System.out.println("Enter your " + i + "nd guess");
//                else if (i == 3)
//                    System.out.println("enter your " + i + "rd guess");
//                else
//                    System.out.println("Enter your " + i + "th guess");
            String inp =br.readLine();
            if (checker(inp))
            {
                System.out.println("INVALID INPUT");
                continue;
            }
            //System.out.println(bull_no);
            int bull = bull_(bull_no,inp);
            int cow = cow_(bull_no,inp);
            if (bull==3) {
                System.out.println("Your took "+i+" guesses to find the bull's weight");
                System.out.println("Congratulations");
                break;
            }
            else if (cow==0 && bull==0)
                System.out.println("SHIT !!");
            else
                System.out.println("BULL = "+ bull+"    COW = "+cow);
            i++;
        }
    }

    static void choice2()throws Exception
    {
        InputStreamReader ir= new InputStreamReader(System.in);
        BufferedReader br= new BufferedReader(ir);
        System.out.println("Player 1: Enter your number");
        String player1 = br.readLine();
        System.out.println("Player 2: Enter your number");
        String player2 = br.readLine();
        while(true)
        {
            System.out.println("P1: Guess Player 2's number");
            String g1 = br.readLine();
            if (checker(g1))
                System.out.println("INVALID INPUT");
            else {
                int bull1 = bull_(player2, g1);
                int cow1 = cow_(player2, g1);
                if (bull1==3) {
                    System.out.println("Player 1 wins");
                    break;
                } else
                    System.out.println("BULL = " + bull1 + "   COW = " + cow1);
            }
            System.out.println("P2: Guess Player 1's number");
            String g2 = br.readLine();
            if (checker(g2))
                System.out.println("INVALID INPUT");
            else {
                int bull2 = bull_(player1, g2);
                int cow2 = cow_(player1, g2);
                if (bull2==3) {
                    System.out.println("Player 2 wins");
                    break;
                } else
                    System.out.println("BULL = " + bull2 + "   COW = " + cow2);
            }
        }
    }

    public static void main(String[] args)throws Exception {
        InputStreamReader ir= new InputStreamReader(System.in);
        BufferedReader br= new BufferedReader(ir);
        System.out.println("1: Player VS Computer ");
        System.out.println("2: Player VS Player ");
        int choice= Integer.parseInt(br.readLine());
        if (choice ==1)
            choice1();
        else if (choice ==2)
           choice2();
    }
}