def solution(num_list):
    answer = 0
    
    mult = 1
    sum = 0
    for each_num in num_list:
        mult *= each_num
        sum += each_num
    sum_squre = sum ** 2
    if (mult < sum_squre):
        answer = 1
    return answer