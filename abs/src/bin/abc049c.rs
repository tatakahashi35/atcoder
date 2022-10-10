use proconio::input;

fn main() {

    input!{
        s: String,
    }

    let mut answer = true;
    let l = s.len();
    let mut i = 0;
    while i < l {
        if s[i..].to_string().starts_with(&"dreameraser") {
            i += 11;
        } else if s[i..].to_string().starts_with(&"dreamerase") {
            i += 10;
        } else if s[i..].to_string().starts_with(&"dreamer") {
            i += 7;
        } else if s[i..].to_string().starts_with(&"dream") {
            i += 5;
        } else if s[i..].to_string().starts_with(&"eraser") {
            i += 6;
        } else if s[i..].to_string().starts_with(&"erase") {
            i += 5;
        } else {
            answer = false;
            break;
        }
    }
    if answer {
        println!("YES");
    } else {
        println!("NO");
    }
}
