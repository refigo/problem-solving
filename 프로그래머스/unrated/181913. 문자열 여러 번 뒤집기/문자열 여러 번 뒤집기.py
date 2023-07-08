def solution(my_string, queries):
    answer = list(my_string)
    for s, e in queries:
        for i in range((e-s)//2 + 1):
            tmp = answer[s+i]
            answer[s+i] = answer[e-i]
            answer[e-i] = tmp
    return ''.join([ch for ch in answer])