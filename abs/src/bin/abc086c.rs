use proconio::input;

fn main() {

    input!{
        n: usize,
        txy: [[i64; 3]; n],
    }

    let mut answer = true;
    let mut x = 0;
    let mut y = 0;
    let mut t = 0;
    for i in &txy {
        let sub = (i[0] - t) - ((x - i[1]).abs() + (y - i[2]).abs());
        if sub >= 0 && sub % 2 == 0 {
            t = i[0];
            x = i[1];
            y = i[2];
        } else {
            answer = false;
            break;
        }
    }
    if answer {
        println!("Yes");
    } else {
        println!("No");
    }
}
