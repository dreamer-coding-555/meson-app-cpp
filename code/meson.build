dir = include_directories('.')
code = files('app.cpp')


lib = static_library('code', code,
    dependencies: deps,
    include_directories: dir)

app_dep = declare_dependency(
    link_with: lib,
    dependencies: deps,
    include_directories: dir)

executable('app', 'main.cpp',
    dependencies: app_dep,
    include_directories: dir,
    install: true)
