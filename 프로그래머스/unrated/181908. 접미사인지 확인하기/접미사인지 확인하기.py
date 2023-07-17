def solution(my_string, is_suffix):
    return 1 if my_string[-1:-1-len(is_suffix):-1] == is_suffix[-1::-1] else 0