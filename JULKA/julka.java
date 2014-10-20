//javac 54.java && java Main < 54.in
import java.util.*;
import java.math.BigInteger;

class Main{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		for(int i=0;i<10;i++){
			BigInteger a = new BigInteger(in.nextLine());
			BigInteger b = new BigInteger(in.nextLine());
			BigInteger c = a.subtract(b).divide(new BigInteger("2"));
			System.out.println(a.subtract(c));
			System.out.println(c);
		}
	}
}
