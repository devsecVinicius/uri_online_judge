import java.util.*

fun main() {
	var fat: Int = 1
    var n: Int = 6
    
    n = readln().toInt()

	while( n > 1 ){
  		fat = fat * n
        n = n - 1
    }
    
    println(fat)
}
