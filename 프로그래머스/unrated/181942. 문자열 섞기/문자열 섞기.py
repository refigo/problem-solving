def solution(str1, str2):
    answer = ''
    len_str = len(str1)
    idx = 0
    while len_str > 0:
        answer += str1[idx] + str2[idx]
        idx += 1
        len_str -= 1
    return answer