package cvsjava;

import java.util.Scanner;

/**
 * 
 * @author PurushottamKafle
LINEAR ALGORITHM
LINEAR ALGORITHM
LINEAR ALGORITHM
LINEAR ALGORITHM

 *
 */
public class main {
	static int search, c, n;
	static int[] array = new int[5];

	public static void main(String[] args) {
Scanner scn = new Scanner(System.in);
System.out.println("Enter the Integers you want in array\n");
		n = scn.nextInt();
		// adding numbers in n
		
		for(c =0; c<n; c++) {
			array[c] = scn.nextInt();
			
		}
		// finding to search
		
System.out.println("Enter Number to Search \n");
search = scn.nextInt();
// here we go
for(c=0; c<n; c++) {
	if(array[c]==search) {
		System.out.printf("%d found at location %d", search, c+1);
		break;
	}
}
    if(c==n) {
    	System.out.println("Not Found in array!");
    }

	}

}
