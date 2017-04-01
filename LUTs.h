#ifndef LUTs_H
#define LUTs_H

// TODO : make more of dem wavetables

// ########################## Sine look-up table ###############################
int16_t wavetable_sine[RES] = {  \
     0,    100,    201,    301,    402,    502,    603,    703,    803,    904,  \
  1004,   1104,   1205,   1305,   1405,   1505,   1605,   1705,   1805,   1905,  \
  2005,   2105,   2204,   2304,   2403,   2503,   2602,   2701,   2800,   2899,  \
  2998,   3097,   3196,   3294,   3393,   3491,   3589,   3687,   3785,   3883,  \
  3980,   4078,   4175,   4272,   4369,   4466,   4563,   4659,   4755,   4852,  \
  4947,   5043,   5139,   5234,   5329,   5424,   5519,   5614,   5708,   5802,  \
  5896,   5990,   6083,   6176,   6269,   6362,   6455,   6547,   6639,   6731,  \
  6822,   6913,   7004,   7095,   7186,   7276,   7366,   7455,   7545,   7634,  \
  7723,   7811,   7899,   7987,   8075,   8162,   8249,   8336,   8422,   8508,  \
  8594,   8680,   8765,   8850,   8934,   9018,   9102,   9185,   9268,   9351,  \
  9433,   9515,   9597,   9678,   9759,   9840,   9920,  10000,  10079,  10158,  \
 10237,  10315,  10393,  10471,  10548,  10625,  10701,  10777,  10852,  10927,  \
 11002,  11076,  11150,  11224,  11297,  11369,  11442,  11513,  11585,  11655,  \
 11726,  11796,  11865,  11934,  12003,  12071,  12139,  12206,  12273,  12340,  \
 12405,  12471,  12536,  12600,  12664,  12728,  12791,  12853,  12916,  12977,  \
 13038,  13099,  13159,  13219,  13278,  13336,  13395,  13452,  13509,  13566,  \
 13622,  13678,  13733,  13787,  13841,  13895,  13948,  14000,  14052,  14104,  \
 14155,  14205,  14255,  14304,  14353,  14401,  14449,  14496,  14542,  14588,  \
 14634,  14679,  14723,  14767,  14810,  14853,  14895,  14937,  14978,  15018,  \
 15058,  15097,  15136,  15174,  15212,  15249,  15285,  15321,  15357,  15391,  \
 15426,  15459,  15492,  15525,  15556,  15588,  15618,  15648,  15678,  15707,  \
 15735,  15763,  15790,  15816,  15842,  15868,  15892,  15916,  15940,  15963,  \
 15985,  16007,  16028,  16049,  16068,  16088,  16106,  16125,  16142,  16159,  \
 16175,  16191,  16206,  16220,  16234,  16247,  16260,  16272,  16283,  16294,  \
 16304,  16314,  16323,  16331,  16339,  16346,  16352,  16358,  16364,  16368,  \
 16372,  16376,  16378,  16380,  16382,  16383,  16383,  16383,  16382,  16380,  \
 16378,  16376,  16372,  16368,  16364,  16358,  16352,  16346,  16339,  16331,  \
 16323,  16314,  16304,  16294,  16283,  16272,  16260,  16247,  16234,  16220,  \
 16206,  16191,  16175,  16159,  16142,  16125,  16106,  16088,  16068,  16049,  \
 16028,  16007,  15985,  15963,  15940,  15916,  15892,  15868,  15842,  15816,  \
 15790,  15763,  15735,  15707,  15678,  15648,  15618,  15588,  15556,  15525,  \
 15492,  15459,  15426,  15391,  15357,  15321,  15285,  15249,  15212,  15174,  \
 15136,  15097,  15058,  15018,  14978,  14937,  14895,  14853,  14810,  14767,  \
 14723,  14679,  14634,  14588,  14542,  14496,  14449,  14401,  14353,  14304,  \
 14255,  14205,  14155,  14104,  14052,  14000,  13948,  13895,  13841,  13787,  \
 13733,  13678,  13622,  13566,  13509,  13452,  13395,  13336,  13278,  13219,  \
 13159,  13099,  13038,  12977,  12916,  12853,  12791,  12728,  12664,  12600,  \
 12536,  12471,  12405,  12340,  12273,  12206,  12139,  12071,  12003,  11934,  \
 11865,  11796,  11726,  11655,  11585,  11513,  11442,  11369,  11297,  11224,  \
 11150,  11076,  11002,  10927,  10852,  10777,  10701,  10625,  10548,  10471,  \
 10393,  10315,  10237,  10158,  10079,  10000,   9920,   9840,   9759,   9678,  \
  9597,   9515,   9433,   9351,   9268,   9185,   9102,   9018,   8934,   8850,  \
  8765,   8680,   8594,   8508,   8422,   8336,   8249,   8162,   8075,   7987,  \
  7899,   7811,   7723,   7634,   7545,   7455,   7366,   7276,   7186,   7095,  \
  7004,   6913,   6822,   6731,   6639,   6547,   6455,   6362,   6269,   6176,  \
  6083,   5990,   5896,   5802,   5708,   5614,   5519,   5424,   5329,   5234,  \
  5139,   5043,   4947,   4852,   4755,   4659,   4563,   4466,   4369,   4272,  \
  4175,   4078,   3980,   3883,   3785,   3687,   3589,   3491,   3393,   3294,  \
  3196,   3097,   2998,   2899,   2800,   2701,   2602,   2503,   2403,   2304,  \
  2204,   2105,   2005,   1905,   1805,   1705,   1605,   1505,   1405,   1305,  \
  1205,   1104,   1004,    904,    803,    703,    603,    502,    402,    301,  \
   201,    100,      0,   -100,   -201,   -301,   -402,   -502,   -603,   -703,  \
  -803,   -904,  -1004,  -1104,  -1205,  -1305,  -1405,  -1505,  -1605,  -1705,  \
 -1805,  -1905,  -2005,  -2105,  -2204,  -2304,  -2403,  -2503,  -2602,  -2701,  \
 -2800,  -2899,  -2998,  -3097,  -3196,  -3294,  -3393,  -3491,  -3589,  -3687,  \
 -3785,  -3883,  -3980,  -4078,  -4175,  -4272,  -4369,  -4466,  -4563,  -4659,  \
 -4755,  -4852,  -4947,  -5043,  -5139,  -5234,  -5329,  -5424,  -5519,  -5614,  \
 -5708,  -5802,  -5896,  -5990,  -6083,  -6176,  -6269,  -6362,  -6455,  -6547,  \
 -6639,  -6731,  -6822,  -6913,  -7004,  -7095,  -7186,  -7276,  -7366,  -7455,  \
 -7545,  -7634,  -7723,  -7811,  -7899,  -7987,  -8075,  -8162,  -8249,  -8336,  \
 -8422,  -8508,  -8594,  -8680,  -8765,  -8850,  -8934,  -9018,  -9102,  -9185,  \
 -9268,  -9351,  -9433,  -9515,  -9597,  -9678,  -9759,  -9840,  -9920, -10000,  \
-10079, -10158, -10237, -10315, -10393, -10471, -10548, -10625, -10701, -10777,  \
-10852, -10927, -11002, -11076, -11150, -11224, -11297, -11369, -11442, -11513,  \
-11585, -11655, -11726, -11796, -11865, -11934, -12003, -12071, -12139, -12206,  \
-12273, -12340, -12405, -12471, -12536, -12600, -12664, -12728, -12791, -12853,  \
-12916, -12977, -13038, -13099, -13159, -13219, -13278, -13336, -13395, -13452,  \
-13509, -13566, -13622, -13678, -13733, -13787, -13841, -13895, -13948, -14000,  \
-14052, -14104, -14155, -14205, -14255, -14304, -14353, -14401, -14449, -14496,  \
-14542, -14588, -14634, -14679, -14723, -14767, -14810, -14853, -14895, -14937,  \
-14978, -15018, -15058, -15097, -15136, -15174, -15212, -15249, -15285, -15321,  \
-15357, -15391, -15426, -15459, -15492, -15525, -15556, -15588, -15618, -15648,  \
-15678, -15707, -15735, -15763, -15790, -15816, -15842, -15868, -15892, -15916,  \
-15940, -15963, -15985, -16007, -16028, -16049, -16068, -16088, -16106, -16125,  \
-16142, -16159, -16175, -16191, -16206, -16220, -16234, -16247, -16260, -16272,  \
-16283, -16294, -16304, -16314, -16323, -16331, -16339, -16346, -16352, -16358,  \
-16364, -16368, -16372, -16376, -16378, -16380, -16382, -16383, -16383, -16383,  \
-16382, -16380, -16378, -16376, -16372, -16368, -16364, -16358, -16352, -16346,  \
-16339, -16331, -16323, -16314, -16304, -16294, -16283, -16272, -16260, -16247,  \
-16234, -16220, -16206, -16191, -16175, -16159, -16142, -16125, -16106, -16088,  \
-16068, -16049, -16028, -16007, -15985, -15963, -15940, -15916, -15892, -15868,  \
-15842, -15816, -15790, -15763, -15735, -15707, -15678, -15648, -15618, -15588,  \
-15556, -15525, -15492, -15459, -15426, -15391, -15357, -15321, -15285, -15249,  \
-15212, -15174, -15136, -15097, -15058, -15018, -14978, -14937, -14895, -14853,  \
-14810, -14767, -14723, -14679, -14634, -14588, -14542, -14496, -14449, -14401,  \
-14353, -14304, -14255, -14205, -14155, -14104, -14052, -14000, -13948, -13895,  \
-13841, -13787, -13733, -13678, -13622, -13566, -13509, -13452, -13395, -13336,  \
-13278, -13219, -13159, -13099, -13038, -12977, -12916, -12853, -12791, -12728,  \
-12664, -12600, -12536, -12471, -12405, -12340, -12273, -12206, -12139, -12071,  \
-12003, -11934, -11865, -11796, -11726, -11655, -11585, -11513, -11442, -11369,  \
-11297, -11224, -11150, -11076, -11002, -10927, -10852, -10777, -10701, -10625,  \
-10548, -10471, -10393, -10315, -10237, -10158, -10079, -10000,  -9920,  -9840,  \
 -9759,  -9678,  -9597,  -9515,  -9433,  -9351,  -9268,  -9185,  -9102,  -9018,  \
 -8934,  -8850,  -8765,  -8680,  -8594,  -8508,  -8422,  -8336,  -8249,  -8162,  \
 -8075,  -7987,  -7899,  -7811,  -7723,  -7634,  -7545,  -7455,  -7366,  -7276,  \
 -7186,  -7095,  -7004,  -6913,  -6822,  -6731,  -6639,  -6547,  -6455,  -6362,  \
 -6269,  -6176,  -6083,  -5990,  -5896,  -5802,  -5708,  -5614,  -5519,  -5424,  \
 -5329,  -5234,  -5139,  -5043,  -4947,  -4852,  -4755,  -4659,  -4563,  -4466,  \
 -4369,  -4272,  -4175,  -4078,  -3980,  -3883,  -3785,  -3687,  -3589,  -3491,  \
 -3393,  -3294,  -3196,  -3097,  -2998,  -2899,  -2800,  -2701,  -2602,  -2503,  \
 -2403,  -2304,  -2204,  -2105,  -2005,  -1905,  -1805,  -1705,  -1605,  -1505,  \
 -1405,  -1305,  -1205,  -1104,  -1004,   -904,   -803,   -703,   -603,   -502,  \
  -402,   -301,   -201,   -100 };


