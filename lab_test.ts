function eval_func(f: Function): Function {
  return f;
}

const add_one = eval_func((x: number) => x + 1);

console.log(add_one(1));
