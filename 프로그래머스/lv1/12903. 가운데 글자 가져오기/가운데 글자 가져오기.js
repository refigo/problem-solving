function solution(s) {
    var i = 0;
    var a = 0;
    if (s.length % 2 == 1) {
        i = (s.length - 1)/2;
        return s[i];
    } else {
        i = (s.length - 2)/2;
        a = (s.length - 2)/2;
        var b = '';
            for(i; i < a+2; i++) {
                b = b + s[i];
            }
        return b;
    }
}