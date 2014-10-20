import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;


public class Main{
	public static void main(String[] args) throws IOException{
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while((t--)!=0){
			int n = in.nextInt();
			BigInteger data = BigInteger.valueOf(1);
			for(int i=2;i<=n;i++){
				data=data.multiply(BigInteger.valueOf(i));
			}
			System.out.println(data);
		}
	}
}