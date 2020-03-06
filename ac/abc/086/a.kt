fun main(args:Array<String>){
	val (a, b) = readLine()!!.split(" ").map{it.toInt()}
	if(a*b%2==1) println("Odd")
	else println("Even")
}
