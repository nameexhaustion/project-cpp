# project-cpp

C++ project format with Bazel and GoogleTest

```
bazelisk build -c dbg --copt="-g" --strip=never //main:main
bazelisk build --config debug //main:main
bazelisk test --test_output=all //test:test
```
