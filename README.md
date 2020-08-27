# Testing node publication of reason libraries for js consumers

```console
$ cd bstest && yarn install && yarn build && yarn link
$ cd ../test2 && yarn install && yarn link bstest && node test.js
### Bunch of output.
1 <-- should print, indicating dependency on bstest was fine without needing
reason compiler in test2 toolchain
```



