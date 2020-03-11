the potential errors:


```
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury_core.c:1164
 # hg_core_finalize(): HG addrs must be freed before finalizing HG (1 remaining)
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury_core.c:3434
 # HG_Core_finalize(): Cannot finalize HG core layer
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury.c:1009
 # HG_Finalize(): Could not finalize HG core class
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury_core.c:1164
 # hg_core_finalize(): HG addrs must be freed before finalizing HG (1 remaining)
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury_core.c:3434
 # HG_Core_finalize(): Cannot finalize HG core layer
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury.c:1009
 # HG_Finalize(): Could not finalize HG core class
```

```
execute callserver2 call callserver1
execute callserver2 call callserver1
execute callserver2 call callserver1
execute callserver2 call callserver1
execute callserver2 call callserver1
execute callserver2 call callserver1
execute callserver2 call callserver1
# NA -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/na/na_ofi.c:3794
 # na_ofi_msg_send_unexpected(): fi_tsend() unexpected failed, rc: -113(No route to host)
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury_core.c:1982
 # hg_core_forward_na(): Could not post send for input buffer (NA_PROTOCOL_ERROR)
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury_core.c:4386
 # HG_Core_forward(): Could not forward buffer
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury.c:1919
 # HG_Forward(): Could not forward call (HG_PROTOCOL_ERROR)
Function returned HG_PROTOCOL_ERROR
# NA -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/na/na_ofi.c:3794
 # na_ofi_msg_send_unexpected(): fi_tsend() unexpected failed, rc: -113(No route to host)
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury_core.c:1982
 # hg_core_forward_na(): Could not post send for input buffer (NA_PROTOCOL_ERROR)
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury_core.c:4386
 # HG_Core_forward(): Could not forward buffer
# NA -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/na/na_ofi.c:3794
 # na_ofi_msg_send_unexpected(): fi_tsend() unexpected failed, rc: -113(No route to host)
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury.c:1919
 # HG_Forward(): Could not forward call (HG_PROTOCOL_ERROR)
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury_core.c:1982
 # hg_core_forward_na(): Could not post send for input buffer (NA_PROTOCOL_ERROR)
# NA -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/na/na_ofi.c:3794
 # na_ofi_msg_send_unexpected(): fi_tsend() unexpected failed, rc: -113(No route to host)
Function returned HG_PROTOCOL_ERROR
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury_core.c:4386
 # HG_Core_forward(): Could not forward buffer
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury.c:1919
 # HG_Forward(): Could not forward call (HG_PROTOCOL_ERROR)
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury_core.c:1982
 # hg_core_forward_na(): Could not post send for input buffer (NA_PROTOCOL_ERROR)
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury_core.c:4386
 # HG_Core_forward(): Could not forward buffer
# HG -- Error -- /tmp/zw241/spack-stage/mercury-master-keawdpmu67deic6pmu555va3nz3owf7d/spack-src/src/mercury.c:1919
 # HG_Forward(): Could not forward call (HG_PROTOCOL_ERROR)
Function returned HG_PROTOCOL_ERROR
Function returned HG_PROTOCOL_ERROR
terminate called recursively
terminate called recursively
terminate called recursively
terminate called after throwing an instance of 'thallium::margo_exception'

Thread 4 "testserver" received signal SIGABRT, Aborted.
[Switching to Thread 0x7ffff3d35700 (LWP 4594)]
0x00007ffff5a3e337 in raise () from /lib64/libc.so.6
bt
(gdb) #0  0x00007ffff5a3e337 in raise () from /lib64/libc.so.6
#1  0x00007ffff5a3fa28 in abort () from /lib64/libc.so.6
#2  0x00007ffff637d83d in __gnu_cxx::__verbose_terminate_handler ()
    at ../../../../gcc-5.4.0/libstdc++-v3/libsupc++/vterminate.cc:50
#3  0x00007ffff637b906 in __cxxabiv1::__terminate (handler=<optimized out>)
    at ../../../../gcc-5.4.0/libstdc++-v3/libsupc++/eh_terminate.cc:47
#4  0x00007ffff637b951 in std::terminate ()
    at ../../../../gcc-5.4.0/libstdc++-v3/libsupc++/eh_terminate.cc:57
#5  0x00007ffff637bb69 in __cxxabiv1::__cxa_throw (obj=0x7fffe8001aa0, 
    tinfo=0x40df30 <typeinfo for thallium::margo_exception>, 
    dest=0x40485e <thallium::margo_exception::~margo_exception()>)
    at ../../../../gcc-5.4.0/libstdc++-v3/libsupc++/eh_throw.cc:87
#6  0x000000000040b867 in thallium::callable_remote_procedure::forward (
    this=0x7fffc1205150, buf=..., timeout_ms=-1)
    at /home/zw241/cworkspace/src/spack/opt/spack/linux-centos7-x86_64/gcc-5.4.0/thallium-0.5.1-ejhsx43l3y3tpt37jpdd5lg7tk3dpxez/include/thallium/callable_remote_procedure.hpp:84
#7  0x000000000040c160 in thallium::callable_remote_procedure::operator()<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&> (
    this=0x7fffc1205150)
    at /home/zw241/cworkspace/src/spack/opt/spack/linux-centos7-x86_64/gcc-5.4.0/thallium-0.5.1-ejhsx43l3y3tpt37jpdd5lg7tk3dpxez/include/thallium/callable_remote_procedure.hpp:204
#8  0x000000000040b068 in UniClient::callserver1 (this=0x11cd950)
    at /home/zw241/cworkspace/src/thalliumtest/client.cpp:33
#9  0x0000000000403e34 in callserver2 (req=..., input=...)
    at /home/zw241/cworkspace/src/thalliumtest/testserver.cpp:48
#10 0x00000000004079d1 in std::_Function_handler<void (thallium::request const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&), void (*)(thallium::request const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)>::_M_invoke(std::_Any_data const&, thallium::request const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) (__functor=..., __args#0=..., __args#1=...)
    at /cache/sw/packages/gcc/5.4/include/c++/5.4.0/functional:1871
#11 0x0000000000407b9f in std::function<void (thallium::request const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)>::operator()(thallium::request const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const (this=0x11cd920, __args#0=..., 
    __args#1=...)


```