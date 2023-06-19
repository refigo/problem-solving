def solution(arr, queries):
    swapped_arr = arr
    for query in queries:
        tmp = swapped_arr[query[0]]
        swapped_arr[query[0]] = swapped_arr[query[1]]
        swapped_arr[query[1]] = tmp
    return swapped_arr