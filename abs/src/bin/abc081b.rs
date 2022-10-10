use proconio::input;

fn main() {

    input!{
        n: usize,
        a: [i64; n],
    }

    let mut check = true;
    let mut count = 0;
    let mut div: i64 = 2;
    loop {
        for v in &a {
            if v % div != 0 {
                check = false;
                break;
            }
        }
        if !check {
            break;
        }
        div *= 2;
        count += 1;
    }
    println!("{}", count);
}
