def solution(intStrs, k, s, l):
    answer = []
    for intStr in intStrs:
        candi = int(intStr[s:s+l])
        if candi > k:
            answer.append(candi)
    return answer