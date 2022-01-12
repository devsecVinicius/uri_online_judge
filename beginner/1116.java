import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
		int n;
		Scanner scanner = new Scanner(System.in);
		n = scanner.nextInt();
		
		double x, y;
		
		for(int i = 0 ; i < n ; i ++){
			x = scanner.nextDouble();
			y = scanner.nextDouble();
		
			if( y == 0){
				System.out.println("divisao impossivel");
				continue;
			}
			
			System.out.println(x/y);
		}
 
    }
 
}

