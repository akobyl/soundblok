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
wavemaker_project = subproject('wavemaker')
wavemaker = dependency('wavemaker')


# option('peripherals', type : 'array', choices : ['adc', 'bus', 'comp', 'cordic', 'cortex', 'crc', 'crs', 'dac', 'dma', 'dmamux', 'exti', 'fmac', 'fmc', 'gpio', 'hrtim', 'i2c', 'iwdg', 'lptim', 'lpuart', 'opamp', 'pwr', 'rcc', 'rng', 'rtc', 'spi', 'system', 'tim', 'ucpd', 'usart', 'usb', 'utils', 'wwdg'], value : [])

stm_sdk_options  = [
  'family=g4',
  'chip=stm32g491',
  'peripherals=[gpio, adc]'
  ]
stm_sdk_project = subproject('sdk')
stm_sdk = dependency('stm_sdk')

freertos_options = [
  'memmang=heap_2',
  'cpu_clock_hz=64000000',
  'tick_rate_hz=1000',

  ]

freertos_project = subproject('FreeRTOS',
                              default_options: freertos_options,
                              )
freertos = dependency('freertos')

subdir('src')
subdir('test')

# Process source files
clangtidy_files = []
