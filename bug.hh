function foo(x: int): int {
  return x + 1;
}

function bar(x: int): int {
  return foo(x);
}

function main(): void {
  var x: int = 10;
  var y: int = bar(x);
  echo y; // This will print 11 as expected

  var z: int = bar(null); // This will cause a runtime error because null is not an int 
                        // This is because the runtime checks if the input type matches and throws an error
                        // Hack doesn't implicitly convert null values to 0
}
