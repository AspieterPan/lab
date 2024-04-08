fn majority_element(nums: Vec<i32>) -> i32 {
    let mut candidate = -1;
    let mut count = 0;
    for num in nums {
        if count == 0 {
            candidate = num;
        }
        if num == candidate {
            count += 1;
        } else {
            count -= 1;
        }
    }
    count = 0;
    for num in nums {
        if candidate == num {
            count += 1;
        }
    }
    if count > (nums.len() / 2) {
        candidate
    } else {
        -1
    }
}

fn main() {
    let nums = vec![1, 2, 3, 4, 5, 6];
    println!("{}", majority_element(nums));
}
