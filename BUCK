# Utility function for merging dictionaries.
# The second dictionary overrides the first in the
# case of a name collision.
def merge_dicts(x, y):
  z = x.copy()
  z.update(y)
  return z

# The headers exported by mathutils
mathutils_headers = subdir_glob([
  ('mathutils/include', '**/*.hpp'),
])

# String of the generated single header
single_header = '\n'.join([
    '#ifndef MATHUTILS_HPP',
    '#define MATHUTILS_HPP',
    '',
  ] + [
    '#include <mathutils/' + i + '> ' for i, _ in mathutils_headers.items()
  ] + [
    '',
    '#endif',
    '',
  ])

# Build target for the generated header
genrule(
  name = 'single-header',
  out = 'mathutils.hpp',
  cmd = 'echo "' + single_header + '" > $OUT',
)

cxx_library(
  name = 'mathutils',
  header_namespace = 'mathutils',
  exported_headers = merge_dicts(subdir_glob([
    ('mathutils/include', '**/*.hpp'),
  ]), {
    'mathutils.hpp': ':single-header', # mathutils.hpp is the output of the single-header rule
  }),
  srcs = glob([
    'mathutils/src/**/*.cpp',
  ]),
  licenses = [
    'LICENSE',
  ],
  visibility = [
    'PUBLIC',
  ],
)

cxx_binary(
  name = 'demo',
  srcs = [
    'demo.cpp',
  ],
  deps = [
    ':mathutils',
  ],
)