// ################## 3 harmonics sawtooth look-up table #######################
int16_t wavetable_saw3[RES] = { 0, 329, 657, 986, 1315, 1643, 1972, 2299, 2627, 2954, 3280, 3606, 3931, 4256, 4579, 4902, 5225, 5546, \
		5866, 6185, 6503, 6820, 7136, 7451, 7764, 8076, 8386, 8695, 9003, 9309, 9613, 9916, 10217, 10516, 10813, 11109, 11402, 11694, 11984,\
		12271, 12557, 12840, 13121, 13400, 13676, 13951, 14222, 14492, 14759, 15023, 15285, 15545, 15801, 16055, 16307, 16555, 16801, 17044,\
		17284, 17522, 17756, 17987, 18216, 18441, 18664, 18883, 19099, 19312, 19522, 19729, 19932, 20133, 20330, 20523, 20714, 20901, 21085,\
		21265, 21442, 21615, 21786, 21952, 22116, 22275, 22432, 22584, 22734, 22879, 23021, 23160, 23295, 23427, 23554, 23679, 23800, 23917,\
		24030, 24140, 24247, 24349, 24449, 24544, 24636, 24725, 24809, 24890, 24968, 25042, 25113, 25179, 25243, 25303, 25359, 25412, 25461,\
		25506, 25549, 25587, 25623, 25655, 25683, 25708, 25729, 25748, 25763, 25774, 25782, 25787, 25789, 25787, 25782, 25774, 25763, 25749,\
		25731, 25711, 25687, 25660, 25631, 25598, 25562, 25524, 25482, 25438, 25391, 25341, 25288, 25233, 25175, 25114, 25051, 24985, 24916, \
    24845, 24772, 24696, 24617, 24537, 24454, 24369, 24281, 24191, 24100, 24006, 23910, 23811, 23711, 23609, 23505, 23400, 23292, 23183, \
    23072, 22959, 22844, 22728, 22611, 22492, 22371, 22249, 22126, 22001, 21875, 21748, 21619, 21489, 21359, 21227, 21094, 20960, 20825, \
    20690, 20553, 20416, 20278, 20139, 20000, 19860, 19719, 19578, 19436, 19294, 19152, 19009, 18866, 18722, 18578, 18434, 18290, 18146,\
    18002, 17858, 17713, 17569, 17425, 17281, 17137, 16994, 16850, 16707, 16564, 16422, 16280, 16138, 15997, 15857, 15717, 15577, 15438,\
    15300, 15162, 15026, 14889, 14754, 14620, 14486, 14353, 14221, 14090, 13960, 13831, 13702, 13575, 13449, 13324, 13200, 13078, 12956,\
    12836, 12716, 12598, 12481, 12366, 12252, 12139, 12027, 11917, 11808, 11700, 11594, 11489, 11385, 11283, 11183, 11083, 10986, 10890,\
    10795, 10701, 10610, 10519, 10431, 10343, 10258, 10174, 10091, 10010, 9930, 9852, 9776, 9701, 9627, 9555, 9485, 9416, 9349, 9284, 9220,\
    9157,	9096, 9036, 8978, 8922, 8867, 8814, 8762, 8711, 8662, 8615, 8569, 8524, 8481, 8439, 8399, 8360, 8322, 8286, 8251, 8218, 8185,\
    8155, 8125, 8097, 8070, 8044, 8019, 7996, 7974, 7953, 7933, 7914, 7896, 7880, 7864, 7850, 7836, 7824, 7812, 7802, 7792, 7783, 7776,\
    7769,	7762, 7757, 7752, 7748, 7745, 7743, 7741, 7740, 7739, 7740, 7740, 7741, 7743, 7745, 7748, 7751, 7754, 7758, 7762, 7767, 7772,\
    7777,	7782, 7788, 7793, 7799, 7805, 7811, 7817, 7823, 7830, 7836, 7842, 7848, 7854, 7860, 7865, 7871, 7876, 7881, 7886, 7890, 7895,\
    7898,	7902, 7905, 7908, 7910, 7912, 7913, 7914, 7914, 7914, 7913, 7912, 7909, 7907, 7903, 7899, 7894, 7889, 7882, 7875, 7867, 7859,\
    7849, 7839, 7828, 7815, 7802, 7788, 7774, 7758, 7741, 7723, 7704, 7684, 7664, 7642, 7619, 7595, 7570, 7544, 7516, 7488, 7458, 7428,\
    7396,	7363, 7329, 7294, 7257, 7220, 7181, 7141, 7100, 7058, 7014, 6969, 6923, 6876, 6828, 6778, 6728, 6676, 6622, 6568, 6512, 6456,\
    6397,	6338, 6278, 6216, 6153, 6089, 6024, 5958, 5891, 5822, 5752, 5681, 5609, 5536, 5462, 5386, 5310, 5232, 5153, 5074, 4993, 4911,\
    4828,	4744, 4660, 4574, 4487, 4399, 4311, 4221, 4131, 4039, 3947, 3854, 3760, 3665, 3570, 3473, 3376, 3279, 3180, 3081, 2981, 2880,\
    2779,	2677, 2575, 2472, 2369, 2265, 2160, 2055, 1950, 1844, 1737, 1631, 1524, 1416, 1308, 1200, 1092, 983, 875, 766, 657, 547, 438,\
    328, 219, 109, 0, -109, -219, -328, -438, -547, -657, -766, -875, -983, -1092, -1200, -1308, -1416, -1524, -1631, -1737, -1844, -1950,\
		-2055, -2160, -2265, -2369, -2472, -2575, -2677, -2779, -2880, -2981, -3081, -3180, -3279, -3376, -3473, -3570, -3665, -3760,\
		-3854, -3947, -4039, -4131, -4221, -4311, -4399, -4487, -4574, -4660, -4744, -4828, -4911, -4993, -5074, -5153, -5232, -5310,\
		-5386, -5462, -5536, -5609, -5681, -5752, -5822, -5891, -5958, -6024, -6089, -6153, -6216, -6278, -6338, -6397, -6456, -6512,\
		-6568, -6622, -6676, -6728, -6778, -6828, -6876, -6923, -6969, -7014, -7058, -7100, -7141, -7181, -7220, -7257, -7294, -7329,\
		-7363, -7396, -7428, -7458, -7488, -7516, -7544, -7570, -7595, -7619, -7642, -7664, -7684, -7704, -7723, -7741, -7758, -7774,\
		-7788, -7802, -7815, -7828, -7839, -7849, -7859, -7867, -7875, -7882, -7889, -7894, -7899, -7903, -7907, -7909, -7912, -7913,\
		-7914, -7914, -7914, -7913, -7912, -7910, -7908, -7905, -7902, -7898, -7895, -7890, -7886, -7881, -7876, -7871, -7865, -7860,\
		-7854, -7848, -7842, -7836, -7830, -7823, -7817, -7811, -7805, -7799, -7793, -7788, -7782, -7777, -7772, -7767, -7762, -7758,\
		-7754, -7751, -7748, -7745, -7743, -7741, -7740, -7740, -7739, -7740, -7741, -7743, -7745, -7748, -7752, -7757, -7762, -7769,\
		-7776, -7783, -7792, -7802, -7812, -7824, -7836, -7850, -7864, -7880, -7896, -7914, -7933, -7953, -7974, -7996, -8019, -8044,\
		-8070, -8097, -8125, -8155, -8185, -8218, -8251, -8286, -8322, -8360, -8399, -8439, -8481, -8524, -8569, -8615, -8662, -8711,\
		-8762, -8814, -8867, -8922, -8978, -9036, -9096, -9157, -9220, -9284, -9349, -9416, -9485, -9555, -9627, -9701, -9776, -9852,\
		-9930, -10010, -10091, -10174, -10258, -10343, -10431, -10519, -10610, -10701, -10795, -10890, -10986, -11083, -11183, -11283,\
		-11385, -11489, -11594, -11700, -11808, -11917, -12027, -12139, -12252, -12366, -12481, -12598, -12716, -12836, -12956, -13078,\
		-13200, -13324, -13449, -13575, -13702, -13831, -13960, -14090, -14221, -14353, -14486, -14620, -14754, -14889, -15026, -15162,\
		-15300, -15438, -15577, -15717, -15857, -15997, -16138, -16280, -16422, -16564, -16707, -16850, -16994, -17137, -17281, -17425,\
		-17569, -17713, -17858, -18002, -18146, -18290, -18434, -18578, -18722, -18866, -19009, -19152, -19294, -19436, -19578, -19719,\
		-19860, -20000, -20139, -20278, -20416, -20553, -20690, -20825, -20960, -21094, -21227, -21359, -21489, -21619, -21748, -21875,\
		-22001, -22126, -22249, -22371, -22492, -22611, -22728, -22844, -22959, -23072, -23183, -23292, -23400, -23505, -23609, -23711,\
		-23811, -23910, -24006, -24100, -24191, -24281, -24369, -24454, -24537, -24617, -24696, -24772, -24845, -24916, -24985, -25051,\
		-25114, -25175, -25233, -25288, -25341, -25391, -25438, -25482, -25524, -25562, -25598, -25631, -25660, -25687, -25711, -25731,\
		-25749, -25763, -25774, -25782, -25787, -25789, -25787, -25782, -25774, -25763, -25748, -25729, -25708, -25683, -25655, -25623,\
		-25587, -25549, -25506, -25461, -25412, -25359, -25303, -25243, -25179, -25113, -25042, -24968, -24890, -24809, -24725, -24636,\
		-24544, -24449, -24349, -24247, -24140, -24030, -23917, -23800, -23679, -23554, -23427, -23295, -23160, -23021, -22879, -22734,\
		-22584, -22432, -22275, -22116, -21952, -21786, -21615, -21442, -21265, -21085, -20901, -20714, -20523, -20330, -20133, -19932,\
		-19729, -19522, -19312, -19099, -18883, -18664, -18441, -18216, -17987, -17756, -17522, -17284, -17044, -16801, -16555, -16307,\
		-16055, -15801, -15545, -15285, -15023, -14759, -14492, -14222, -13951, -13676, -13400, -13121, -12840, -12557, -12271, -11984,\
		-11694, -11402, -11109, -10813, -10516, -10217, -9916, -9613, -9309, -9003, -8695, -8386, -8076, -7764, -7451, -7136, -6820,\
		-6503, -6185, -5866, -5546, -5225, -4902, -4579, -4256, -3931, -3606, -3280, -2954, -2627, -2299, -1972, -1643, -1315, -986,\
		-657, -329};

#endif
