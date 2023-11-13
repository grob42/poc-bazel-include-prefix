"""
Project Archives
"""

load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository", "git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

def project_archives():
    "Declare project archives"

    # load the eigen library
    http_archive(
        name = "org_tuxfamily_eigen",
        build_file = "@//bazel:eigen.BUILD",
        sha256 = "b4c198460eba6f28d34894e3a5710998818515104d6e74e5cc331ce31e46e626",
        strip_prefix = "eigen-3.4.0",
        urls = [
            "https://gitlab.com/libeigen/eigen/-/archive/3.4.0/eigen-3.4.0.tar.bz2"
        ],
    )
