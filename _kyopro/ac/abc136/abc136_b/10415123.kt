
fun main(args:Array<String>){
        var n = readLine()!!.toInt();
        var ans = 0
        for(i in 1..n){
                ans += i.toString().length%2
        }
        println(ans)
}
