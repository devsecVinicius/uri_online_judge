public class Main {
 
    public static void main(String[] args){
        double auxiliar = 1;
        double s = 0;


        while( auxiliar < 100 ){
            s += 1 / auxiliar;
            auxiliar++;
        }
        System.out.printf("%.2f%n", (s + 0.01) );
    }
 
}