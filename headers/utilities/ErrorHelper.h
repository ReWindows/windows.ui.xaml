#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
namespace DirectUI {
class ErrorHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearError@ErrorHelper@DirectUI@@SAJXZ
    static long ClearError();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBestErrorMessage@ErrorHelper@DirectUI@@SAJAEAVErrorInfo@2@JPEAVxstring_ptr@@@Z
    static long GetBestErrorMessage(::DirectUI::ErrorInfo &, long, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageFromAgErrorCode@ErrorHelper@DirectUI@@SAJJPEAVxstring_ptr@@@Z
    static long GetMessageFromAgErrorCode(long, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonLocalizedErrorString@ErrorHelper@DirectUI@@SAJIPEAVxstring_ptr@@@Z
    static long GetNonLocalizedErrorString(unsigned int, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemMessageForHresult@ErrorHelper@DirectUI@@SAJJPEAVxstring_ptr@@@Z
    static long GetSystemMessageForHresult(long, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapHresult@ErrorHelper@DirectUI@@SAJJPEAJ@Z
    static long MapHresult(long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OriginateError@ErrorHelper@DirectUI@@SAJJAEBVxstring_ptr_view@@@Z
    static long OriginateError(long, xstring_ptr_view const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OriginateError@ErrorHelper@DirectUI@@SAJJIPEBG@Z
    static long OriginateError(long, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OriginateError@ErrorHelper@DirectUI@@SAJJPEAUHSTRING__@@@Z
    static long OriginateError(long, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OriginateErrorUsingFormattedResourceID@ErrorHelper@DirectUI@@SAJJIAEBVxstring_ptr_view@@PEBG@Z
    static long OriginateErrorUsingFormattedResourceID(long, unsigned int, xstring_ptr_view const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OriginateErrorUsingResourceID@ErrorHelper@DirectUI@@SAJJI@Z
    static long OriginateErrorUsingResourceID(long, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUnhandledError@ErrorHelper@DirectUI@@SAJAEAVErrorInfo@2@IPEAI@Z
    static long ProcessUnhandledError(::DirectUI::ErrorInfo &, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseUnhandledExceptionEvent@ErrorHelper@DirectUI@@SAJJAEBVxstring_ptr@@PEAI@Z
    static long RaiseUnhandledExceptionEvent(long, xstring_ptr const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportUnhandledError@ErrorHelper@DirectUI@@SAJJ@Z
    static long ReportUnhandledError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportUnhandledErrorFromWrappedDelegate@ErrorHelper@DirectUI@@SAXJ@Z
    static void ReportUnhandledErrorFromWrappedDelegate(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldForceFailFast@ErrorHelper@DirectUI@@SAIXZ
    static unsigned int ShouldForceFailFast();
};
} // namespace DirectUI
