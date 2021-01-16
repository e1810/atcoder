use std::collections::LinkedList;


fn readi() -> Vec<i32> {
	let mut s = String::new();
	std::io::stdin().read_line(&mut s).unwrap();
	s.split_whitespace().map(|x| x.parse::<i32>().unwrap()).collect()
}

fn read() -> Iterator {
	std::io::stdin().by_ref().bytes()

fn main() {
	let mut ls = LinkedList<i32>::new();
	
	let mut q = readi()[0];
	while q>0 {
		let query = readi();
		match query[0] {
			0 => {
				
			},
			1 => {
			},
			2 => {
			},
			_ => ()
		}
		q -= 1;
	}
}


