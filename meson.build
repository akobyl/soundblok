project('soundblok',
        ['c', 'cpp'],
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

stm_sdk_project = subproject('sdk')
stm_sdk = dependency('stm_sdk')

subdir('src')
subdir('test')

# Process source files
clangtidy_files = []
