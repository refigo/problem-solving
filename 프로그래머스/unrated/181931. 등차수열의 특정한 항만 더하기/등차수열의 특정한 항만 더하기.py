def solution(a, d, included):
    answer = 0
    i = 0
    for each_inc in included:
        if each_inc == True:
            answer += a + (d * i)
        i += 1
    return answer