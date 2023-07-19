gtest_project = subproject('gtest')

gtest = dependency('gtest_main', required : false)

if not gtest.found()
    error('MESON_SKIP_TEST: no gtest found')
endif

tests_src = [
    'soundblok_test.cpp',
]

if not meson.is_cross_build()
testexe = executable('testexe',
                     tests_src,
                     dependencies : [
                        gtest,
                     ],
                     )

test('soundblok test', testexe, protocol : 'gtest')
endif