def solution(list_nums):
    idx_last = len(list_nums) - 1
    if (list_nums[idx_last - 1] < list_nums[idx_last]):
        list_nums.append(list_nums[idx_last] - list_nums[idx_last - 1])
    else:
        list_nums.append(list_nums[idx_last] * 2)
    return list_nums