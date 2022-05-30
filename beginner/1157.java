import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Main {
 
    public static void main(String[] args){

        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int contador = n;
        int resultado_da_divisao;

        ArrayList<Integer> lista_de_divisores = new ArrayList<Integer>();

        while( contador > 0 ){
            resultado_da_divisao = n % contador;
            if( resultado_da_divisao == 0 ){
                lista_de_divisores.add(contador);
            }
            contador--;
        }

        Collections.reverse(lista_de_divisores);

        for (Integer l : lista_de_divisores) {
            System.out.println(l);
        }
    }
 
}