function solution(n) {
    var a ='';
    var i;
    for(i=0; i<n; i++){
        if(i % 2 == 0){
            a = a + '수';
        } else {
            a = a + '박';
        }
    }
    var answer = a;
    return answer;
}