# Breaking the build

A tiny C calculator (add, subtract, multiply, divide) used to demo CI gating a merge.

- `calc.c` / `calc.h`: the four operations
- `test_calc.c`: one test per operation, plus divide by zero
- `Makefile`: `make test` builds and runs the tests
- `.github/workflows/ci.yml`: runs `make test` on every pull request and push to `main`

Branch protection on `main` requires the `test` check to pass before a pull request can merge.
