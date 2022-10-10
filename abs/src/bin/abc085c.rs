use proconio::input;

fn main() {

    input!{
        n: i64,
        y: i64,
    }

    solver(n, y);
}

fn solver(n: i64, y: i64) {
    for i in 0..(2000+1) {
        for j in 0..(2000+1) {
            if i + j <= n && 10000 * i + 5000 * j + 1000 * (n - i - j) == y {
                println!("{} {} {}", i, j, n - i - j);
                return
            }
        }
    }
    println!("-1 -1 -1");
}
