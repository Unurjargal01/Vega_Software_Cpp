#include <benchmark/benchmark.h>
#include "my_add.h"

static void BM_Sum(benchmark::State& state) {
    for (auto _ : state) {
        int n = state.range(0);
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
    }
}

BENCHMARK(BM_Sum)->Range(8, 8<<10);

BENCHMARK_MAIN();