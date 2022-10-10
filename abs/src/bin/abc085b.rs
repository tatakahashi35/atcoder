use proconio::input;
use std::collections::HashSet;

fn main() {

    input!{
        n: usize,
        d: [i64; n],
    }

    let mut dd = HashSet::new();
    for i in &d {
        dd.insert(i);
    }
    println!("{}", dd.len());
}
