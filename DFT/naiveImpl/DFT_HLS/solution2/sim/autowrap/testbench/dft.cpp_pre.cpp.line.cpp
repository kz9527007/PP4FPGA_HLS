#pragma line 1 "/home/ramdas/Work/Learning/CPP_Learning/PP4FPGA_HLS/DFT/naiveImpl/dft.cpp"
#pragma line 1 "<built-in>"
#pragma line 1 "<command-line>"
#pragma line 1 "/usr/include/stdc-predef.h" 1 3 4
#pragma line 1 "<command-line>" 2
#pragma line 1 "/home/ramdas/Work/Learning/CPP_Learning/PP4FPGA_HLS/DFT/naiveImpl/dft.cpp"
#pragma line 1 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/math.h" 1 3
#pragma line 36 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/math.h" 3
#pragma line 1 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 1 3
#pragma line 39 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
#pragma empty_line
#pragma line 40 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
#pragma empty_line
#pragma line 1 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 1 3
#pragma line 196 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 3
#pragma empty_line
#pragma line 196 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 3
namespace std
{
  typedef long unsigned int size_t;
  typedef long int ptrdiff_t;
#pragma empty_line
#pragma empty_line
  typedef decltype(nullptr) nullptr_t;
#pragma empty_line
}
#pragma line 218 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 3
namespace std
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
namespace __gnu_cxx
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
#pragma line 495 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 3
#pragma line 1 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/os_defines.h" 1 3
#pragma line 39 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/os_defines.h" 3
#pragma line 1 "/usr/include/features.h" 1 3 4
#pragma line 424 "/usr/include/features.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
#pragma line 427 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
#pragma line 428 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
#pragma line 429 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
#pragma line 425 "/usr/include/features.h" 2 3 4
#pragma line 448 "/usr/include/features.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
#pragma line 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
#pragma line 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
#pragma line 449 "/usr/include/features.h" 2 3 4
#pragma line 40 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/os_defines.h" 2 3
#pragma line 496 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/cpu_defines.h" 1 3
#pragma line 499 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 2 3
#pragma line 42 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 2 3
#pragma line 1 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/bits/cpp_type_traits.h" 1 3
#pragma line 35 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/bits/cpp_type_traits.h" 3
#pragma empty_line
#pragma line 36 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/bits/cpp_type_traits.h" 3
#pragma line 67 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/bits/cpp_type_traits.h" 3
extern "C++" {
#pragma empty_line
namespace std __attribute__ ((__visibility__ ("default")))
{
#pragma empty_line
#pragma empty_line
  struct __true_type { };
  struct __false_type { };
#pragma empty_line
  template<bool>
    struct __truth_type
    { typedef __false_type __type; };
#pragma empty_line
  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };
#pragma empty_line
#pragma empty_line
  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_integer<char16_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<char32_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma line 261 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer<__int128> { enum { __value = 1 }; typedef __true_type __type; }; template<> struct __is_integer<unsigned __int128> { enum { __value = 1 }; typedef __true_type __type; };
#pragma line 278 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/bits/cpp_type_traits.h" 3
  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Iterator>
    inline _Iterator
    __miter_base(_Iterator __it)
    { return __it; }
#pragma empty_line
#pragma empty_line
}
}
#pragma line 43 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 2 3
#pragma line 1 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/ext/type_traits.h" 1 3
#pragma line 32 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/ext/type_traits.h" 3
#pragma empty_line
#pragma line 33 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/ext/type_traits.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern "C++" {
#pragma empty_line
namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<bool, typename>
    struct __enable_if
    { };
#pragma empty_line
  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };
#pragma empty_line
  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
#pragma empty_line
    public:
      typedef typename __if_type::__type __type;
    };
#pragma empty_line
  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };
#pragma empty_line
#pragma empty_line
  template<>
    struct __add_unsigned<bool>;
#pragma empty_line
  template<>
    struct __add_unsigned<wchar_t>;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
#pragma empty_line
    public:
      typedef typename __if_type::__type __type;
    };
#pragma empty_line
  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };
#pragma empty_line
#pragma empty_line
  template<>
    struct __remove_unsigned<bool>;
#pragma empty_line
  template<>
    struct __remove_unsigned<wchar_t>;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }
#pragma empty_line
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }
#pragma empty_line
#pragma empty_line
  inline bool
  __is_null_pointer(std::nullptr_t)
  { return true; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __promote<_Tp, false>
    { };
#pragma empty_line
  template<>
    struct __promote<long double>
    { typedef long double __type; };
#pragma empty_line
  template<>
    struct __promote<double>
    { typedef double __type; };
#pragma empty_line
  template<>
    struct __promote<float>
    { typedef float __type; };
#pragma empty_line
  template<typename _Tp, typename _Up,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type>
    struct __promote_2
    {
      typedef __typeof__(_Tp2() + _Up2()) __type;
    };
#pragma empty_line
  template<typename _Tp, typename _Up, typename _Vp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type>
    struct __promote_3
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2()) __type;
    };
#pragma empty_line
  template<typename _Tp, typename _Up, typename _Vp, typename _Wp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type,
           typename _Wp2 = typename __promote<_Wp>::__type>
    struct __promote_4
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2() + _Wp2()) __type;
    };
#pragma empty_line
#pragma empty_line
}
}
#pragma line 44 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 2 3
#pragma empty_line
#pragma line 1 "/usr/include/math.h" 1 3 4
#pragma line 27 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
#pragma line 28 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern "C" {
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
#pragma line 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
#pragma line 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
#pragma empty_line
#pragma empty_line
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
#pragma empty_line
#pragma empty_line
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#pragma empty_line
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
#pragma line 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
#pragma line 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
#pragma empty_line
#pragma empty_line
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
#pragma empty_line
typedef int __daddr_t;
typedef int __key_t;
#pragma empty_line
#pragma empty_line
typedef int __clockid_t;
#pragma empty_line
#pragma empty_line
typedef void * __timer_t;
#pragma empty_line
#pragma empty_line
typedef long int __blksize_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
#pragma empty_line
#pragma empty_line
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
#pragma empty_line
#pragma empty_line
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
#pragma empty_line
#pragma empty_line
typedef long int __fsword_t;
#pragma empty_line
typedef long int __ssize_t;
#pragma empty_line
#pragma empty_line
typedef long int __syscall_slong_t;
#pragma empty_line
typedef unsigned long int __syscall_ulong_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __off64_t __loff_t;
typedef char *__caddr_t;
#pragma empty_line
#pragma empty_line
typedef long int __intptr_t;
#pragma empty_line
#pragma empty_line
typedef unsigned int __socklen_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef int __sig_atomic_t;
#pragma line 38 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 1 3 4
#pragma line 25 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 1 3 4
#pragma line 26 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 2 3 4
#pragma line 41 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
#pragma line 75 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
typedef _Complex float __cfloat128 __attribute__ ((__mode__ (__TC__)));
#pragma line 87 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
typedef __float128 _Float128;
#pragma line 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
#pragma line 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
#pragma line 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
#pragma line 207 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef float _Float32;
#pragma line 244 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float64;
#pragma line 261 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float32x;
#pragma line 278 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef long double _Float64x;
#pragma line 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
#pragma line 44 "/usr/include/math.h" 2 3 4
#pragma line 138 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/flt-eval-method.h" 1 3 4
#pragma line 139 "/usr/include/math.h" 2 3 4
#pragma line 149 "/usr/include/math.h" 3 4
typedef float float_t;
typedef double double_t;
#pragma line 190 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/fp-logb.h" 1 3 4
#pragma line 191 "/usr/include/math.h" 2 3 4
#pragma line 233 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/fp-fast.h" 1 3 4
#pragma line 234 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
enum
  {
    FP_INT_UPWARD =
#pragma empty_line
      0,
    FP_INT_DOWNWARD =
#pragma empty_line
      1,
    FP_INT_TOWARDZERO =
#pragma empty_line
      2,
    FP_INT_TONEARESTFROMZERO =
#pragma empty_line
      3,
    FP_INT_TONEAREST =
#pragma empty_line
      4,
  };
#pragma line 289 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
#pragma line 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __isinf (double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __finite (double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __isnan (double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __iseqsig (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
extern int __issignaling (double __value) throw ()
     __attribute__ ((__const__));
#pragma line 290 "/usr/include/math.h" 2 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
#pragma line 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double acos (double __x) throw (); extern double __acos (double __x) throw ();
#pragma empty_line
extern double asin (double __x) throw (); extern double __asin (double __x) throw ();
#pragma empty_line
extern double atan (double __x) throw (); extern double __atan (double __x) throw ();
#pragma empty_line
extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();
#pragma empty_line
#pragma empty_line
 extern double cos (double __x) throw (); extern double __cos (double __x) throw ();
#pragma empty_line
 extern double sin (double __x) throw (); extern double __sin (double __x) throw ();
