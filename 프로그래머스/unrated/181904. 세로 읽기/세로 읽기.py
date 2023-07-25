def solution(my_string, m, c):
    answer = ''
    for i, cr in enumerate(my_string):
        if (i + 1 - c) % m == 0:
            answer += cr
    return answer