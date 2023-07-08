soundblok_sources = [
    'main.c',
]

soundblok = executable('soundblok_app',
                       soundblok_sources,
                       install : false,
                       )

# soundblok_hex = custom_target('soundblok.hex',
# 	input: soundblok,
# 	output: 'soundblok.hex',
# 	command: host_hex_conversion,
# 	build_by_default: true
# )

# soundblok_hex = custom_target('soundblok.bin',
# 	input: soundblok,
# 	output: 'soundblok.bin',
# 	command: host_bin_conversion,
# 	build_by_default: true
# )