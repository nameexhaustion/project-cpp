#!/usr/bin/bash
valgrind --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose \
         ./bazel-bin/main/main $@
