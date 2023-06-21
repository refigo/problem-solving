def is_having_only_zero_five(num):
    str_num = str(num)
    for each_char in str_num:
        if (each_char != '0' and each_char != '5'):
            return False
    return True
    
def solution(l, r):
    answer = []
    for num in range(l, r+1):
        if (num % 5 == 0) and (is_having_only_zero_five(num) == True):
            answer.append(num)
    if len(answer) == 0:
        answer.append(-1)
    return answer