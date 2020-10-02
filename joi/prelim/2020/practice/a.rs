use proconio::{input, fastout};

#[fastout]
fn main(){
    input!{(a, b): (i32, i32)};
    print!("{}\n{}\n", a+b, a-b);
}
