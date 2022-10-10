use proconio::input;

fn main() {

    input!{
        n: i32,
        a: i32,
        b: i32,
    }
    let mut answer = 0;
    for i in 1..(n+1) {
        let mut k = i;
        let mut sum = 0;
        while k > 0 {
            sum += k % 10;
            k /= 10;
        }
        if a <= sum && sum <= b {
            answer += i;
        }
    }
    println!("{}", answer);
}
