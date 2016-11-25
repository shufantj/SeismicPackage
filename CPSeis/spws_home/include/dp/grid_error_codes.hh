/*<license>
 -------------------------------------------------------------------------------
  Copyright (c) 2007 ConocoPhillips Company
 
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
 
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
 
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
 -------------------------------------------------------------------------------
 </license>*/
#ifndef GRID_ERROR_CODES_HH
#define GRID_ERROR_CODES_HH

enum GridErrorCodes {

  FG_SUCCESSFUL, FG_MEMORY_ALLOCATION_ERROR, FG_SIZE_TOO_SMALL,
  FG_SET_RANGE_ERROR, FG_INVALID_GRID, FG_INVALID_SUB_REGION,
  FG_INVALID_VALUE, FG_ZERO_DENOMINATOR, FG_USER_ABORTED

 ,GF_SUCCESSFUL, GF_MEMORY_ALLOCATION_ERROR, GF_BAD_REACH_VALUES,
  GF_BAD_MAX_HITS_VALUE, GF_BAD_INPUTS

 ,AGF_SUCCESSFUL, AGF_MEMORY_ALLOCATION_ERROR, AGF_BAD_INPUTS,
  AGF_ZERO_DENOMINATOR

 ,CP_SUCCESSFUL, CP_MEMORY_ALLOCATION_ERROR, CP_BAD_INPUTS

 ,UCG_SUCCESSFUL, UCG_MEMORY_ALLOCATION_ERROR, UCG_SIZE_TOO_SMALL,
  UCG_SET_RANGE_ERROR, UCG_INVALID_GRID, UCG_INVALID_SUB_REGION,
  UCG_UNDEFINED_ARITHMETIC, UCG_USER_ABORTED

 ,UCA_SUCCESSFUL, UCA_BAD_INPUTS, UCA_INITIALIZATION_ERROR

 ,DPB_SUCCESSFUL, DPB_MEMORY_ALLOCATION_ERROR, DPB_BAD_INPUTS,
  DPB_INITIALIZATION_ERROR, DPB_UNDEFINED_ARITHMETIC, DPB_COMPRESSION_ERROR,
  DPB_USER_ABORTED

 ,RGB_SUCCESSFUL, RGB_MEMORY_ALLOCATION_ERROR, RGB_BAD_INPUTS

 ,FCGP_SUCCESSFUL, FCGP_MEMORY_ALLOCATION_ERROR

 ,FCG_SUCCESSFUL, FCG_MEMORY_ALLOCATION_ERROR, FCG_PLOTTING_ERROR

 ,CGP_SUCCESSFUL

 ,CG_SUCCESSFUL, CG_MEMORY_ALLOCATION_ERROR, CG_AMPLITUDE_SCALE_ERROR

 ,FA_SUCCESSFUL, FA_BAD_INPUTS, FA_INITIALIZATION_ERROR

 ,CL_SUCCESSFUL, CL_MEMORY_ALLOCATION_ERROR, CL_BAD_INPUTS

 ,BFA_SUCCESSFUL, BFA_MEMORY_ALLOCATION_ERROR, BFA_BAD_INPUTS,
  BFA_SET_RANGE_ERROR, BFA_INVALID_ARRAY

 ,OL_SUCCESSFUL, OL_BAD_INPUTS

 ,IL_SUCCESSFUL, IL_MEMORY_ALLOCATION_ERROR, IL_BAD_INPUTS,
  IL_INITIALIZATION_ERROR

 ,D_SUCCESSFUL, D_MEMORY_ALLOCATION_ERROR, D_BAD_INPUTS

 ,MA_SUCCESSFUL, MA_MEMORY_ALLOCATION_ERROR, MA_BAD_INPUTS,
  MA_COMPRESSION_ERROR, MA_USER_ABORTED

 ,FU_SUCCESSFUL, FU_INVALID_SUB_REGION

 ,AR_SUCCESSFUL, AR_BAD_INPUTS

 ,RGBZP_SUCCESSFUL, RGBZP_MEMORY_ALLOCATION_ERROR, RGBZP_BAD_INPUTS

};

#endif