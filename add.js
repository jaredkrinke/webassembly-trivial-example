const fs = require('fs');
(async () => {
    const module = await WebAssembly.instantiate(await fs.promises.readFile("./add.wasm"));
    const add = module.instance.exports.add;
    console.log(add(2, 2));
})();
