function foo(x: int): int {
  return x + 1;
}

function bar(x: ?int): int {
  if (x === null) {
    return 0; // Handle null case
  } else {
    return foo(x);
  }
}

function main(): void {
  var x: int = 10;
  var y: int = bar(x);
  echo y; // This will print 11 as expected

  var z: int = bar(null); // This will print 0 because null is handled
  echo z; 
}
