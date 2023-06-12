def solution(my_string, k):
    answer = ''
    while k > 0:
        answer += my_string
        k -= 1
    return answer