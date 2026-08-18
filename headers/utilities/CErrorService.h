#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class CErrorService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddError@CErrorService@@UEAAJJPEAUIError@@@Z
    virtual long AddError(long, IError *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddListener@CErrorService@@UEAAJPEAUIErrorServiceListener@@@Z
    virtual long AddListener(IErrorServiceListener *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CErrorService@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupErrors@CErrorService@@UEAAXXZ
    virtual void CleanupErrors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupLastError@CErrorService@@UEAAJPEAUIError@@@Z
    virtual long CleanupLastError(IError *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreResetCleanup@CErrorService@@UEAAXPEAVCCoreServices@@@Z
    virtual void CoreResetCleanup(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CErrorService@@SAJPEAVCCoreServices@@PEAPEAUIErrorService@@@Z
    static long Create(CCoreServices *, IErrorService * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatErrorMessage@CErrorService@@SAJAEBVxstring_ptr@@PEAV2@PEBVxephemeral_string_ptr@@I@Z
    static long FormatErrorMessage(xstring_ptr const &, xstring_ptr *, xephemeral_string_ptr const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstError@CErrorService@@UEAAJPEAPEAUIError@@@Z
    virtual long GetFirstError(IError * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastReportedError@CErrorService@@UEAAJPEAPEAUIError@@@Z
    virtual long GetLastReportedError(IError * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageFromErrorCode@CErrorService@@UEAAJIPEAVxstring_ptr@@@Z
    virtual long GetMessageFromErrorCode(unsigned int, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OriginateInvalidOperationError@CErrorService@@SAJPEAVCCoreServices@@IAEBVxstring_ptr_view@@11@Z
    static long OriginateInvalidOperationError(CCoreServices *, unsigned int, xstring_ptr_view const &, xstring_ptr_view const &, xstring_ptr_view const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CErrorService@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveListener@CErrorService@@UEAAJPEAUIErrorServiceListener@@@Z
    virtual long RemoveListener(IErrorServiceListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportGenericError@CErrorService@@UEAAJJW4ErrorType@@IIIIPEBVxephemeral_string_ptr@@IPEAVCEventArgs@@PEAVCDependencyObject@@@Z
    virtual long ReportGenericError(long, int, unsigned int, unsigned int, unsigned int, unsigned int, xephemeral_string_ptr const *, unsigned int, CEventArgs *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportParserError@CErrorService@@UEAAJJIIAEBVxstring_ptr@@00II0PEBVxephemeral_string_ptr@@I@Z
    virtual long ReportParserError(long, unsigned int, unsigned int, xstring_ptr const &, xstring_ptr const &, xstring_ptr const &, unsigned int, unsigned int, xstring_ptr const &, xephemeral_string_ptr const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportRuntimeError@CErrorService@@UEAAJJIIIIAEBVxstring_ptr@@PEBVxephemeral_string_ptr@@IPEAVCEventArgs@@PEAVCDependencyObject@@0@Z
    virtual long ReportRuntimeError(long, unsigned int, unsigned int, unsigned int, unsigned int, xstring_ptr const &, xephemeral_string_ptr const *, unsigned int, CEventArgs *, CDependencyObject *, xstring_ptr const &);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CErrorService@@IEAA@XZ
    ~CErrorService();
};
