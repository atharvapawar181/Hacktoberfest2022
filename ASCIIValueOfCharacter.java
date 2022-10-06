import java.util.Scanner;

public class ASCIIvalueOfCharacter {
    public static void main(String[] args) {
        //how to take character input
        System.out.print("Enter charcter to find ASCII value: ");
        Scanner sc = new Scanner(System.in);
        char ch=sc.next().charAt(0);
//        int ascii = (int) ch;
//        System.out.println("ASCII value of '"+ch+"' is = "+ascii);
        System.out.println("ASCII value of '"+ch+"' is = "+ (int) ch);
    }
}
