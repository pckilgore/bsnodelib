open ReludeParse.Parser;
let f = anyDigit <* eof |> runParser("1");

Js.log(Belt.Result.getWithDefault(f, "ERR"));
