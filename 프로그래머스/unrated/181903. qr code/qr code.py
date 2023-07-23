def solution(q, r, code):
    answer = ''
    for idx, each in enumerate(code):
        if idx % q == r:
            answer += each
    return answer