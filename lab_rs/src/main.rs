struct Solution {}
impl Solution {
    pub fn find_target_sum_ways(nums: Vec<i32>, target: i32) -> i32 {
        let n = nums.len();
        let s: i32 = nums.iter().sum();

        let _nums: Vec<usize> = nums.iter().map(|&x| (x as usize) * 2).collect();

        let _target = target + s ;

        if _target < 0 {
            return 0;
        }
        if _target == 0 {
            return 1;
        }

        let _target = _target as usize;

        let mut dp : Vec<usize>= vec![0; _target+1];
        dp[0] = 1;
        for i in 0..n {
            let _num = _nums[i];
            for j in (_num..=_target).rev() {
                dp[j] = dp[j] + dp[j - _num]
            }
        }

        return dp[_target] as i32;
    }
}

fn main() {
    let s1 = vec![1,1,1,1,1];
    let s1_ans = Solution::find_target_sum_ways(s1, 3);
    println!("s1: {}", s1_ans);
    assert_eq!(s1_ans, 5);

    let s2 = vec![1];
    let s2_ans = Solution::find_target_sum_ways(s2, 1);
    println!("s2: {}", s2_ans);
    assert_eq!(s2_ans, 1);
}