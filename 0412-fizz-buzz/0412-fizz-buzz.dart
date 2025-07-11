class Solution {
  List<String> fizzBuzz(int n) {
    List<String> myList=[];
    for(var i=0;i<n;i++){
        if((i+1)%3==0&&(i+1)%5==0){
          myList.add('FizzBuzz');
        }else if((i+1)%3==0){
          myList.add('Fizz');
        }else if((i+1)%5==0){
            myList.add("Buzz");
        }else{
            myList.add((i+1).toString());
        }
    }
    return myList;
  }
}