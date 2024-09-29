#include <benchmark/benchmark.h>
#include "my_add.h"

void Sum(int n) {
    int sum_ = 0;
    for (int i = 1; i <= n; ++i) {
        sum_ += i;
    }
}

BENCHMARK(BM_Sum)

BENCHMARK_MAIN();