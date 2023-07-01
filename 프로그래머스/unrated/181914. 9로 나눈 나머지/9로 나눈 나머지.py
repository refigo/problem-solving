def solution(number):
    answer = 0
    for each in number:
        answer += int(each)
    answer -= 9 * (answer // 9)
    return answer