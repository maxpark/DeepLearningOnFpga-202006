#include "conv_net.h"

const DTYPE biases_C1[C1_N_FILTERS] = {
-0.018691957,
0.0295209456,
0.15125601,
-0.0340696275,
0.328572512,
0.056611672};

const DTYPE biases_C2[C2_N_FILTERS] = {
0.0274239033,
-0.0413316078,
0.0384612978,
0.0550476573,
-0.019983815,
0.0494655445,
-0.0679985061,
-0.0460643992,
-0.0015138248,
-0.0155405691,
-0.013775331,
-0.0216035657,
0.0300707258,
0.00955829304,
0.00737225777,
0.0610159747};

const DTYPE biases_F1[F1_ROWS] = {
0.0131301302,
-0.0487168692,
0.0492173843,
0.0248762574,
0.0480514169,
0.025731381,
0.0341272987,
0.00680823624,
0.0479457788,
-0.0356168412,
-0.00890415814,
0.000666159904,
-0.0305674952,
0.0358849913,
-0.00744276773,
0.0248401854,
0.0216779895,
0.0341709517,
0.0314931832,
0.0114342365,
-0.0158376228,
-0.0135918027,
0.03396523,
0.0310195982,
-0.0213193484,
0.0435363017,
0.0480825938,
-0.0370048955,
-0.00552915409,
-0.00938793551,
-0.00026160822,
0.0211656429,
-0.0121468985,
-0.0348562971,
0.0338523686,
0.0265851151,
-0.0211713836,
-0.0333478712,
-0.0117924716,
0.00398116373,
0.00569641544,
0.0102559151,
0.00262228586,
-0.0529158525,
0.0430192873,
-0.0449149236,
-0.0158772133,
0.0447051451,
0.0117243109,
-0.018202249,
-0.0332430676,
-0.04732126,
0.0407191478,
-0.0481447317,
-0.00866135862,
0.0390151329,
0.0186470803,
-0.0216578804,
-0.0105129322,
0.00510651758,
-0.0264074132,
0.0191041771,
0.0229024347,
0.0090231197,
0.016109582,
0.0026291036,
-0.0232874267,
-0.0349262021,
0.0133268433,
0.00523114856,
0.00974443555,
0.0017715086,
-0.0345642343,
0.031653069,
-0.00453914097,
0.0018939455,
0.0420796946,
0.00383405318,
-0.0143079786,
-0.0328279547,
-0.0355126671,
0.0215872079,
-0.0493787266,
0.0237791725,
0.0502717979,
-0.00332793361,
0.00403966801,
0.0116338339,
0.0292660836,
0.0180351399,
0.0336048193,
0.0465614274,
0.0122769438,
0.00137183839,
0.00639806176,
0.0438173562,
-0.0462032408,
-0.0388253815,
-0.0314882472,
-0.0393735878,
-0.0162947141,
0.0347732268,
0.0314475149,
-0.00846395548,
-0.0332829915,
0.0311852451,
-0.00899371225,
0.0327948481,
-0.0337717608,
-0.00567319617,
-0.0302183013,
0.0166940745,
0.0493670292,
-0.00234568119,
0.00200508954,
-0.000330132199,
-0.0214940179,
0.0241451319,
-0.0353237502,
-0.0152672669};

const DTYPE biases_F2[F2_ROWS] = {
-0.0837614015,
0.0757351518,
0.0564138256,
0.0614296794,
0.0438895039,
-0.00589475501,
0.0531814545,
-0.0178184826,
0.091672793,
0.0436787345,
-0.0937271565,
-0.0120522948,
-0.0837073624,
0.0426645689,
-0.0670963451,
-0.0147832651,
0.0748929605,
-0.0702973679,
0.0474979691,
-0.0192565434,
0.0701175332,
0.037541233,
0.0632865652,
-0.0498905852,
-0.0877378136,
0.0915842652,
0.0403205939,
0.0399360768,
-0.0499096438,
0.106140852,
0.0234817266,
0.0642337054,
0.062940903,
0.0458099134,
0.0587236211,
0.0747346953,
-0.0975232497,
0.00720398314,
0.0665401295,
0.0460891612,
-0.0817741975,
0.0476798415,
-0.0689421892,
-0.0746072307,
0.0895877406,
-0.0725297332,
-0.0666968301,
0.0331409201,
-0.0839644074,
0.00950477831,
0.0413091518,
-0.0356391594,
0.0846592039,
-0.0213260595,
0.0298761763,
-0.0426152758,
0.0585310012,
-0.0447914712,
0.0198335387,
-0.00115288026,
0.0423965007,
0.0485445671,
0.0741907582,
0.0079996502,
0.0261388887,
0.0375921987,
0.00218192325,
-0.0223729182,
-0.0412526019,
-0.0497568548,
-0.079932794,
0.0613089278,
0.0389009342,
-0.0647528246,
0.000164950077,
0.0863905773,
-0.0367607661,
0.0425461121,
0.0287495535,
-0.059886042,
0.0985269547,
-0.076109767,
-0.0698162317,
0.000845687115};

const DTYPE biases_F3[F3_ROWS] = {
-0.103199892,
0.118835114,
0.0302550737,
-0.0185885411,
-0.120061845,
0.00244249869,
-0.0745954663,
-0.0175903346,
0.055974029,
-0.0815665722};
