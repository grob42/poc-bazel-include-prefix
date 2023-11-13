"""
Project Workspace
"""

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("//bazel:project_archives.bzl", "project_archives")
load("//bazel:project_deps.bzl", "project_deps")

project_archives()
project_deps()

http_archive(
    name = "hedron_compile_commands",
    url = "https://github.com/hedronvision/bazel-compile-commands-extractor/archive/ac6411f8f347e5525038cb7858db4969db9e74f2.tar.gz",
    strip_prefix = "bazel-compile-commands-extractor-ac6411f8f347e5525038cb7858db4969db9e74f2",
    sha256 = "f03ed383f1093b5960b37648c4fc5ae2b3d98050509bc2e11719afc8b1fd3b3a"
)
load("@hedron_compile_commands//:workspace_setup.bzl", "hedron_compile_commands_setup")

hedron_compile_commands_setup()
