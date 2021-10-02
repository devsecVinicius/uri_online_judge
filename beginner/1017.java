import java.util.Scanner;

class Main{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		
		int hours = in.nextInt();
		int average_speed = in.nextInt();
		
		double km = hours * average_speed;
		double liters = km / 12;
	
		System.out.println(String.format("%.3f", liters)); 
	}
}
