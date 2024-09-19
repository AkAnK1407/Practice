import java.io.*;
import java.util.*;

class GFG {
	public static void main (String[] args) {
		
	
		Scanner sc = new Scanner(System.in);

		int t=sc.nextInt();
		while(t-->0)
		{
		   
		    int n =sc.nextInt();
		  
		    Geeks obj=new Geeks();
		
		    obj.printTable(n);
		}
	
		
	}
}


class Geeks {
	 static void printTable (int n) 
	 {
            int multiplier=10;
            while(multiplier>0)
            {
                //Your code here
                 System.out.print(n*multiplier);
                 System.out.print(" ");
                multiplier--;
            }
     System.out.println();
	 }

}