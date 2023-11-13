cc_library(
    name = "liba",
    srcs = [
            "src/a.cpp",
            "src/internal.h"
    ],
    hdrs = [
            "include/a/nested/namespace.h",
            "include/a/nested/local.h",
    ],
    includes = ["include"],
    deps = [
        "@org_tuxfamily_eigen//:eigen",
    ],
    visibility = ["//visibility:public"],
    linkstatic = True,
    copts = [
      '-Werror',
    ],
)
