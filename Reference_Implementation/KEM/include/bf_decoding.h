/**
 *
 * <bf_deconding.h>
 *
 * @version 1.0 (September 2017)
 *
 * Reference ISO-C99 Implementation of LEDAkem cipher" using GCC built-ins.
 *
 * In alphabetical order:
 *
 * @author Marco Baldi <m.baldi@univpm.it>
 * @author Alessandro Barenghi <alessandro.barenghi@polimi.it>
 * @author Franco Chiaraluce <f.chiaraluce@univpm.it>
 * @author Gerardo Pelosi <gerardo.pelosi@polimi.it>
 * @author Paolo Santini <p.santini@pm.univpm.it>
 *
 * This code is hereby placed in the public domain.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS ''AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 **/

#pragma once
#include "qc_ldpc_parameters.h"
#include "gf2x_limbs.h"
#define              ITERATIONS_MAX   (15)


int bf_decoding(DIGIT err[],
                const POSITION_T HtrPosOnes[N0][DV],
                const POSITION_T QtrPosOnes[N0][M], // N0 vectors containing exp.s of Qtr ones
                DIGIT privateSyndrome[]       //  1 polynomial  -- param. in/out
               );

/******************** START of definitions for N0 = 2 *************************/
#if (CATEGORY == 1) && (N0 == 2)
#define SYNDROME_TRESH_LOOKUP_TABLE {0,       43},\
{2843,       44},\
{4392,       45},\
{5193,       46},\
{5672,       47}
#endif

#if ((CATEGORY == 2) || (CATEGORY == 3)) && (N0 == 2)
#define SYNDROME_TRESH_LOOKUP_TABLE {0,       61},\
{3957,       62},\
{6698,       63},\
{8128,       64},\
{8978,       65},\
{9578,       66},\
{9981,       67},\
{10286,       68},\
{10533,       69}
#endif

#if ((CATEGORY == 4) || (CATEGORY == 5)) && (N0 == 2)
#define SYNDROME_TRESH_LOOKUP_TABLE {0,       74},\
{5742,       75},\
{10032,       76},\
{12263,       77},\
{13621,       78},\
{14538,       79},\
{15211,       80},\
{15706,       81},\
{16091,       82},\
{16391,       83},\
{16640,       84}
#endif

/******************** START of definitions for N0 = 3 *************************/

#if (CATEGORY == 1) && (N0 == 3)
#define SYNDROME_TRESH_LOOKUP_TABLE {0,       49},\
{2509,       50},\
{3124,       51},\
{3478,       52},\
{3695,       53},\
{3878,       54}
#endif

#if ((CATEGORY == 2) || (CATEGORY == 3)) && (N0 == 3)
#define SYNDROME_TRESH_LOOKUP_TABLE  {0,       71},\
{4255,       72},\
{5492,       73},\
{6203,       74},\
{6666,       75},\
{7021,       76},\
{7271,       77},\
{7466,       78},\
{7617,       79}
#endif

#if ((CATEGORY == 4) || (CATEGORY == 5)) && (N0 == 3)
#define SYNDROME_TRESH_LOOKUP_TABLE {0,       88},\
{6551,       89},\
{8560,       90},\
{9789,       91},\
{10536,       92},\
{11123,       93},\
{11519,       94},\
{11837,       95},\
{12091,       96},\
{12319,       97}
#endif

/******************** START of definitions for N0 = 4 *************************/


#if (CATEGORY == 1) && (N0 == 4)
#define SYNDROME_TRESH_LOOKUP_TABLE {0,       53},\
{2021,       54},\
{2611,       55},\
{2957,       56},\
{3181,       57},\
{3345,       58},\
{3447,       59}
#endif

#if ((CATEGORY == 2) || (CATEGORY == 3)) && (N0 == 4)
#define SYNDROME_TRESH_LOOKUP_TABLE {0,       71},\
{3244,       72},\
{4359,       73},\
{5006,       74},\
{5408,       75},\
{5712,       76},\
{5915,       77},\
{6094,       78},\
{6230,       79}
#endif

#if ((CATEGORY == 4) || (CATEGORY == 5)) && (N0 == 4)
#define SYNDROME_TRESH_LOOKUP_TABLE {0,       88},\
{4788,       89},\
{6581,       90},\
{7620,       91},\
{8300,       92},\
{8782,       93},\
{9121,       94},\
{9386,       95},\
{9593,       96},\
{9780,       97}
#endif
