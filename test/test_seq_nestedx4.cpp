#include "./test_lib/test_group.hpp"
#include "./test_lib/test_group.def.hpp"

namespace c4 {
namespace yml {


CASE_GROUP(NESTED_SEQX4)
{

ADD_CASE_TO_GROUP("nested seq x4, explicit",
R"([
[[[0000, 0001, 0002], [0010, 0011, 0012], [0020, 0021, 0022]],
 [[0100, 0101, 0102], [0110, 0111, 0112], [0120, 0121, 0122]],
 [[0200, 0201, 0202], [0210, 0211, 0212], [0220, 0221, 0222]]],

[[[1000, 1001, 1002], [1010, 1011, 1012], [1020, 1021, 1022]],
 [[1100, 1101, 1102], [1110, 1111, 1112], [1120, 1121, 1122]],
 [[1200, 1201, 1202], [1210, 1211, 1212], [1220, 1221, 1222]]],

[[[2000, 2001, 2002], [2010, 2011, 2012], [2020, 2021, 2022]],
 [[2100, 2101, 2102], [2110, 2111, 2112], [2120, 2121, 2122]],
 [[2200, 2201, 2202], [2210, 2211, 2212], [2220, 2221, 2222]]],
])",
N(SFS, L{
      N{SFS, L{N{SFS, L{N{SFS, L{N(VP, "0000"), N(VP, "0001"), N(VP, "0002")}}, N{SFS, L{N(VP, "0010"), N(VP, "0011"), N(VP, "0012")}}, N{SFS, L{N(VP, "0020"), N(VP, "0021"), N(VP, "0022")}}}}, N{SFS, L{N{SFS, L{N(VP, "0100"), N(VP, "0101"), N(VP, "0102")}}, N{SFS, L{N(VP, "0110"), N(VP, "0111"), N(VP, "0112")}}, N{SFS, L{N(VP, "0120"), N(VP, "0121"), N(VP, "0122")}}}}, N{SFS, L{N{SFS, L{N(VP, "0200"), N(VP, "0201"), N(VP, "0202")}}, N{SFS, L{N(VP, "0210"), N(VP, "0211"), N(VP, "0212")}}, N{SFS, L{N(VP, "0220"), N(VP, "0221"), N(VP, "0222")}}}}}},
      N{SFS, L{N{SFS, L{N{SFS, L{N(VP, "1000"), N(VP, "1001"), N(VP, "1002")}}, N{SFS, L{N(VP, "1010"), N(VP, "1011"), N(VP, "1012")}}, N{SFS, L{N(VP, "1020"), N(VP, "1021"), N(VP, "1022")}}}}, N{SFS, L{N{SFS, L{N(VP, "1100"), N(VP, "1101"), N(VP, "1102")}}, N{SFS, L{N(VP, "1110"), N(VP, "1111"), N(VP, "1112")}}, N{SFS, L{N(VP, "1120"), N(VP, "1121"), N(VP, "1122")}}}}, N{SFS, L{N{SFS, L{N(VP, "1200"), N(VP, "1201"), N(VP, "1202")}}, N{SFS, L{N(VP, "1210"), N(VP, "1211"), N(VP, "1212")}}, N{SFS, L{N(VP, "1220"), N(VP, "1221"), N(VP, "1222")}}}}}},
      N{SFS, L{N{SFS, L{N{SFS, L{N(VP, "2000"), N(VP, "2001"), N(VP, "2002")}}, N{SFS, L{N(VP, "2010"), N(VP, "2011"), N(VP, "2012")}}, N{SFS, L{N(VP, "2020"), N(VP, "2021"), N(VP, "2022")}}}}, N{SFS, L{N{SFS, L{N(VP, "2100"), N(VP, "2101"), N(VP, "2102")}}, N{SFS, L{N(VP, "2110"), N(VP, "2111"), N(VP, "2112")}}, N{SFS, L{N(VP, "2120"), N(VP, "2121"), N(VP, "2122")}}}}, N{SFS, L{N{SFS, L{N(VP, "2200"), N(VP, "2201"), N(VP, "2202")}}, N{SFS, L{N(VP, "2210"), N(VP, "2211"), N(VP, "2212")}}, N{SFS, L{N(VP, "2220"), N(VP, "2221"), N(VP, "2222")}}}}}},
          })
);

ADD_CASE_TO_GROUP("nested seq x4",
R"(
- - - - 0000
      - 0001
      - 0002
    - - 0010
      - 0011
      - 0012
    - - 0020
      - 0021
      - 0022
  - - - 0100
      - 0101
      - 0102
    - - 0110
      - 0111
      - 0112
    - - 0120
      - 0121
      - 0122
  - - - 0200
      - 0201
      - 0202
    - - 0210
      - 0211
      - 0212
    - - 0220
      - 0221
      - 0222
- - - - 1000
      - 1001
      - 1002
    - - 1010
      - 1011
      - 1012
    - - 1020
      - 1021
      - 1022
  - - - 1100
      - 1101
      - 1102
    - - 1110
      - 1111
      - 1112
    - - 1120
      - 1121
      - 1122
  - - - 1200
      - 1201
      - 1202
    - - 1210
      - 1211
      - 1212
    - - 1220
      - 1221
      - 1222
- - - - 2000
      - 2001
      - 2002
    - - 2010
      - 2011
      - 2012
    - - 2020
      - 2021
      - 2022
  - - - 2100
      - 2101
      - 2102
    - - 2110
      - 2111
      - 2112
    - - 2120
      - 2121
      - 2122
  - - - 2200
      - 2201
      - 2202
    - - 2210
      - 2211
      - 2212
    - - 2220
      - 2221
      - 2222
)",
N(SB, L{
      N{SB, L{N{SB, L{N{SB, L{N(VP, "0000"), N(VP, "0001"), N(VP, "0002")}}, N{SB, L{N(VP, "0010"), N(VP, "0011"), N(VP, "0012")}}, N{SB, L{N(VP, "0020"), N(VP, "0021"), N(VP, "0022")}}}}, N{SB, L{N{SB, L{N(VP, "0100"), N(VP, "0101"), N(VP, "0102")}}, N{SB, L{N(VP, "0110"), N(VP, "0111"), N(VP, "0112")}}, N{SB, L{N(VP, "0120"), N(VP, "0121"), N(VP, "0122")}}}}, N{SB, L{N{SB, L{N(VP, "0200"), N(VP, "0201"), N(VP, "0202")}}, N{SB, L{N(VP, "0210"), N(VP, "0211"), N(VP, "0212")}}, N{SB, L{N(VP, "0220"), N(VP, "0221"), N(VP, "0222")}}}}}},
      N{SB, L{N{SB, L{N{SB, L{N(VP, "1000"), N(VP, "1001"), N(VP, "1002")}}, N{SB, L{N(VP, "1010"), N(VP, "1011"), N(VP, "1012")}}, N{SB, L{N(VP, "1020"), N(VP, "1021"), N(VP, "1022")}}}}, N{SB, L{N{SB, L{N(VP, "1100"), N(VP, "1101"), N(VP, "1102")}}, N{SB, L{N(VP, "1110"), N(VP, "1111"), N(VP, "1112")}}, N{SB, L{N(VP, "1120"), N(VP, "1121"), N(VP, "1122")}}}}, N{SB, L{N{SB, L{N(VP, "1200"), N(VP, "1201"), N(VP, "1202")}}, N{SB, L{N(VP, "1210"), N(VP, "1211"), N(VP, "1212")}}, N{SB, L{N(VP, "1220"), N(VP, "1221"), N(VP, "1222")}}}}}},
      N{SB, L{N{SB, L{N{SB, L{N(VP, "2000"), N(VP, "2001"), N(VP, "2002")}}, N{SB, L{N(VP, "2010"), N(VP, "2011"), N(VP, "2012")}}, N{SB, L{N(VP, "2020"), N(VP, "2021"), N(VP, "2022")}}}}, N{SB, L{N{SB, L{N(VP, "2100"), N(VP, "2101"), N(VP, "2102")}}, N{SB, L{N(VP, "2110"), N(VP, "2111"), N(VP, "2112")}}, N{SB, L{N(VP, "2120"), N(VP, "2121"), N(VP, "2122")}}}}, N{SB, L{N{SB, L{N(VP, "2200"), N(VP, "2201"), N(VP, "2202")}}, N{SB, L{N(VP, "2210"), N(VP, "2211"), N(VP, "2212")}}, N{SB, L{N(VP, "2220"), N(VP, "2221"), N(VP, "2222")}}}}}},
          })
);
}

} // namespace yml
} // namespace c4
