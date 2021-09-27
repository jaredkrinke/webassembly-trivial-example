#define WASM_EXPORT_AS(name) __attribute__((export_name(name)))
#define WASM_EXPORT(symbol) WASM_EXPORT_AS(#symbol) symbol

int WASM_EXPORT(add)(int a, int b) {
    return a + b;
}
