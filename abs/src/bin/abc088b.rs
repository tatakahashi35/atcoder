use proconio::input;
use std::cmp::Reverse;

fn main() {

    input!{
        n: usize,
        a: [i64; n],
    }

    let mut aa = a;
    aa.sort_by_key(|&x| Reverse(x));
    let mut answer = 0;
    for i in 0..aa.len() {
        if i % 2 == 0 {
            answer += aa[i]
        } else {
            answer -= aa[i]
        }
    }
    println!("{}", answer);
}