#pragma empty_line
extern double tan (double __x) throw (); extern double __tan (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();
#pragma empty_line
extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();
#pragma empty_line
extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ()
                                                        ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();
#pragma empty_line
extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();
#pragma empty_line
extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern double exp (double __x) throw (); extern double __exp (double __x) throw ();
#pragma empty_line
#pragma empty_line
extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();
#pragma empty_line
#pragma empty_line
extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();
#pragma empty_line
#pragma empty_line
 extern double log (double __x) throw (); extern double __log (double __x) throw ();
#pragma empty_line
#pragma empty_line
extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();
#pragma empty_line
#pragma empty_line
extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();
#pragma empty_line
#pragma empty_line
extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();
#pragma empty_line
#pragma empty_line
extern double logb (double __x) throw (); extern double __logb (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();
#pragma empty_line
#pragma empty_line
extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();
#pragma line 182 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int finite (double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double significand (double __x) throw (); extern double __significand (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double nan (const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double tgamma (double) throw (); extern double __tgamma (double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double gamma (double) throw (); extern double __gamma (double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double rint (double __x) throw (); extern double __rint (double __x) throw ();
#pragma empty_line
#pragma empty_line
extern double nextafter (double __x, double __y) throw (); extern double __nextafter (double __x, double __y) throw ();
#pragma empty_line
extern double nexttoward (double __x, long double __y) throw (); extern double __nexttoward (double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double nextdown (double __x) throw (); extern double __nextdown (double __x) throw ();
#pragma empty_line
extern double nextup (double __x) throw (); extern double __nextup (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int llogb (double __x) throw (); extern long int __llogb (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
__extension__
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
__extension__
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
extern double fmax (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmax (double __x, double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern double fmin (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmin (double __x, double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double roundeven (double __x) throw () __attribute__ ((__const__)); extern double __roundeven (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfp (double __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfp (double __x, int __round, unsigned int __width) throw ()
                            ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfp (double __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfp (double __x, int __round, unsigned int __width) throw ()
                              ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpx (double __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpx (double __x, int __round, unsigned int __width) throw ()
                             ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpx (double __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpx (double __x, int __round, unsigned int __width) throw ()
                               ;
#pragma empty_line
#pragma empty_line
extern double fmaxmag (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmaxmag (double __x, double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern double fminmag (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fminmag (double __x, double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalorder (double __x, double __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalordermag (double __x, double __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int canonicalize (double *__cx, const double *__x) throw ();
#pragma empty_line
#pragma empty_line
extern double getpayload (const double *__x) throw (); extern double __getpayload (const double *__x) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayload (double *__x, double __payload) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadsig (double *__x, double __payload) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
#pragma line 291 "/usr/include/math.h" 2 3 4
#pragma line 306 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
#pragma line 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __isinff (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __finitef (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __isnanf (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __iseqsigf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
extern int __issignalingf (float __value) throw ()
     __attribute__ ((__const__));
#pragma line 307 "/usr/include/math.h" 2 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
#pragma line 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();
#pragma empty_line
extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();
#pragma empty_line
extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();
#pragma empty_line
extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();
#pragma empty_line
#pragma empty_line
 extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();
#pragma empty_line
 extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();
#pragma empty_line
extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();
#pragma empty_line
extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();
#pragma empty_line
extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ()
                                                        ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();
#pragma empty_line
extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();
#pragma empty_line
extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern float expf (float __x) throw (); extern float __expf (float __x) throw ();
#pragma empty_line
#pragma empty_line
extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();
#pragma empty_line
#pragma empty_line
extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();
#pragma empty_line
#pragma empty_line
 extern float logf (float __x) throw (); extern float __logf (float __x) throw ();
#pragma empty_line
#pragma empty_line
extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();
#pragma empty_line
#pragma empty_line
extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();
#pragma empty_line
#pragma empty_line
extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();
#pragma empty_line
#pragma empty_line
extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();
#pragma empty_line
#pragma empty_line
extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();
#pragma line 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinff (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int finitef (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float nanf (const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnanf (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float gammaf (float) throw (); extern float __gammaf (float) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();
#pragma empty_line
#pragma empty_line
extern float nextafterf (float __x, float __y) throw (); extern float __nextafterf (float __x, float __y) throw ();
#pragma empty_line
extern float nexttowardf (float __x, long double __y) throw (); extern float __nexttowardf (float __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float nextdownf (float __x) throw (); extern float __nextdownf (float __x) throw ();
#pragma empty_line
extern float nextupf (float __x) throw (); extern float __nextupf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int llogbf (float __x) throw (); extern long int __llogbf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
__extension__
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
__extension__
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
extern float fmaxf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern float fminf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fminf (float __x, float __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float roundevenf (float __x) throw () __attribute__ ((__const__)); extern float __roundevenf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpf (float __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf (float __x, int __round, unsigned int __width) throw ()
                            ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpf (float __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf (float __x, int __round, unsigned int __width) throw ()
                              ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpxf (float __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf (float __x, int __round, unsigned int __width) throw ()
                             ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpxf (float __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf (float __x, int __round, unsigned int __width) throw ()
                               ;
#pragma empty_line
#pragma empty_line
extern float fmaxmagf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fmaxmagf (float __x, float __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern float fminmagf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fminmagf (float __x, float __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalorderf (float __x, float __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalordermagf (float __x, float __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int canonicalizef (float *__cx, const float *__x) throw ();
#pragma empty_line
#pragma empty_line
extern float getpayloadf (const float *__x) throw (); extern float __getpayloadf (const float *__x) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadf (float *__x, float __payload) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadsigf (float *__x, float __payload) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
#pragma line 308 "/usr/include/math.h" 2 3 4
#pragma line 349 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
#pragma line 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __isinfl (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __finitel (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __isnanl (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __iseqsigl (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
extern int __issignalingl (long double __value) throw ()
     __attribute__ ((__const__));
#pragma line 350 "/usr/include/math.h" 2 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
#pragma line 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();
#pragma empty_line
extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();
#pragma empty_line
extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();
#pragma empty_line
extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();
#pragma empty_line
#pragma empty_line
 extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();
#pragma empty_line
 extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();
#pragma empty_line
extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();
#pragma empty_line
extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();
#pragma empty_line
extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ()
                                                        ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();
#pragma empty_line
extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();
#pragma empty_line
extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();
#pragma empty_line
#pragma empty_line
extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();
#pragma empty_line
#pragma empty_line
 extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();
#pragma empty_line
#pragma empty_line
extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();
#pragma empty_line
#pragma empty_line
extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();
#pragma empty_line
#pragma empty_line
extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();
#pragma line 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinfl (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int finitel (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double nanl (const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnanl (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
extern long double nextafterl (long double __x, long double __y) throw (); extern long double __nextafterl (long double __x, long double __y) throw ();
#pragma empty_line
extern long double nexttowardl (long double __x, long double __y) throw (); extern long double __nexttowardl (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double nextdownl (long double __x) throw (); extern long double __nextdownl (long double __x) throw ();
#pragma empty_line
extern long double nextupl (long double __x) throw (); extern long double __nextupl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int llogbl (long double __x) throw (); extern long int __llogbl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
__extension__
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
__extension__
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
extern long double fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern long double fminl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double roundevenl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundevenl (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpl (long double __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpl (long double __x, int __round, unsigned int __width) throw ()
                            ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpl (long double __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpl (long double __x, int __round, unsigned int __width) throw ()
                              ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpxl (long double __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxl (long double __x, int __round, unsigned int __width) throw ()
                             ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpxl (long double __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxl (long double __x, int __round, unsigned int __width) throw ()
                               ;
#pragma empty_line
#pragma empty_line
extern long double fmaxmagl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fmaxmagl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern long double fminmagl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fminmagl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalorderl (long double __x, long double __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalordermagl (long double __x, long double __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int canonicalizel (long double *__cx, const long double *__x) throw ();
#pragma empty_line
#pragma empty_line
extern long double getpayloadl (const long double *__x) throw (); extern long double __getpayloadl (const long double *__x) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadl (long double *__x, long double __payload) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadsigl (long double *__x, long double __payload) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
#pragma line 351 "/usr/include/math.h" 2 3 4
#pragma line 389 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
#pragma line 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 acosf32 (_Float32 __x) throw (); extern _Float32 __acosf32 (_Float32 __x) throw ();
#pragma empty_line
extern _Float32 asinf32 (_Float32 __x) throw (); extern _Float32 __asinf32 (_Float32 __x) throw ();
#pragma empty_line
extern _Float32 atanf32 (_Float32 __x) throw (); extern _Float32 __atanf32 (_Float32 __x) throw ();
#pragma empty_line
extern _Float32 atan2f32 (_Float32 __y, _Float32 __x) throw (); extern _Float32 __atan2f32 (_Float32 __y, _Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
 extern _Float32 cosf32 (_Float32 __x) throw (); extern _Float32 __cosf32 (_Float32 __x) throw ();
#pragma empty_line
 extern _Float32 sinf32 (_Float32 __x) throw (); extern _Float32 __sinf32 (_Float32 __x) throw ();
#pragma empty_line
extern _Float32 tanf32 (_Float32 __x) throw (); extern _Float32 __tanf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 coshf32 (_Float32 __x) throw (); extern _Float32 __coshf32 (_Float32 __x) throw ();
#pragma empty_line
extern _Float32 sinhf32 (_Float32 __x) throw (); extern _Float32 __sinhf32 (_Float32 __x) throw ();
#pragma empty_line
extern _Float32 tanhf32 (_Float32 __x) throw (); extern _Float32 __tanhf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern void sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) throw (); extern void __sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) throw ()
                                                        ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 acoshf32 (_Float32 __x) throw (); extern _Float32 __acoshf32 (_Float32 __x) throw ();
#pragma empty_line
extern _Float32 asinhf32 (_Float32 __x) throw (); extern _Float32 __asinhf32 (_Float32 __x) throw ();
#pragma empty_line
extern _Float32 atanhf32 (_Float32 __x) throw (); extern _Float32 __atanhf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern _Float32 expf32 (_Float32 __x) throw (); extern _Float32 __expf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32 frexpf32 (_Float32 __x, int *__exponent) throw (); extern _Float32 __frexpf32 (_Float32 __x, int *__exponent) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32 ldexpf32 (_Float32 __x, int __exponent) throw (); extern _Float32 __ldexpf32 (_Float32 __x, int __exponent) throw ();
#pragma empty_line
#pragma empty_line
 extern _Float32 logf32 (_Float32 __x) throw (); extern _Float32 __logf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32 log10f32 (_Float32 __x) throw (); extern _Float32 __log10f32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32 modff32 (_Float32 __x, _Float32 *__iptr) throw (); extern _Float32 __modff32 (_Float32 __x, _Float32 *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 exp10f32 (_Float32 __x) throw (); extern _Float32 __exp10f32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 expm1f32 (_Float32 __x) throw (); extern _Float32 __expm1f32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32 log1pf32 (_Float32 __x) throw (); extern _Float32 __log1pf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32 logbf32 (_Float32 __x) throw (); extern _Float32 __logbf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 exp2f32 (_Float32 __x) throw (); extern _Float32 __exp2f32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32 log2f32 (_Float32 __x) throw (); extern _Float32 __log2f32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern _Float32 powf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __powf32 (_Float32 __x, _Float32 __y) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32 sqrtf32 (_Float32 __x) throw (); extern _Float32 __sqrtf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 hypotf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __hypotf32 (_Float32 __x, _Float32 __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 cbrtf32 (_Float32 __x) throw (); extern _Float32 __cbrtf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 ceilf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __ceilf32 (_Float32 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float32 fabsf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __fabsf32 (_Float32 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float32 floorf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __floorf32 (_Float32 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float32 fmodf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __fmodf32 (_Float32 __x, _Float32 __y) throw ();
#pragma line 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 copysignf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __copysignf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 nanf32 (const char *__tagb) throw () __attribute__ ((__const__)); extern _Float32 __nanf32 (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 j0f32 (_Float32) throw (); extern _Float32 __j0f32 (_Float32) throw ();
extern _Float32 j1f32 (_Float32) throw (); extern _Float32 __j1f32 (_Float32) throw ();
extern _Float32 jnf32 (int, _Float32) throw (); extern _Float32 __jnf32 (int, _Float32) throw ();
extern _Float32 y0f32 (_Float32) throw (); extern _Float32 __y0f32 (_Float32) throw ();
extern _Float32 y1f32 (_Float32) throw (); extern _Float32 __y1f32 (_Float32) throw ();
extern _Float32 ynf32 (int, _Float32) throw (); extern _Float32 __ynf32 (int, _Float32) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 erff32 (_Float32) throw (); extern _Float32 __erff32 (_Float32) throw ();
extern _Float32 erfcf32 (_Float32) throw (); extern _Float32 __erfcf32 (_Float32) throw ();
extern _Float32 lgammaf32 (_Float32) throw (); extern _Float32 __lgammaf32 (_Float32) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 tgammaf32 (_Float32) throw (); extern _Float32 __tgammaf32 (_Float32) throw ();
#pragma line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 lgammaf32_r (_Float32, int *__signgamp) throw (); extern _Float32 __lgammaf32_r (_Float32, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 rintf32 (_Float32 __x) throw (); extern _Float32 __rintf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32 nextafterf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __nextafterf32 (_Float32 __x, _Float32 __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 nextdownf32 (_Float32 __x) throw (); extern _Float32 __nextdownf32 (_Float32 __x) throw ();
#pragma empty_line
extern _Float32 nextupf32 (_Float32 __x) throw (); extern _Float32 __nextupf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 remainderf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __remainderf32 (_Float32 __x, _Float32 __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 scalbnf32 (_Float32 __x, int __n) throw (); extern _Float32 __scalbnf32 (_Float32 __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ilogbf32 (_Float32 __x) throw (); extern int __ilogbf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int llogbf32 (_Float32 __x) throw (); extern long int __llogbf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 scalblnf32 (_Float32 __x, long int __n) throw (); extern _Float32 __scalblnf32 (_Float32 __x, long int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 nearbyintf32 (_Float32 __x) throw (); extern _Float32 __nearbyintf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 roundf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __roundf32 (_Float32 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 truncf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __truncf32 (_Float32 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 remquof32 (_Float32 __x, _Float32 __y, int *__quo) throw (); extern _Float32 __remquof32 (_Float32 __x, _Float32 __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lrintf32 (_Float32 __x) throw (); extern long int __lrintf32 (_Float32 __x) throw ();
__extension__
extern long long int llrintf32 (_Float32 __x) throw (); extern long long int __llrintf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lroundf32 (_Float32 __x) throw (); extern long int __lroundf32 (_Float32 __x) throw ();
__extension__
extern long long int llroundf32 (_Float32 __x) throw (); extern long long int __llroundf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 fdimf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __fdimf32 (_Float32 __x, _Float32 __y) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32 fmaxf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __fmaxf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float32 fminf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __fminf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float32 fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) throw (); extern _Float32 __fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32 roundevenf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __roundevenf32 (_Float32 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpf32 (_Float32 __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf32 (_Float32 __x, int __round, unsigned int __width) throw ()
                            ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpf32 (_Float32 __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf32 (_Float32 __x, int __round, unsigned int __width) throw ()
                              ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpxf32 (_Float32 __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf32 (_Float32 __x, int __round, unsigned int __width) throw ()
                             ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) throw ()
                               ;
#pragma empty_line
#pragma empty_line
extern _Float32 fmaxmagf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __fmaxmagf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float32 fminmagf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __fminmagf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalorderf32 (_Float32 __x, _Float32 __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalordermagf32 (_Float32 __x, _Float32 __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int canonicalizef32 (_Float32 *__cx, const _Float32 *__x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32 getpayloadf32 (const _Float32 *__x) throw (); extern _Float32 __getpayloadf32 (const _Float32 *__x) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadf32 (_Float32 *__x, _Float32 __payload) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadsigf32 (_Float32 *__x, _Float32 __payload) throw ();
#pragma line 390 "/usr/include/math.h" 2 3 4
#pragma line 406 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
#pragma line 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 acosf64 (_Float64 __x) throw (); extern _Float64 __acosf64 (_Float64 __x) throw ();
#pragma empty_line
extern _Float64 asinf64 (_Float64 __x) throw (); extern _Float64 __asinf64 (_Float64 __x) throw ();
#pragma empty_line
extern _Float64 atanf64 (_Float64 __x) throw (); extern _Float64 __atanf64 (_Float64 __x) throw ();
#pragma empty_line
extern _Float64 atan2f64 (_Float64 __y, _Float64 __x) throw (); extern _Float64 __atan2f64 (_Float64 __y, _Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
 extern _Float64 cosf64 (_Float64 __x) throw (); extern _Float64 __cosf64 (_Float64 __x) throw ();
#pragma empty_line
 extern _Float64 sinf64 (_Float64 __x) throw (); extern _Float64 __sinf64 (_Float64 __x) throw ();
#pragma empty_line
extern _Float64 tanf64 (_Float64 __x) throw (); extern _Float64 __tanf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 coshf64 (_Float64 __x) throw (); extern _Float64 __coshf64 (_Float64 __x) throw ();
#pragma empty_line
extern _Float64 sinhf64 (_Float64 __x) throw (); extern _Float64 __sinhf64 (_Float64 __x) throw ();
#pragma empty_line
extern _Float64 tanhf64 (_Float64 __x) throw (); extern _Float64 __tanhf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern void sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) throw (); extern void __sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) throw ()
                                                        ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 acoshf64 (_Float64 __x) throw (); extern _Float64 __acoshf64 (_Float64 __x) throw ();
#pragma empty_line
extern _Float64 asinhf64 (_Float64 __x) throw (); extern _Float64 __asinhf64 (_Float64 __x) throw ();
#pragma empty_line
extern _Float64 atanhf64 (_Float64 __x) throw (); extern _Float64 __atanhf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern _Float64 expf64 (_Float64 __x) throw (); extern _Float64 __expf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64 frexpf64 (_Float64 __x, int *__exponent) throw (); extern _Float64 __frexpf64 (_Float64 __x, int *__exponent) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64 ldexpf64 (_Float64 __x, int __exponent) throw (); extern _Float64 __ldexpf64 (_Float64 __x, int __exponent) throw ();
#pragma empty_line
#pragma empty_line
 extern _Float64 logf64 (_Float64 __x) throw (); extern _Float64 __logf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64 log10f64 (_Float64 __x) throw (); extern _Float64 __log10f64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64 modff64 (_Float64 __x, _Float64 *__iptr) throw (); extern _Float64 __modff64 (_Float64 __x, _Float64 *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 exp10f64 (_Float64 __x) throw (); extern _Float64 __exp10f64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 expm1f64 (_Float64 __x) throw (); extern _Float64 __expm1f64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64 log1pf64 (_Float64 __x) throw (); extern _Float64 __log1pf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64 logbf64 (_Float64 __x) throw (); extern _Float64 __logbf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 exp2f64 (_Float64 __x) throw (); extern _Float64 __exp2f64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64 log2f64 (_Float64 __x) throw (); extern _Float64 __log2f64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern _Float64 powf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __powf64 (_Float64 __x, _Float64 __y) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64 sqrtf64 (_Float64 __x) throw (); extern _Float64 __sqrtf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 hypotf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __hypotf64 (_Float64 __x, _Float64 __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 cbrtf64 (_Float64 __x) throw (); extern _Float64 __cbrtf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 ceilf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __ceilf64 (_Float64 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float64 fabsf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __fabsf64 (_Float64 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float64 floorf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __floorf64 (_Float64 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float64 fmodf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __fmodf64 (_Float64 __x, _Float64 __y) throw ();
#pragma line 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 copysignf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __copysignf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 nanf64 (const char *__tagb) throw () __attribute__ ((__const__)); extern _Float64 __nanf64 (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 j0f64 (_Float64) throw (); extern _Float64 __j0f64 (_Float64) throw ();
extern _Float64 j1f64 (_Float64) throw (); extern _Float64 __j1f64 (_Float64) throw ();
extern _Float64 jnf64 (int, _Float64) throw (); extern _Float64 __jnf64 (int, _Float64) throw ();
extern _Float64 y0f64 (_Float64) throw (); extern _Float64 __y0f64 (_Float64) throw ();
extern _Float64 y1f64 (_Float64) throw (); extern _Float64 __y1f64 (_Float64) throw ();
extern _Float64 ynf64 (int, _Float64) throw (); extern _Float64 __ynf64 (int, _Float64) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 erff64 (_Float64) throw (); extern _Float64 __erff64 (_Float64) throw ();
extern _Float64 erfcf64 (_Float64) throw (); extern _Float64 __erfcf64 (_Float64) throw ();
extern _Float64 lgammaf64 (_Float64) throw (); extern _Float64 __lgammaf64 (_Float64) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 tgammaf64 (_Float64) throw (); extern _Float64 __tgammaf64 (_Float64) throw ();
#pragma line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 lgammaf64_r (_Float64, int *__signgamp) throw (); extern _Float64 __lgammaf64_r (_Float64, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 rintf64 (_Float64 __x) throw (); extern _Float64 __rintf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64 nextafterf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __nextafterf64 (_Float64 __x, _Float64 __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 nextdownf64 (_Float64 __x) throw (); extern _Float64 __nextdownf64 (_Float64 __x) throw ();
#pragma empty_line
extern _Float64 nextupf64 (_Float64 __x) throw (); extern _Float64 __nextupf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 remainderf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __remainderf64 (_Float64 __x, _Float64 __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 scalbnf64 (_Float64 __x, int __n) throw (); extern _Float64 __scalbnf64 (_Float64 __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ilogbf64 (_Float64 __x) throw (); extern int __ilogbf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int llogbf64 (_Float64 __x) throw (); extern long int __llogbf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 scalblnf64 (_Float64 __x, long int __n) throw (); extern _Float64 __scalblnf64 (_Float64 __x, long int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 nearbyintf64 (_Float64 __x) throw (); extern _Float64 __nearbyintf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 roundf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __roundf64 (_Float64 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 truncf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __truncf64 (_Float64 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 remquof64 (_Float64 __x, _Float64 __y, int *__quo) throw (); extern _Float64 __remquof64 (_Float64 __x, _Float64 __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lrintf64 (_Float64 __x) throw (); extern long int __lrintf64 (_Float64 __x) throw ();
__extension__
extern long long int llrintf64 (_Float64 __x) throw (); extern long long int __llrintf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lroundf64 (_Float64 __x) throw (); extern long int __lroundf64 (_Float64 __x) throw ();
__extension__
extern long long int llroundf64 (_Float64 __x) throw (); extern long long int __llroundf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 fdimf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __fdimf64 (_Float64 __x, _Float64 __y) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64 fmaxf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __fmaxf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float64 fminf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __fminf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float64 fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) throw (); extern _Float64 __fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64 roundevenf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __roundevenf64 (_Float64 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpf64 (_Float64 __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf64 (_Float64 __x, int __round, unsigned int __width) throw ()
                            ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpf64 (_Float64 __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf64 (_Float64 __x, int __round, unsigned int __width) throw ()
                              ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpxf64 (_Float64 __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf64 (_Float64 __x, int __round, unsigned int __width) throw ()
                             ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) throw ()
                               ;
#pragma empty_line
#pragma empty_line
extern _Float64 fmaxmagf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __fmaxmagf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float64 fminmagf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __fminmagf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalorderf64 (_Float64 __x, _Float64 __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalordermagf64 (_Float64 __x, _Float64 __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int canonicalizef64 (_Float64 *__cx, const _Float64 *__x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64 getpayloadf64 (const _Float64 *__x) throw (); extern _Float64 __getpayloadf64 (const _Float64 *__x) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadf64 (_Float64 *__x, _Float64 __payload) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadsigf64 (_Float64 *__x, _Float64 __payload) throw ();
#pragma line 407 "/usr/include/math.h" 2 3 4
#pragma line 420 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
#pragma line 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyf128 (_Float128 __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __signbitf128 (_Float128 __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __isinff128 (_Float128 __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __finitef128 (_Float128 __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __isnanf128 (_Float128 __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int __iseqsigf128 (_Float128 __x, _Float128 __y) throw ();
#pragma empty_line
#pragma empty_line
extern int __issignalingf128 (_Float128 __value) throw ()
     __attribute__ ((__const__));
#pragma line 421 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
#pragma line 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float128 acosf128 (_Float128 __x) throw (); extern _Float128 __acosf128 (_Float128 __x) throw ();
#pragma empty_line
extern _Float128 asinf128 (_Float128 __x) throw (); extern _Float128 __asinf128 (_Float128 __x) throw ();
#pragma empty_line
extern _Float128 atanf128 (_Float128 __x) throw (); extern _Float128 __atanf128 (_Float128 __x) throw ();
#pragma empty_line
extern _Float128 atan2f128 (_Float128 __y, _Float128 __x) throw (); extern _Float128 __atan2f128 (_Float128 __y, _Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
 extern _Float128 cosf128 (_Float128 __x) throw (); extern _Float128 __cosf128 (_Float128 __x) throw ();
#pragma empty_line
 extern _Float128 sinf128 (_Float128 __x) throw (); extern _Float128 __sinf128 (_Float128 __x) throw ();
#pragma empty_line
extern _Float128 tanf128 (_Float128 __x) throw (); extern _Float128 __tanf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 coshf128 (_Float128 __x) throw (); extern _Float128 __coshf128 (_Float128 __x) throw ();
#pragma empty_line
extern _Float128 sinhf128 (_Float128 __x) throw (); extern _Float128 __sinhf128 (_Float128 __x) throw ();
#pragma empty_line
extern _Float128 tanhf128 (_Float128 __x) throw (); extern _Float128 __tanhf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern void sincosf128 (_Float128 __x, _Float128 *__sinx, _Float128 *__cosx) throw (); extern void __sincosf128 (_Float128 __x, _Float128 *__sinx, _Float128 *__cosx) throw ()
                                                        ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 acoshf128 (_Float128 __x) throw (); extern _Float128 __acoshf128 (_Float128 __x) throw ();
#pragma empty_line
extern _Float128 asinhf128 (_Float128 __x) throw (); extern _Float128 __asinhf128 (_Float128 __x) throw ();
#pragma empty_line
extern _Float128 atanhf128 (_Float128 __x) throw (); extern _Float128 __atanhf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern _Float128 expf128 (_Float128 __x) throw (); extern _Float128 __expf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float128 frexpf128 (_Float128 __x, int *__exponent) throw (); extern _Float128 __frexpf128 (_Float128 __x, int *__exponent) throw ();
#pragma empty_line
#pragma empty_line
extern _Float128 ldexpf128 (_Float128 __x, int __exponent) throw (); extern _Float128 __ldexpf128 (_Float128 __x, int __exponent) throw ();
#pragma empty_line
#pragma empty_line
 extern _Float128 logf128 (_Float128 __x) throw (); extern _Float128 __logf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float128 log10f128 (_Float128 __x) throw (); extern _Float128 __log10f128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float128 modff128 (_Float128 __x, _Float128 *__iptr) throw (); extern _Float128 __modff128 (_Float128 __x, _Float128 *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 exp10f128 (_Float128 __x) throw (); extern _Float128 __exp10f128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 expm1f128 (_Float128 __x) throw (); extern _Float128 __expm1f128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float128 log1pf128 (_Float128 __x) throw (); extern _Float128 __log1pf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float128 logbf128 (_Float128 __x) throw (); extern _Float128 __logbf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 exp2f128 (_Float128 __x) throw (); extern _Float128 __exp2f128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float128 log2f128 (_Float128 __x) throw (); extern _Float128 __log2f128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern _Float128 powf128 (_Float128 __x, _Float128 __y) throw (); extern _Float128 __powf128 (_Float128 __x, _Float128 __y) throw ();
#pragma empty_line
#pragma empty_line
extern _Float128 sqrtf128 (_Float128 __x) throw (); extern _Float128 __sqrtf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 hypotf128 (_Float128 __x, _Float128 __y) throw (); extern _Float128 __hypotf128 (_Float128 __x, _Float128 __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 cbrtf128 (_Float128 __x) throw (); extern _Float128 __cbrtf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 ceilf128 (_Float128 __x) throw () __attribute__ ((__const__)); extern _Float128 __ceilf128 (_Float128 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float128 fabsf128 (_Float128 __x) throw () __attribute__ ((__const__)); extern _Float128 __fabsf128 (_Float128 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float128 floorf128 (_Float128 __x) throw () __attribute__ ((__const__)); extern _Float128 __floorf128 (_Float128 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float128 fmodf128 (_Float128 __x, _Float128 __y) throw (); extern _Float128 __fmodf128 (_Float128 __x, _Float128 __y) throw ();
#pragma line 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float128 copysignf128 (_Float128 __x, _Float128 __y) throw () __attribute__ ((__const__)); extern _Float128 __copysignf128 (_Float128 __x, _Float128 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 nanf128 (const char *__tagb) throw () __attribute__ ((__const__)); extern _Float128 __nanf128 (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float128 j0f128 (_Float128) throw (); extern _Float128 __j0f128 (_Float128) throw ();
extern _Float128 j1f128 (_Float128) throw (); extern _Float128 __j1f128 (_Float128) throw ();
extern _Float128 jnf128 (int, _Float128) throw (); extern _Float128 __jnf128 (int, _Float128) throw ();
extern _Float128 y0f128 (_Float128) throw (); extern _Float128 __y0f128 (_Float128) throw ();
extern _Float128 y1f128 (_Float128) throw (); extern _Float128 __y1f128 (_Float128) throw ();
extern _Float128 ynf128 (int, _Float128) throw (); extern _Float128 __ynf128 (int, _Float128) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 erff128 (_Float128) throw (); extern _Float128 __erff128 (_Float128) throw ();
extern _Float128 erfcf128 (_Float128) throw (); extern _Float128 __erfcf128 (_Float128) throw ();
extern _Float128 lgammaf128 (_Float128) throw (); extern _Float128 __lgammaf128 (_Float128) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 tgammaf128 (_Float128) throw (); extern _Float128 __tgammaf128 (_Float128) throw ();
#pragma line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float128 lgammaf128_r (_Float128, int *__signgamp) throw (); extern _Float128 __lgammaf128_r (_Float128, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 rintf128 (_Float128 __x) throw (); extern _Float128 __rintf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float128 nextafterf128 (_Float128 __x, _Float128 __y) throw (); extern _Float128 __nextafterf128 (_Float128 __x, _Float128 __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 nextdownf128 (_Float128 __x) throw (); extern _Float128 __nextdownf128 (_Float128 __x) throw ();
#pragma empty_line
extern _Float128 nextupf128 (_Float128 __x) throw (); extern _Float128 __nextupf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 remainderf128 (_Float128 __x, _Float128 __y) throw (); extern _Float128 __remainderf128 (_Float128 __x, _Float128 __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 scalbnf128 (_Float128 __x, int __n) throw (); extern _Float128 __scalbnf128 (_Float128 __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ilogbf128 (_Float128 __x) throw (); extern int __ilogbf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int llogbf128 (_Float128 __x) throw (); extern long int __llogbf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 scalblnf128 (_Float128 __x, long int __n) throw (); extern _Float128 __scalblnf128 (_Float128 __x, long int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 nearbyintf128 (_Float128 __x) throw (); extern _Float128 __nearbyintf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 roundf128 (_Float128 __x) throw () __attribute__ ((__const__)); extern _Float128 __roundf128 (_Float128 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 truncf128 (_Float128 __x) throw () __attribute__ ((__const__)); extern _Float128 __truncf128 (_Float128 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 remquof128 (_Float128 __x, _Float128 __y, int *__quo) throw (); extern _Float128 __remquof128 (_Float128 __x, _Float128 __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lrintf128 (_Float128 __x) throw (); extern long int __lrintf128 (_Float128 __x) throw ();
__extension__
extern long long int llrintf128 (_Float128 __x) throw (); extern long long int __llrintf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lroundf128 (_Float128 __x) throw (); extern long int __lroundf128 (_Float128 __x) throw ();
__extension__
extern long long int llroundf128 (_Float128 __x) throw (); extern long long int __llroundf128 (_Float128 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 fdimf128 (_Float128 __x, _Float128 __y) throw (); extern _Float128 __fdimf128 (_Float128 __x, _Float128 __y) throw ();
#pragma empty_line
#pragma empty_line
extern _Float128 fmaxf128 (_Float128 __x, _Float128 __y) throw () __attribute__ ((__const__)); extern _Float128 __fmaxf128 (_Float128 __x, _Float128 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float128 fminf128 (_Float128 __x, _Float128 __y) throw () __attribute__ ((__const__)); extern _Float128 __fminf128 (_Float128 __x, _Float128 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float128 fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) throw (); extern _Float128 __fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float128 roundevenf128 (_Float128 __x) throw () __attribute__ ((__const__)); extern _Float128 __roundevenf128 (_Float128 __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpf128 (_Float128 __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf128 (_Float128 __x, int __round, unsigned int __width) throw ()
                            ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpf128 (_Float128 __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf128 (_Float128 __x, int __round, unsigned int __width) throw ()
                              ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpxf128 (_Float128 __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf128 (_Float128 __x, int __round, unsigned int __width) throw ()
                             ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpxf128 (_Float128 __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf128 (_Float128 __x, int __round, unsigned int __width) throw ()
                               ;
#pragma empty_line
#pragma empty_line
extern _Float128 fmaxmagf128 (_Float128 __x, _Float128 __y) throw () __attribute__ ((__const__)); extern _Float128 __fmaxmagf128 (_Float128 __x, _Float128 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float128 fminmagf128 (_Float128 __x, _Float128 __y) throw () __attribute__ ((__const__)); extern _Float128 __fminmagf128 (_Float128 __x, _Float128 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalorderf128 (_Float128 __x, _Float128 __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalordermagf128 (_Float128 __x, _Float128 __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int canonicalizef128 (_Float128 *__cx, const _Float128 *__x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float128 getpayloadf128 (const _Float128 *__x) throw (); extern _Float128 __getpayloadf128 (const _Float128 *__x) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadf128 (_Float128 *__x, _Float128 __payload) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadsigf128 (_Float128 *__x, _Float128 __payload) throw ();
#pragma line 424 "/usr/include/math.h" 2 3 4
#pragma line 440 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
#pragma line 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x acosf32x (_Float32x __x) throw (); extern _Float32x __acosf32x (_Float32x __x) throw ();
#pragma empty_line
extern _Float32x asinf32x (_Float32x __x) throw (); extern _Float32x __asinf32x (_Float32x __x) throw ();
#pragma empty_line
extern _Float32x atanf32x (_Float32x __x) throw (); extern _Float32x __atanf32x (_Float32x __x) throw ();
#pragma empty_line
extern _Float32x atan2f32x (_Float32x __y, _Float32x __x) throw (); extern _Float32x __atan2f32x (_Float32x __y, _Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
 extern _Float32x cosf32x (_Float32x __x) throw (); extern _Float32x __cosf32x (_Float32x __x) throw ();
#pragma empty_line
 extern _Float32x sinf32x (_Float32x __x) throw (); extern _Float32x __sinf32x (_Float32x __x) throw ();
#pragma empty_line
extern _Float32x tanf32x (_Float32x __x) throw (); extern _Float32x __tanf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x coshf32x (_Float32x __x) throw (); extern _Float32x __coshf32x (_Float32x __x) throw ();
#pragma empty_line
extern _Float32x sinhf32x (_Float32x __x) throw (); extern _Float32x __sinhf32x (_Float32x __x) throw ();
#pragma empty_line
extern _Float32x tanhf32x (_Float32x __x) throw (); extern _Float32x __tanhf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern void sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) throw (); extern void __sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) throw ()
                                                        ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x acoshf32x (_Float32x __x) throw (); extern _Float32x __acoshf32x (_Float32x __x) throw ();
#pragma empty_line
extern _Float32x asinhf32x (_Float32x __x) throw (); extern _Float32x __asinhf32x (_Float32x __x) throw ();
#pragma empty_line
extern _Float32x atanhf32x (_Float32x __x) throw (); extern _Float32x __atanhf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern _Float32x expf32x (_Float32x __x) throw (); extern _Float32x __expf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32x frexpf32x (_Float32x __x, int *__exponent) throw (); extern _Float32x __frexpf32x (_Float32x __x, int *__exponent) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32x ldexpf32x (_Float32x __x, int __exponent) throw (); extern _Float32x __ldexpf32x (_Float32x __x, int __exponent) throw ();
#pragma empty_line
#pragma empty_line
 extern _Float32x logf32x (_Float32x __x) throw (); extern _Float32x __logf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32x log10f32x (_Float32x __x) throw (); extern _Float32x __log10f32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32x modff32x (_Float32x __x, _Float32x *__iptr) throw (); extern _Float32x __modff32x (_Float32x __x, _Float32x *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x exp10f32x (_Float32x __x) throw (); extern _Float32x __exp10f32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x expm1f32x (_Float32x __x) throw (); extern _Float32x __expm1f32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32x log1pf32x (_Float32x __x) throw (); extern _Float32x __log1pf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32x logbf32x (_Float32x __x) throw (); extern _Float32x __logbf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x exp2f32x (_Float32x __x) throw (); extern _Float32x __exp2f32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32x log2f32x (_Float32x __x) throw (); extern _Float32x __log2f32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern _Float32x powf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __powf32x (_Float32x __x, _Float32x __y) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32x sqrtf32x (_Float32x __x) throw (); extern _Float32x __sqrtf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x hypotf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __hypotf32x (_Float32x __x, _Float32x __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x cbrtf32x (_Float32x __x) throw (); extern _Float32x __cbrtf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x ceilf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __ceilf32x (_Float32x __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float32x fabsf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __fabsf32x (_Float32x __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float32x floorf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __floorf32x (_Float32x __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float32x fmodf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __fmodf32x (_Float32x __x, _Float32x __y) throw ();
#pragma line 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x copysignf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __copysignf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x nanf32x (const char *__tagb) throw () __attribute__ ((__const__)); extern _Float32x __nanf32x (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x j0f32x (_Float32x) throw (); extern _Float32x __j0f32x (_Float32x) throw ();
extern _Float32x j1f32x (_Float32x) throw (); extern _Float32x __j1f32x (_Float32x) throw ();
extern _Float32x jnf32x (int, _Float32x) throw (); extern _Float32x __jnf32x (int, _Float32x) throw ();
extern _Float32x y0f32x (_Float32x) throw (); extern _Float32x __y0f32x (_Float32x) throw ();
extern _Float32x y1f32x (_Float32x) throw (); extern _Float32x __y1f32x (_Float32x) throw ();
extern _Float32x ynf32x (int, _Float32x) throw (); extern _Float32x __ynf32x (int, _Float32x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x erff32x (_Float32x) throw (); extern _Float32x __erff32x (_Float32x) throw ();
extern _Float32x erfcf32x (_Float32x) throw (); extern _Float32x __erfcf32x (_Float32x) throw ();
extern _Float32x lgammaf32x (_Float32x) throw (); extern _Float32x __lgammaf32x (_Float32x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x tgammaf32x (_Float32x) throw (); extern _Float32x __tgammaf32x (_Float32x) throw ();
#pragma line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x lgammaf32x_r (_Float32x, int *__signgamp) throw (); extern _Float32x __lgammaf32x_r (_Float32x, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x rintf32x (_Float32x __x) throw (); extern _Float32x __rintf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32x nextafterf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __nextafterf32x (_Float32x __x, _Float32x __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x nextdownf32x (_Float32x __x) throw (); extern _Float32x __nextdownf32x (_Float32x __x) throw ();
#pragma empty_line
extern _Float32x nextupf32x (_Float32x __x) throw (); extern _Float32x __nextupf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x remainderf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __remainderf32x (_Float32x __x, _Float32x __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x scalbnf32x (_Float32x __x, int __n) throw (); extern _Float32x __scalbnf32x (_Float32x __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ilogbf32x (_Float32x __x) throw (); extern int __ilogbf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int llogbf32x (_Float32x __x) throw (); extern long int __llogbf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x scalblnf32x (_Float32x __x, long int __n) throw (); extern _Float32x __scalblnf32x (_Float32x __x, long int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x nearbyintf32x (_Float32x __x) throw (); extern _Float32x __nearbyintf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x roundf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __roundf32x (_Float32x __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x truncf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __truncf32x (_Float32x __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x remquof32x (_Float32x __x, _Float32x __y, int *__quo) throw (); extern _Float32x __remquof32x (_Float32x __x, _Float32x __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lrintf32x (_Float32x __x) throw (); extern long int __lrintf32x (_Float32x __x) throw ();
__extension__
extern long long int llrintf32x (_Float32x __x) throw (); extern long long int __llrintf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lroundf32x (_Float32x __x) throw (); extern long int __lroundf32x (_Float32x __x) throw ();
__extension__
extern long long int llroundf32x (_Float32x __x) throw (); extern long long int __llroundf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x fdimf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __fdimf32x (_Float32x __x, _Float32x __y) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32x fmaxf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __fmaxf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float32x fminf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __fminf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float32x fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) throw (); extern _Float32x __fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float32x roundevenf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __roundevenf32x (_Float32x __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpf32x (_Float32x __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf32x (_Float32x __x, int __round, unsigned int __width) throw ()
                            ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpf32x (_Float32x __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf32x (_Float32x __x, int __round, unsigned int __width) throw ()
                              ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpxf32x (_Float32x __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf32x (_Float32x __x, int __round, unsigned int __width) throw ()
                             ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) throw ()
                               ;
#pragma empty_line
#pragma empty_line
extern _Float32x fmaxmagf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __fmaxmagf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float32x fminmagf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __fminmagf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalorderf32x (_Float32x __x, _Float32x __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalordermagf32x (_Float32x __x, _Float32x __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int canonicalizef32x (_Float32x *__cx, const _Float32x *__x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float32x getpayloadf32x (const _Float32x *__x) throw (); extern _Float32x __getpayloadf32x (const _Float32x *__x) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadf32x (_Float32x *__x, _Float32x __payload) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadsigf32x (_Float32x *__x, _Float32x __payload) throw ();
#pragma line 441 "/usr/include/math.h" 2 3 4
#pragma line 457 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
#pragma line 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x acosf64x (_Float64x __x) throw (); extern _Float64x __acosf64x (_Float64x __x) throw ();
#pragma empty_line
extern _Float64x asinf64x (_Float64x __x) throw (); extern _Float64x __asinf64x (_Float64x __x) throw ();
#pragma empty_line
extern _Float64x atanf64x (_Float64x __x) throw (); extern _Float64x __atanf64x (_Float64x __x) throw ();
#pragma empty_line
extern _Float64x atan2f64x (_Float64x __y, _Float64x __x) throw (); extern _Float64x __atan2f64x (_Float64x __y, _Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
 extern _Float64x cosf64x (_Float64x __x) throw (); extern _Float64x __cosf64x (_Float64x __x) throw ();
#pragma empty_line
 extern _Float64x sinf64x (_Float64x __x) throw (); extern _Float64x __sinf64x (_Float64x __x) throw ();
#pragma empty_line
extern _Float64x tanf64x (_Float64x __x) throw (); extern _Float64x __tanf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x coshf64x (_Float64x __x) throw (); extern _Float64x __coshf64x (_Float64x __x) throw ();
#pragma empty_line
extern _Float64x sinhf64x (_Float64x __x) throw (); extern _Float64x __sinhf64x (_Float64x __x) throw ();
#pragma empty_line
extern _Float64x tanhf64x (_Float64x __x) throw (); extern _Float64x __tanhf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern void sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) throw (); extern void __sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) throw ()
                                                        ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x acoshf64x (_Float64x __x) throw (); extern _Float64x __acoshf64x (_Float64x __x) throw ();
#pragma empty_line
extern _Float64x asinhf64x (_Float64x __x) throw (); extern _Float64x __asinhf64x (_Float64x __x) throw ();
#pragma empty_line
extern _Float64x atanhf64x (_Float64x __x) throw (); extern _Float64x __atanhf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern _Float64x expf64x (_Float64x __x) throw (); extern _Float64x __expf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64x frexpf64x (_Float64x __x, int *__exponent) throw (); extern _Float64x __frexpf64x (_Float64x __x, int *__exponent) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64x ldexpf64x (_Float64x __x, int __exponent) throw (); extern _Float64x __ldexpf64x (_Float64x __x, int __exponent) throw ();
#pragma empty_line
#pragma empty_line
 extern _Float64x logf64x (_Float64x __x) throw (); extern _Float64x __logf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64x log10f64x (_Float64x __x) throw (); extern _Float64x __log10f64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64x modff64x (_Float64x __x, _Float64x *__iptr) throw (); extern _Float64x __modff64x (_Float64x __x, _Float64x *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x exp10f64x (_Float64x __x) throw (); extern _Float64x __exp10f64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x expm1f64x (_Float64x __x) throw (); extern _Float64x __expm1f64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64x log1pf64x (_Float64x __x) throw (); extern _Float64x __log1pf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64x logbf64x (_Float64x __x) throw (); extern _Float64x __logbf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x exp2f64x (_Float64x __x) throw (); extern _Float64x __exp2f64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64x log2f64x (_Float64x __x) throw (); extern _Float64x __log2f64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 extern _Float64x powf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __powf64x (_Float64x __x, _Float64x __y) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64x sqrtf64x (_Float64x __x) throw (); extern _Float64x __sqrtf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x hypotf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __hypotf64x (_Float64x __x, _Float64x __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x cbrtf64x (_Float64x __x) throw (); extern _Float64x __cbrtf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x ceilf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __ceilf64x (_Float64x __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float64x fabsf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __fabsf64x (_Float64x __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float64x floorf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __floorf64x (_Float64x __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float64x fmodf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __fmodf64x (_Float64x __x, _Float64x __y) throw ();
#pragma line 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x copysignf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __copysignf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x nanf64x (const char *__tagb) throw () __attribute__ ((__const__)); extern _Float64x __nanf64x (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x j0f64x (_Float64x) throw (); extern _Float64x __j0f64x (_Float64x) throw ();
extern _Float64x j1f64x (_Float64x) throw (); extern _Float64x __j1f64x (_Float64x) throw ();
extern _Float64x jnf64x (int, _Float64x) throw (); extern _Float64x __jnf64x (int, _Float64x) throw ();
extern _Float64x y0f64x (_Float64x) throw (); extern _Float64x __y0f64x (_Float64x) throw ();
extern _Float64x y1f64x (_Float64x) throw (); extern _Float64x __y1f64x (_Float64x) throw ();
extern _Float64x ynf64x (int, _Float64x) throw (); extern _Float64x __ynf64x (int, _Float64x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x erff64x (_Float64x) throw (); extern _Float64x __erff64x (_Float64x) throw ();
extern _Float64x erfcf64x (_Float64x) throw (); extern _Float64x __erfcf64x (_Float64x) throw ();
extern _Float64x lgammaf64x (_Float64x) throw (); extern _Float64x __lgammaf64x (_Float64x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x tgammaf64x (_Float64x) throw (); extern _Float64x __tgammaf64x (_Float64x) throw ();
#pragma line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x lgammaf64x_r (_Float64x, int *__signgamp) throw (); extern _Float64x __lgammaf64x_r (_Float64x, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x rintf64x (_Float64x __x) throw (); extern _Float64x __rintf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64x nextafterf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __nextafterf64x (_Float64x __x, _Float64x __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x nextdownf64x (_Float64x __x) throw (); extern _Float64x __nextdownf64x (_Float64x __x) throw ();
#pragma empty_line
extern _Float64x nextupf64x (_Float64x __x) throw (); extern _Float64x __nextupf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x remainderf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __remainderf64x (_Float64x __x, _Float64x __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x scalbnf64x (_Float64x __x, int __n) throw (); extern _Float64x __scalbnf64x (_Float64x __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ilogbf64x (_Float64x __x) throw (); extern int __ilogbf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int llogbf64x (_Float64x __x) throw (); extern long int __llogbf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x scalblnf64x (_Float64x __x, long int __n) throw (); extern _Float64x __scalblnf64x (_Float64x __x, long int __n) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x nearbyintf64x (_Float64x __x) throw (); extern _Float64x __nearbyintf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x roundf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __roundf64x (_Float64x __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x truncf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __truncf64x (_Float64x __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x remquof64x (_Float64x __x, _Float64x __y, int *__quo) throw (); extern _Float64x __remquof64x (_Float64x __x, _Float64x __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lrintf64x (_Float64x __x) throw (); extern long int __lrintf64x (_Float64x __x) throw ();
__extension__
extern long long int llrintf64x (_Float64x __x) throw (); extern long long int __llrintf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int lroundf64x (_Float64x __x) throw (); extern long int __lroundf64x (_Float64x __x) throw ();
__extension__
extern long long int llroundf64x (_Float64x __x) throw (); extern long long int __llroundf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x fdimf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __fdimf64x (_Float64x __x, _Float64x __y) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64x fmaxf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __fmaxf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float64x fminf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __fminf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float64x fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) throw (); extern _Float64x __fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern _Float64x roundevenf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __roundevenf64x (_Float64x __x) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpf64x (_Float64x __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf64x (_Float64x __x, int __round, unsigned int __width) throw ()
                            ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpf64x (_Float64x __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf64x (_Float64x __x, int __round, unsigned int __width) throw ()
                              ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __intmax_t fromfpxf64x (_Float64x __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf64x (_Float64x __x, int __round, unsigned int __width) throw ()
                             ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __uintmax_t ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) throw ()
                               ;
#pragma empty_line
#pragma empty_line
extern _Float64x fmaxmagf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __fmaxmagf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern _Float64x fminmagf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __fminmagf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalorderf64x (_Float64x __x, _Float64x __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int totalordermagf64x (_Float64x __x, _Float64x __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
extern int canonicalizef64x (_Float64x *__cx, const _Float64x *__x) throw ();
#pragma empty_line
#pragma empty_line
extern _Float64x getpayloadf64x (const _Float64x *__x) throw (); extern _Float64x __getpayloadf64x (const _Float64x *__x) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadf64x (_Float64x *__x, _Float64x __payload) throw ();
#pragma empty_line
#pragma empty_line
extern int setpayloadsigf64x (_Float64x *__x, _Float64x __payload) throw ();
#pragma line 458 "/usr/include/math.h" 2 3 4
#pragma line 489 "/usr/include/math.h" 3 4
extern int signgam;
#pragma line 569 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =
#pragma empty_line
      0,
    FP_INFINITE =
#pragma empty_line
      1,
    FP_ZERO =
#pragma empty_line
      2,
    FP_SUBNORMAL =
#pragma empty_line
      3,
    FP_NORMAL =
#pragma empty_line
      4
  };
#pragma line 684 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/x86_64-linux-gnu/bits/iscanonical.h" 1 3 4
#pragma line 23 "/usr/include/x86_64-linux-gnu/bits/iscanonical.h" 3 4
extern int __iscanonicall (long double __x)
     throw () __attribute__ ((__const__));
#pragma line 46 "/usr/include/x86_64-linux-gnu/bits/iscanonical.h" 3 4
extern "C++" {
inline int iscanonical (float __val) { return ((void) (__typeof (__val)) (__val), 1); }
inline int iscanonical (double __val) { return ((void) (__typeof (__val)) (__val), 1); }
inline int iscanonical (long double __val) { return __iscanonicall (__val); }
#pragma empty_line
inline int iscanonical (_Float128 __val) { return ((void) (__typeof (__val)) (__val), 1); }
#pragma empty_line
}
#pragma line 685 "/usr/include/math.h" 2 3 4
#pragma line 696 "/usr/include/math.h" 3 4
extern "C++" {
inline int issignaling (float __val) { return __issignalingf (__val); }
inline int issignaling (double __val) { return __issignaling (__val); }
inline int
issignaling (long double __val)
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  return __issignalingl (__val);
#pragma empty_line
}
#pragma empty_line
inline int issignaling (_Float128 __val) { return __issignalingf128 (__val); }
#pragma empty_line
}
#pragma line 725 "/usr/include/math.h" 3 4
extern "C++" {
#pragma line 754 "/usr/include/math.h" 3 4
template <class __T> inline bool
iszero (__T __val)
{
  return __val == 0;
}
#pragma empty_line
}
#pragma line 1205 "/usr/include/math.h" 3 4
extern "C++" {
template<typename> struct __iseqsig_type;
#pragma empty_line
template<> struct __iseqsig_type<float>
{
  static int __call (float __x, float __y) throw ()
  {
    return __iseqsigf (__x, __y);
  }
};
#pragma empty_line
template<> struct __iseqsig_type<double>
{
  static int __call (double __x, double __y) throw ()
  {
    return __iseqsig (__x, __y);
  }
};
#pragma empty_line
template<> struct __iseqsig_type<long double>
{
  static int __call (double __x, double __y) throw ()
  {
#pragma empty_line
    return __iseqsigl (__x, __y);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  }
};
#pragma empty_line
#pragma empty_line
template<> struct __iseqsig_type<_Float128>
{
  static int __call (_Float128 __x, _Float128 __y) throw ()
  {
    return __iseqsigf128 (__x, __y);
  }
};
#pragma empty_line
#pragma empty_line
template<typename _T1, typename _T2>
inline int
iseqsig (_T1 __x, _T2 __y) throw ()
{
#pragma empty_line
  typedef decltype (((__x) + (__y) + 0.0f)) _T3;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  return __iseqsig_type<_T3>::__call (__x, __y);
}
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 46 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 2 3
#pragma line 77 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
extern "C++"
{
namespace std __attribute__ ((__visibility__ ("default")))
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  inline constexpr double
  abs(double __x)
  { return __builtin_fabs(__x); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  inline constexpr float
  abs(float __x)
  { return __builtin_fabsf(__x); }
#pragma empty_line
  inline constexpr long double
  abs(long double __x)
  { return __builtin_fabsl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    abs(_Tp __x)
    { return __builtin_fabs(__x); }
#pragma empty_line
  using ::acos;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  acos(float __x)
  { return __builtin_acosf(__x); }
#pragma empty_line
  inline constexpr long double
  acos(long double __x)
  { return __builtin_acosl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    acos(_Tp __x)
    { return __builtin_acos(__x); }
#pragma empty_line
  using ::asin;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  asin(float __x)
  { return __builtin_asinf(__x); }
#pragma empty_line
  inline constexpr long double
  asin(long double __x)
  { return __builtin_asinl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    asin(_Tp __x)
    { return __builtin_asin(__x); }
#pragma empty_line
  using ::atan;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  atan(float __x)
  { return __builtin_atanf(__x); }
#pragma empty_line
  inline constexpr long double
  atan(long double __x)
  { return __builtin_atanl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    atan(_Tp __x)
    { return __builtin_atan(__x); }
#pragma empty_line
  using ::atan2;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  atan2(float __y, float __x)
  { return __builtin_atan2f(__y, __x); }
#pragma empty_line
  inline constexpr long double
  atan2(long double __y, long double __x)
  { return __builtin_atan2l(__y, __x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    inline constexpr
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    atan2(_Tp __y, _Up __x)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return atan2(__type(__y), __type(__x));
    }
#pragma empty_line
  using ::ceil;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  ceil(float __x)
  { return __builtin_ceilf(__x); }
#pragma empty_line
  inline constexpr long double
  ceil(long double __x)
  { return __builtin_ceill(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    ceil(_Tp __x)
    { return __builtin_ceil(__x); }
#pragma empty_line
  using ::cos;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  cos(float __x)
  { return __builtin_cosf(__x); }
#pragma empty_line
  inline constexpr long double
  cos(long double __x)
  { return __builtin_cosl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    cos(_Tp __x)
    { return __builtin_cos(__x); }
#pragma empty_line
  using ::cosh;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  cosh(float __x)
  { return __builtin_coshf(__x); }
#pragma empty_line
  inline constexpr long double
  cosh(long double __x)
  { return __builtin_coshl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    cosh(_Tp __x)
    { return __builtin_cosh(__x); }
#pragma empty_line
  using ::exp;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  exp(float __x)
  { return __builtin_expf(__x); }
#pragma empty_line
  inline constexpr long double
  exp(long double __x)
  { return __builtin_expl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    exp(_Tp __x)
    { return __builtin_exp(__x); }
#pragma empty_line
  using ::fabs;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  fabs(float __x)
  { return __builtin_fabsf(__x); }
#pragma empty_line
  inline constexpr long double
  fabs(long double __x)
  { return __builtin_fabsl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    fabs(_Tp __x)
    { return __builtin_fabs(__x); }
#pragma empty_line
  using ::floor;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  floor(float __x)
  { return __builtin_floorf(__x); }
#pragma empty_line
  inline constexpr long double
  floor(long double __x)
  { return __builtin_floorl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    floor(_Tp __x)
    { return __builtin_floor(__x); }
#pragma empty_line
  using ::fmod;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  fmod(float __x, float __y)
  { return __builtin_fmodf(__x, __y); }
#pragma empty_line
  inline constexpr long double
  fmod(long double __x, long double __y)
  { return __builtin_fmodl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    inline constexpr
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmod(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmod(__type(__x), __type(__y));
    }
#pragma empty_line
  using ::frexp;
#pragma empty_line
#pragma empty_line
  inline float
  frexp(float __x, int* __exp)
  { return __builtin_frexpf(__x, __exp); }
#pragma empty_line
  inline long double
  frexp(long double __x, int* __exp)
  { return __builtin_frexpl(__x, __exp); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    frexp(_Tp __x, int* __exp)
    { return __builtin_frexp(__x, __exp); }
#pragma empty_line
  using ::ldexp;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  ldexp(float __x, int __exp)
  { return __builtin_ldexpf(__x, __exp); }
#pragma empty_line
  inline constexpr long double
  ldexp(long double __x, int __exp)
  { return __builtin_ldexpl(__x, __exp); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    ldexp(_Tp __x, int __exp)
    { return __builtin_ldexp(__x, __exp); }
#pragma empty_line
  using ::log;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  log(float __x)
  { return __builtin_logf(__x); }
#pragma empty_line
  inline constexpr long double
  log(long double __x)
  { return __builtin_logl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    log(_Tp __x)
    { return __builtin_log(__x); }
#pragma empty_line
  using ::log10;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  log10(float __x)
  { return __builtin_log10f(__x); }
#pragma empty_line
  inline constexpr long double
  log10(long double __x)
  { return __builtin_log10l(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    log10(_Tp __x)
    { return __builtin_log10(__x); }
#pragma empty_line
  using ::modf;
#pragma empty_line
#pragma empty_line
  inline float
  modf(float __x, float* __iptr)
  { return __builtin_modff(__x, __iptr); }
#pragma empty_line
  inline long double
  modf(long double __x, long double* __iptr)
  { return __builtin_modfl(__x, __iptr); }
#pragma empty_line
#pragma empty_line
  using ::pow;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  pow(float __x, float __y)
  { return __builtin_powf(__x, __y); }
#pragma empty_line
  inline constexpr long double
  pow(long double __x, long double __y)
  { return __builtin_powl(__x, __y); }
#pragma line 435 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
  template<typename _Tp, typename _Up>
    inline constexpr
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    pow(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return pow(__type(__x), __type(__y));
    }
#pragma empty_line
  using ::sin;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  sin(float __x)
  { return __builtin_sinf(__x); }
#pragma empty_line
  inline constexpr long double
  sin(long double __x)
  { return __builtin_sinl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sin(_Tp __x)
    { return __builtin_sin(__x); }
#pragma empty_line
  using ::sinh;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  sinh(float __x)
  { return __builtin_sinhf(__x); }
#pragma empty_line
  inline constexpr long double
  sinh(long double __x)
  { return __builtin_sinhl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sinh(_Tp __x)
    { return __builtin_sinh(__x); }
#pragma empty_line
  using ::sqrt;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  sqrt(float __x)
  { return __builtin_sqrtf(__x); }
#pragma empty_line
  inline constexpr long double
  sqrt(long double __x)
  { return __builtin_sqrtl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sqrt(_Tp __x)
    { return __builtin_sqrt(__x); }
#pragma empty_line
  using ::tan;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  tan(float __x)
  { return __builtin_tanf(__x); }
#pragma empty_line
  inline constexpr long double
  tan(long double __x)
  { return __builtin_tanl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    tan(_Tp __x)
    { return __builtin_tan(__x); }
#pragma empty_line
  using ::tanh;
#pragma empty_line
#pragma empty_line
  inline constexpr float
  tanh(float __x)
  { return __builtin_tanhf(__x); }
#pragma empty_line
  inline constexpr long double
  tanh(long double __x)
  { return __builtin_tanhl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    tanh(_Tp __x)
    { return __builtin_tanh(__x); }
#pragma empty_line
#pragma empty_line
}
#pragma line 559 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
namespace std __attribute__ ((__visibility__ ("default")))
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  constexpr int
  fpclassify(float __x)
  { return __builtin_fpclassify(0, 1, 4,
    3, 2, __x); }
#pragma empty_line
  constexpr int
  fpclassify(double __x)
  { return __builtin_fpclassify(0, 1, 4,
    3, 2, __x); }
#pragma empty_line
  constexpr int
  fpclassify(long double __x)
  { return __builtin_fpclassify(0, 1, 4,
    3, 2, __x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              int>::__type
    fpclassify(_Tp __x)
    { return __x != 0 ? 4 : 2; }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isfinite(float __x)
  { return __builtin_isfinite(__x); }
#pragma empty_line
  constexpr bool
  isfinite(double __x)
  { return __builtin_isfinite(__x); }
#pragma empty_line
  constexpr bool
  isfinite(long double __x)
  { return __builtin_isfinite(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isfinite(_Tp __x)
    { return true; }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isinf(float __x)
  { return __builtin_isinf(__x); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  constexpr bool
  isinf(double __x)
  { return __builtin_isinf(__x); }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isinf(long double __x)
  { return __builtin_isinf(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isinf(_Tp __x)
    { return false; }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isnan(float __x)
  { return __builtin_isnan(__x); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  constexpr bool
  isnan(double __x)
  { return __builtin_isnan(__x); }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isnan(long double __x)
  { return __builtin_isnan(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isnan(_Tp __x)
    { return false; }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isnormal(float __x)
  { return __builtin_isnormal(__x); }
#pragma empty_line
  constexpr bool
  isnormal(double __x)
  { return __builtin_isnormal(__x); }
#pragma empty_line
  constexpr bool
  isnormal(long double __x)
  { return __builtin_isnormal(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isnormal(_Tp __x)
    { return __x != 0 ? true : false; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  constexpr bool
  signbit(float __x)
  { return __builtin_signbit(__x); }
#pragma empty_line
  constexpr bool
  signbit(double __x)
  { return __builtin_signbit(__x); }
#pragma empty_line
  constexpr bool
  signbit(long double __x)
  { return __builtin_signbit(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    signbit(_Tp __x)
    { return __x < 0 ? true : false; }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isgreater(float __x, float __y)
  { return __builtin_isgreater(__x, __y); }
#pragma empty_line
  constexpr bool
  isgreater(double __x, double __y)
  { return __builtin_isgreater(__x, __y); }
#pragma empty_line
  constexpr bool
  isgreater(long double __x, long double __y)
  { return __builtin_isgreater(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isgreater(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isgreater(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isgreaterequal(float __x, float __y)
  { return __builtin_isgreaterequal(__x, __y); }
#pragma empty_line
  constexpr bool
  isgreaterequal(double __x, double __y)
  { return __builtin_isgreaterequal(__x, __y); }
#pragma empty_line
  constexpr bool
  isgreaterequal(long double __x, long double __y)
  { return __builtin_isgreaterequal(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isgreaterequal(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isgreaterequal(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isless(float __x, float __y)
  { return __builtin_isless(__x, __y); }
#pragma empty_line
  constexpr bool
  isless(double __x, double __y)
  { return __builtin_isless(__x, __y); }
#pragma empty_line
  constexpr bool
  isless(long double __x, long double __y)
  { return __builtin_isless(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isless(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isless(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr bool
  islessequal(float __x, float __y)
  { return __builtin_islessequal(__x, __y); }
#pragma empty_line
  constexpr bool
  islessequal(double __x, double __y)
  { return __builtin_islessequal(__x, __y); }
#pragma empty_line
  constexpr bool
  islessequal(long double __x, long double __y)
  { return __builtin_islessequal(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    islessequal(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_islessequal(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr bool
  islessgreater(float __x, float __y)
  { return __builtin_islessgreater(__x, __y); }
#pragma empty_line
  constexpr bool
  islessgreater(double __x, double __y)
  { return __builtin_islessgreater(__x, __y); }
#pragma empty_line
  constexpr bool
  islessgreater(long double __x, long double __y)
  { return __builtin_islessgreater(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    islessgreater(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_islessgreater(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr bool
  isunordered(float __x, float __y)
  { return __builtin_isunordered(__x, __y); }
#pragma empty_line
  constexpr bool
  isunordered(double __x, double __y)
  { return __builtin_isunordered(__x, __y); }
#pragma empty_line
  constexpr bool
  isunordered(long double __x, long double __y)
  { return __builtin_isunordered(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isunordered(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isunordered(__type(__x), __type(__y));
    }
#pragma line 956 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
#pragma empty_line
}
#pragma line 1072 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
namespace std __attribute__ ((__visibility__ ("default")))
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  using ::double_t;
  using ::float_t;
#pragma empty_line
#pragma empty_line
  using ::acosh;
  using ::acoshf;
  using ::acoshl;
#pragma empty_line
  using ::asinh;
  using ::asinhf;
  using ::asinhl;
#pragma empty_line
  using ::atanh;
  using ::atanhf;
  using ::atanhl;
#pragma empty_line
  using ::cbrt;
  using ::cbrtf;
  using ::cbrtl;
#pragma empty_line
  using ::copysign;
  using ::copysignf;
  using ::copysignl;
#pragma empty_line
  using ::erf;
  using ::erff;
  using ::erfl;
#pragma empty_line
  using ::erfc;
  using ::erfcf;
  using ::erfcl;
#pragma empty_line
  using ::exp2;
  using ::exp2f;
  using ::exp2l;
#pragma empty_line
  using ::expm1;
  using ::expm1f;
  using ::expm1l;
#pragma empty_line
  using ::fdim;
  using ::fdimf;
  using ::fdiml;
#pragma empty_line
  using ::fma;
  using ::fmaf;
  using ::fmal;
#pragma empty_line
  using ::fmax;
  using ::fmaxf;
  using ::fmaxl;
#pragma empty_line
  using ::fmin;
  using ::fminf;
  using ::fminl;
#pragma empty_line
  using ::hypot;
  using ::hypotf;
  using ::hypotl;
#pragma empty_line
  using ::ilogb;
  using ::ilogbf;
  using ::ilogbl;
#pragma empty_line
  using ::lgamma;
  using ::lgammaf;
  using ::lgammal;
#pragma empty_line
  using ::llrint;
  using ::llrintf;
  using ::llrintl;
#pragma empty_line
  using ::llround;
  using ::llroundf;
  using ::llroundl;
#pragma empty_line
  using ::log1p;
  using ::log1pf;
  using ::log1pl;
#pragma empty_line
  using ::log2;
  using ::log2f;
  using ::log2l;
#pragma empty_line
  using ::logb;
  using ::logbf;
  using ::logbl;
#pragma empty_line
  using ::lrint;
  using ::lrintf;
  using ::lrintl;
#pragma empty_line
  using ::lround;
  using ::lroundf;
  using ::lroundl;
#pragma empty_line
  using ::nan;
  using ::nanf;
  using ::nanl;
#pragma empty_line
  using ::nearbyint;
  using ::nearbyintf;
  using ::nearbyintl;
#pragma empty_line
  using ::nextafter;
  using ::nextafterf;
  using ::nextafterl;
#pragma empty_line
  using ::nexttoward;
  using ::nexttowardf;
  using ::nexttowardl;
#pragma empty_line
  using ::remainder;
  using ::remainderf;
  using ::remainderl;
#pragma empty_line
  using ::remquo;
  using ::remquof;
  using ::remquol;
#pragma empty_line
  using ::rint;
  using ::rintf;
  using ::rintl;
#pragma empty_line
  using ::round;
  using ::roundf;
  using ::roundl;
#pragma empty_line
  using ::scalbln;
  using ::scalblnf;
  using ::scalblnl;
#pragma empty_line
  using ::scalbn;
  using ::scalbnf;
  using ::scalbnl;
#pragma empty_line
  using ::tgamma;
  using ::tgammaf;
  using ::tgammal;
#pragma empty_line
  using ::trunc;
  using ::truncf;
  using ::truncl;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  constexpr float
  acosh(float __x)
  { return __builtin_acoshf(__x); }
#pragma empty_line
  constexpr long double
  acosh(long double __x)
  { return __builtin_acoshl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    acosh(_Tp __x)
    { return __builtin_acosh(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  asinh(float __x)
  { return __builtin_asinhf(__x); }
#pragma empty_line
  constexpr long double
  asinh(long double __x)
  { return __builtin_asinhl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    asinh(_Tp __x)
    { return __builtin_asinh(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  atanh(float __x)
  { return __builtin_atanhf(__x); }
#pragma empty_line
  constexpr long double
  atanh(long double __x)
  { return __builtin_atanhl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    atanh(_Tp __x)
    { return __builtin_atanh(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  cbrt(float __x)
  { return __builtin_cbrtf(__x); }
#pragma empty_line
  constexpr long double
  cbrt(long double __x)
  { return __builtin_cbrtl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    cbrt(_Tp __x)
    { return __builtin_cbrt(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  copysign(float __x, float __y)
  { return __builtin_copysignf(__x, __y); }
#pragma empty_line
  constexpr long double
  copysign(long double __x, long double __y)
  { return __builtin_copysignl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    copysign(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return copysign(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr float
  erf(float __x)
  { return __builtin_erff(__x); }
#pragma empty_line
  constexpr long double
  erf(long double __x)
  { return __builtin_erfl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    erf(_Tp __x)
    { return __builtin_erf(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  erfc(float __x)
  { return __builtin_erfcf(__x); }
#pragma empty_line
  constexpr long double
  erfc(long double __x)
  { return __builtin_erfcl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    erfc(_Tp __x)
    { return __builtin_erfc(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  exp2(float __x)
  { return __builtin_exp2f(__x); }
#pragma empty_line
  constexpr long double
  exp2(long double __x)
  { return __builtin_exp2l(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    exp2(_Tp __x)
    { return __builtin_exp2(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  expm1(float __x)
  { return __builtin_expm1f(__x); }
#pragma empty_line
  constexpr long double
  expm1(long double __x)
  { return __builtin_expm1l(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    expm1(_Tp __x)
    { return __builtin_expm1(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  fdim(float __x, float __y)
  { return __builtin_fdimf(__x, __y); }
#pragma empty_line
  constexpr long double
  fdim(long double __x, long double __y)
  { return __builtin_fdiml(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fdim(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fdim(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr float
  fma(float __x, float __y, float __z)
  { return __builtin_fmaf(__x, __y, __z); }
#pragma empty_line
  constexpr long double
  fma(long double __x, long double __y, long double __z)
  { return __builtin_fmal(__x, __y, __z); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up, typename _Vp>
    constexpr typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type
    fma(_Tp __x, _Up __y, _Vp __z)
    {
      typedef typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type __type;
      return fma(__type(__x), __type(__y), __type(__z));
    }
#pragma empty_line
#pragma empty_line
  constexpr float
  fmax(float __x, float __y)
  { return __builtin_fmaxf(__x, __y); }
#pragma empty_line
  constexpr long double
  fmax(long double __x, long double __y)
  { return __builtin_fmaxl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmax(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmax(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr float
  fmin(float __x, float __y)
  { return __builtin_fminf(__x, __y); }
#pragma empty_line
  constexpr long double
  fmin(long double __x, long double __y)
  { return __builtin_fminl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmin(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmin(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr float
  hypot(float __x, float __y)
  { return __builtin_hypotf(__x, __y); }
#pragma empty_line
  constexpr long double
  hypot(long double __x, long double __y)
  { return __builtin_hypotl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    hypot(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return hypot(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr int
  ilogb(float __x)
  { return __builtin_ilogbf(__x); }
#pragma empty_line
  constexpr int
  ilogb(long double __x)
  { return __builtin_ilogbl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    int>::__type
    ilogb(_Tp __x)
    { return __builtin_ilogb(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  lgamma(float __x)
  { return __builtin_lgammaf(__x); }
#pragma empty_line
  constexpr long double
  lgamma(long double __x)
  { return __builtin_lgammal(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    lgamma(_Tp __x)
    { return __builtin_lgamma(__x); }
#pragma empty_line
#pragma empty_line
  constexpr long long
  llrint(float __x)
  { return __builtin_llrintf(__x); }
#pragma empty_line
  constexpr long long
  llrint(long double __x)
  { return __builtin_llrintl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long long>::__type
    llrint(_Tp __x)
    { return __builtin_llrint(__x); }
#pragma empty_line
#pragma empty_line
  constexpr long long
  llround(float __x)
  { return __builtin_llroundf(__x); }
#pragma empty_line
  constexpr long long
  llround(long double __x)
  { return __builtin_llroundl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long long>::__type
    llround(_Tp __x)
    { return __builtin_llround(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  log1p(float __x)
  { return __builtin_log1pf(__x); }
#pragma empty_line
  constexpr long double
  log1p(long double __x)
  { return __builtin_log1pl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    log1p(_Tp __x)
    { return __builtin_log1p(__x); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
  constexpr float
  log2(float __x)
  { return __builtin_log2f(__x); }
#pragma empty_line
  constexpr long double
  log2(long double __x)
  { return __builtin_log2l(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    log2(_Tp __x)
    { return __builtin_log2(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  logb(float __x)
  { return __builtin_logbf(__x); }
#pragma empty_line
  constexpr long double
  logb(long double __x)
  { return __builtin_logbl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    logb(_Tp __x)
    { return __builtin_logb(__x); }
#pragma empty_line
#pragma empty_line
  constexpr long
  lrint(float __x)
  { return __builtin_lrintf(__x); }
#pragma empty_line
  constexpr long
  lrint(long double __x)
  { return __builtin_lrintl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long>::__type
    lrint(_Tp __x)
    { return __builtin_lrint(__x); }
#pragma empty_line
#pragma empty_line
  constexpr long
  lround(float __x)
  { return __builtin_lroundf(__x); }
#pragma empty_line
  constexpr long
  lround(long double __x)
  { return __builtin_lroundl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long>::__type
    lround(_Tp __x)
    { return __builtin_lround(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  nearbyint(float __x)
  { return __builtin_nearbyintf(__x); }
#pragma empty_line
  constexpr long double
  nearbyint(long double __x)
  { return __builtin_nearbyintl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    nearbyint(_Tp __x)
    { return __builtin_nearbyint(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  nextafter(float __x, float __y)
  { return __builtin_nextafterf(__x, __y); }
#pragma empty_line
  constexpr long double
  nextafter(long double __x, long double __y)
  { return __builtin_nextafterl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    nextafter(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return nextafter(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  constexpr float
  nexttoward(float __x, long double __y)
  { return __builtin_nexttowardf(__x, __y); }
#pragma empty_line
  constexpr long double
  nexttoward(long double __x, long double __y)
  { return __builtin_nexttowardl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    nexttoward(_Tp __x, long double __y)
    { return __builtin_nexttoward(__x, __y); }
#pragma empty_line
#pragma empty_line
  constexpr float
  remainder(float __x, float __y)
  { return __builtin_remainderf(__x, __y); }
#pragma empty_line
  constexpr long double
  remainder(long double __x, long double __y)
  { return __builtin_remainderl(__x, __y); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    remainder(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return remainder(__type(__x), __type(__y));
    }
#pragma empty_line
#pragma empty_line
  inline float
  remquo(float __x, float __y, int* __pquo)
  { return __builtin_remquof(__x, __y, __pquo); }
#pragma empty_line
  inline long double
  remquo(long double __x, long double __y, int* __pquo)
  { return __builtin_remquol(__x, __y, __pquo); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    inline typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    remquo(_Tp __x, _Up __y, int* __pquo)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return remquo(__type(__x), __type(__y), __pquo);
    }
#pragma empty_line
#pragma empty_line
  constexpr float
  rint(float __x)
  { return __builtin_rintf(__x); }
#pragma empty_line
  constexpr long double
  rint(long double __x)
  { return __builtin_rintl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    rint(_Tp __x)
    { return __builtin_rint(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  round(float __x)
  { return __builtin_roundf(__x); }
#pragma empty_line
  constexpr long double
  round(long double __x)
  { return __builtin_roundl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    round(_Tp __x)
    { return __builtin_round(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  scalbln(float __x, long __ex)
  { return __builtin_scalblnf(__x, __ex); }
#pragma empty_line
  constexpr long double
  scalbln(long double __x, long __ex)
  { return __builtin_scalblnl(__x, __ex); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    scalbln(_Tp __x, long __ex)
    { return __builtin_scalbln(__x, __ex); }
#pragma empty_line
#pragma empty_line
  constexpr float
  scalbn(float __x, int __ex)
  { return __builtin_scalbnf(__x, __ex); }
#pragma empty_line
  constexpr long double
  scalbn(long double __x, int __ex)
  { return __builtin_scalbnl(__x, __ex); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    scalbn(_Tp __x, int __ex)
    { return __builtin_scalbn(__x, __ex); }
#pragma empty_line
#pragma empty_line
  constexpr float
  tgamma(float __x)
  { return __builtin_tgammaf(__x); }
#pragma empty_line
  constexpr long double
  tgamma(long double __x)
  { return __builtin_tgammal(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    tgamma(_Tp __x)
    { return __builtin_tgamma(__x); }
#pragma empty_line
#pragma empty_line
  constexpr float
  trunc(float __x)
  { return __builtin_truncf(__x); }
#pragma empty_line
  constexpr long double
  trunc(long double __x)
  { return __builtin_truncl(__x); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    trunc(_Tp __x)
    { return __builtin_trunc(__x); }
#pragma empty_line
#pragma empty_line
}
#pragma line 1797 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/cmath" 3
}
#pragma line 37 "/opt/Xilinx/Vivado/2018.2/tps/lnx64/gcc-6.2.0/include/c++/6.2.0/math.h" 2 3
#pragma empty_line
using std::abs;
using std::acos;
using std::asin;
using std::atan;
using std::atan2;
using std::cos;
using std::sin;
using std::tan;
using std::cosh;
using std::sinh;
using std::tanh;
using std::exp;
using std::frexp;
using std::ldexp;
using std::log;
using std::log10;
using std::modf;
using std::pow;
using std::sqrt;
using std::ceil;
using std::fabs;
using std::floor;
using std::fmod;
#pragma empty_line
#pragma empty_line
using std::fpclassify;
using std::isfinite;
using std::isinf;
using std::isnan;
using std::isnormal;
using std::signbit;
using std::isgreater;
using std::isgreaterequal;
using std::isless;
using std::islessequal;
using std::islessgreater;
using std::isunordered;
#pragma empty_line
#pragma empty_line
#pragma empty_line
using std::acosh;
using std::asinh;
using std::atanh;
using std::cbrt;
using std::copysign;
using std::erf;
using std::erfc;
using std::exp2;
using std::expm1;
using std::fdim;
using std::fma;
using std::fmax;
using std::fmin;
using std::hypot;
using std::ilogb;
using std::lgamma;
using std::llrint;
using std::llround;
using std::log1p;
using std::log2;
using std::logb;
using std::lrint;
using std::lround;
using std::nearbyint;
using std::nextafter;
using std::nexttoward;
using std::remainder;
using std::remquo;
using std::rint;
using std::round;
using std::scalbln;
using std::scalbn;
using std::tgamma;
using std::trunc;
#pragma line 2 "/home/ramdas/Work/Learning/CPP_Learning/PP4FPGA_HLS/DFT/naiveImpl/dft.cpp" 2
#pragma empty_line
#pragma line 2 "/home/ramdas/Work/Learning/CPP_Learning/PP4FPGA_HLS/DFT/naiveImpl/dft.cpp"
typedef float IN_TYPE;
typedef float TEMP_TYPE;
#pragma empty_line
#pragma empty_line
#pragma empty_line
void dft(IN_TYPE sample_real[256], IN_TYPE sample_imag[256]){
  TEMP_TYPE temp_real[256];
  TEMP_TYPE temp_imag[256];
  TEMP_TYPE w;
  TEMP_TYPE c,s;
  unsigned int i,j;
#pragma empty_line
#pragma empty_line
  for(i=0;i<256;i+=1){
    temp_real[i] = 0;
    temp_imag[i] = 0;
    w = (2*3.141592653589/256)*(TEMP_TYPE)i;
    for(j=0;j<256;j+=1){
      c = cos(j*w);
      s = sin(j*w);
      temp_real[i] += (sample_real[j]*c - sample_imag[j]*s);
      temp_imag[i] -= (sample_real[j]*s + sample_imag[j]*c);
    }
  }
#pragma empty_line
#pragma empty_line
  for(i=0;i<256;i+=1){
    sample_real[i] = temp_real[i];
    sample_imag[i] = temp_imag[i];
  }
#pragma empty_line
}