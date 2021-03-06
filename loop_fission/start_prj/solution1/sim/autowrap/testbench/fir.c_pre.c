# 1 "/home/ramdas/Work/Learning/CPP_Learning/PP4FPGA_HLS/loop_fission/fir.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/ramdas/Work/Learning/CPP_Learning/PP4FPGA_HLS/loop_fission/fir.c"
# 46 "/home/ramdas/Work/Learning/CPP_Learning/PP4FPGA_HLS/loop_fission/fir.c"
# 1 "/home/ramdas/Work/Learning/CPP_Learning/PP4FPGA_HLS/loop_fission/fir.h" 1
# 50 "/home/ramdas/Work/Learning/CPP_Learning/PP4FPGA_HLS/loop_fission/fir.h"
typedef int coef_t;
typedef int data_t;
typedef int acc_t;

void fir (
  data_t *y,
  coef_t c[11 +1],
  data_t x
  );
# 47 "/home/ramdas/Work/Learning/CPP_Learning/PP4FPGA_HLS/loop_fission/fir.c" 2

  void fir (
     data_t *y,
     coef_t c[11],
     data_t x
     ) {

  static data_t shift_reg[11];
  acc_t acc;
  data_t data;
  int i;
# 77 "/home/ramdas/Work/Learning/CPP_Learning/PP4FPGA_HLS/loop_fission/fir.c"
  TDL:for(i=11 -1;i>0;i--){
    shift_reg[i] = shift_reg[i-1];
  }
  shift_reg[0] = x;
  acc = 0;
  MAC:for(i=11 -1;i>=0;i--){
    acc += shift_reg[i]*c[i];
  }
  *y=acc;
}
