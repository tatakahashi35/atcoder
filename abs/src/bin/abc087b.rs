use proconio::input;

fn main() {

    input!{
        a: i32,
        b: i32,
        c: i32,
        x: i32,
    }

    let mut answer = 0;
    for i in 0..(a+1) {
        for j in 0..(b+1) {
            if x - 500 * i >= 100 * j && (x - 500 * i - 100 * j) / 50 <= c {
                answer += 1;
            }
        }
    }
    println!("{}", answer);
}
