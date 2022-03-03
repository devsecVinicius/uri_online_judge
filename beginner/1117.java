import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
		
		Scanner scanner = new Scanner(System.in);
		float score1, score2, aux;
		int i;
		score1 = score2 = aux = 0;
		for( i = 0 ; i < 2 ; ){
			aux = scanner.nextFloat();
			if( aux > 10 || aux < 0 ){
				System.out.println("nota invalida");
			}
			else{
				score1 = score2;
				score2 = aux;
				++i;
			}
		}
		System.out.println("media = " + (score1+score2) / 2 );
    }
 
}