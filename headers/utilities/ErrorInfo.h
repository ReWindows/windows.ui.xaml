#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI {
class ErrorInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ErrorInfo@DirectUI@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRestrictedErrorInfo@ErrorInfo@DirectUI@@QEAAJJAEBVxstring_ptr@@0@Z
    long CreateRestrictedErrorInfo(long, xstring_ptr const &, xstring_ptr const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ErrorInfo@DirectUI@@QEAA@XZ
    ErrorInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorCode@ErrorInfo@DirectUI@@QEAAJXZ
    long GetErrorCode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromThread@ErrorInfo@DirectUI@@QEAAJXZ
    long GetFromThread();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageW@ErrorInfo@DirectUI@@QEAAJPEAVxstring_ptr@@@Z
    long GetMessageW(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDescription@ErrorInfo@DirectUI@@QEAAHXZ
    int HasDescription();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasErrorCode@ErrorInfo@DirectUI@@QEAAHXZ
    int HasErrorCode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMessage@ErrorInfo@DirectUI@@QEAAHXZ
    int HasMessage();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRestrictedDescription@ErrorInfo@DirectUI@@QEAAHXZ
    int HasRestrictedDescription();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRestrictedErrorInfo@ErrorInfo@DirectUI@@QEAAHXZ
    int HasRestrictedErrorInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorInfo@ErrorInfo@DirectUI@@QEAAXPEAUIErrorInfo@@@Z
    void SetErrorInfo(IErrorInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOnThread@ErrorInfo@DirectUI@@QEAAJXZ
    long SetOnThread();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ErrorInfo@DirectUI@@QEAA@XZ
    ~ErrorInfo();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureErrorDetailsInitialized@ErrorInfo@DirectUI@@AEAAJXZ
    long EnsureErrorDetailsInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureErrorInfoInitialized@ErrorInfo@DirectUI@@AEAAXXZ
    void EnsureErrorInfoInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRestrictedErrorInfoInitialized@ErrorInfo@DirectUI@@AEAAXXZ
    void EnsureRestrictedErrorInfoInitialized();
};
} // namespace DirectUI
