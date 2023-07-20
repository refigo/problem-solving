def solution(my_string):
    answer = []
    size_of_string = len(my_string)
    for each in range(0, size_of_string):
        answer.append(my_string[each:size_of_string])
    answer.sort()
    return answer