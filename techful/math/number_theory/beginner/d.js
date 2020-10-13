const input = require("fs").readFileSync("/dev/stdin", "utf8")
const [a, b] = input.split(" ").map(Number)

let ans = -1
for(let i=2; i<100000; i++){
	if(a%i == b%i){
		ans = i
		break;
	}
}
console.log(ans)
