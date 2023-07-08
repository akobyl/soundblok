project('soundblok',
        'c',
         default_options : [
         'warning_level=3',
         'werror=false',
         'debug=true',
         'c_std=c17',
         'build.c_std=c17'
         ],
         version: '0.1')

# inc = include_directories('include')
# subdir('libs')
wavemaker_project = subproject('wavemaker')
wavemaker = dependency('wavemaker')

subdir('src')
# subdir('include')
subdir('test')

# Process source files
clangtidy_files = []
