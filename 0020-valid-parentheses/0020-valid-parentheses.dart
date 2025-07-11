class Solution {

bool isValid(String s) {
  List<String> stack = [];
  Map<String, String> matching = {
    ')': '(',
    '}': '{',
    ']': '[',
  };

  for (var ch in s.split('')) {
    if (ch == '(' || ch == '[' || ch == '{') {
      stack.add(ch);
    } else {
      if (stack.isEmpty || stack.removeLast() != matching[ch]) {
        return false;
      }
    }
  }
  return stack.isEmpty;
}
  
}