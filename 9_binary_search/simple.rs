fn binary_search(arr: &[i32], target: i32) -> i32 {
    let mut start = 0;
    let mut end = arr.len();
    while start <= end {
        let mid = start + (end - start) / 2;
        if arr[mid] == target {
            return mid as i32;
        } else if arr[mid] < target {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    -1
}

fn main() {
    let array = vec![1, 5, 7, 8];
    let target = 8;
    let ans = binary_search(&array, target);
    println!("{}", ans);
    match array.binary_search(&target) {
        Err(_) => println!("Not found"),
        Ok(i) => println!("Found at {i}")
    }
}
