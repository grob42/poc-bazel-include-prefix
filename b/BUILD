cc_library(
    name = "libb",
    srcs = [
            "src/b.cpp",
    ],
    hdrs = [
            "include/b/nested/namespace.h",
    ],
    includes = ["include"],
    deps = [
        "//a:liba",
    ],
    visibility = ["//visibility:public"],
    linkstatic = True,
    copts = [
      "-Werror",
    ],
)
