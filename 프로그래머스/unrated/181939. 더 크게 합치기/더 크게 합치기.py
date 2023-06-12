def solution(a, b):
    answer = 0
    case1 = int(str(a) + str(b))
    case2 = int(str(b) + str(a))
    if (case1 >= case2):
        answer = case1
    else:
        answer = case2
    return answer