fn main() {
	let mut s = String::new();
	std::io::stdin().read_line(&mut s).ok();
	let n = s.trim().parse::<i64>().unwrap();
	println!("{} {}", n+1, n+1);
}
