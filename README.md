# Testing node publication of reason libraries for js consumers

```console
# Build and bundle
$ cd bstest && yarn install && yarn build
$ rm -rf node_modules # We aren't depending on these.

# Install into node-only project 
$ cd ../test2 && yarn install
$ echo "ONE SHOULD PRINT HERE:" && node test.js
1
# ^^ should print, indicating dependency on bstest was fine without
# needing reason compiler in test2 toolchain
```



