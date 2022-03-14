import java.util.*

fun main(args: Array<String>) {
    var fat = 1
    var n: Int? = 6
    
    n = readLine()?.toIntOrNull() ?: -1
    
    while( n!! > 1 && n != null ){
  		fat = fat * n
    	n = n - 1
    } 

    
    println(fat)
}
