fn read() -> i64 {
	let mut word = String::new();
	std::io::stdin().read_line(&mut word).unwrap();
	word.trim().parse::<i64>().unwrap()
}

fn reads() -> Vec<i64> {
	let mut word = String::new();
	std::io::stdin().read_line(&mut word).unwrap();
	word.trim().split_whitespace().map(|x| x.parse::<i64>().unwrap()).collect()
}

struct Cell {
	let index, richness: i64, i64;
	let neigh: [i64; 6];
};



fn main() {
	let numberOfCells = read();
	let cells = vec![i64; numberOfCells];
	for i in 0..numberOfCells {

	

}

