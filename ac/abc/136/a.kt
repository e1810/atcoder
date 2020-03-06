fun main(args:Array<String>){
	var (a, b, c) = readLine()!!.split(" ").map{it.toInt()}
	if(c-a+b>0) println(c-a+b)
	else println(0)
}
