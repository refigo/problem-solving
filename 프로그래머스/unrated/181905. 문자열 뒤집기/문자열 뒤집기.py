def solution(my_string, s, e):
    answer = list(my_string)
    answer[s:e+1] = (answer[e:s-1:-1] if s != 0 else answer[e::-1])
    return ''.join(answer)