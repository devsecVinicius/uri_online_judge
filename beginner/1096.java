public class Main {

    public static void main(String[] args){
		int i = 1, j = 7;
		
		for( ; i <= 9 ; i+= 2){
			System.out.println("I="+i+" J="+j);
			System.out.println("I="+i+" J="+(j-1));
			System.out.println("I="+i+" J="+(j-2));
		}
    }
 
}

