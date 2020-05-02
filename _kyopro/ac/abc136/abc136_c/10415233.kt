
fun main(args:Array<String>){
        var n = readLine()!!.toInt()
        var h = readLine()!!.split(" ").map{it.toInt()}

        var mx = 0
        var cant = false
        for(i in 0..n-1){
                if(mx-1>h[i]) cant = true
                if(h[i]>mx) mx = h[i]
        }

        if(cant) println("No")
        else println("Yes")
}
