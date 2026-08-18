#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
class CError {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CError@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CError@@SAJW4ErrorType@@IIIIPEBVxephemeral_string_ptr@@IPEAPEAUIError@@PEAUIErrorService@@@Z
    static long Create(int, unsigned int, unsigned int, unsigned int, unsigned int, xephemeral_string_ptr const *, unsigned int, IError * *, IErrorService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateErrorEventArgs@CError@@UEAAJPEAPEAVCErrorEventArgs@@PEAVCCoreServices@@@Z
    virtual long GenerateErrorEventArgs(CErrorEventArgs * *, CCoreServices *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharPosition@CError@@UEAAIXZ
    virtual unsigned int GetCharPosition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorCode@CError@@UEAAIXZ
    virtual unsigned int GetErrorCode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorEventSender@CError@@UEAAJPEAPEAVCDependencyObject@@@Z
    virtual long GetErrorEventSender(CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorMessage@CError@@UEAAJPEAVxstring_ptr@@@Z
    virtual long GetErrorMessage(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorResult@CError@@UEAAJXZ
    virtual long GetErrorResult();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorType@CError@@UEAA?AW4ErrorType@@XZ
    virtual int GetErrorType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsRecoverable@CError@@UEAAIXZ
    virtual unsigned int GetIsRecoverable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineNumber@CError@@UEAAIXZ
    virtual unsigned int GetLineNumber();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CError@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorCode@CError@@QEAAXIPEBVxephemeral_string_ptr@@I@Z
    void SetErrorCode(unsigned int, xephemeral_string_ptr const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorEventArgs@CError@@UEAAJPEAVCEventArgs@@@Z
    virtual long SetErrorEventArgs(CEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorEventSender@CError@@UEAAXPEAVCDependencyObject@@@Z
    virtual void SetErrorEventSender(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorMessage@CError@@UEAAJAEBVxstring_ptr@@@Z
    virtual long SetErrorMessage(xstring_ptr const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorResult@CError@@QEAAXJPEBVxephemeral_string_ptr@@I@Z
    void SetErrorResult(long, xephemeral_string_ptr const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsRecoverable@CError@@UEAAII@Z
    virtual unsigned int SetIsRecoverable(unsigned int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CError@@IEAA@W4ErrorType@@IIIIPEAUIErrorService@@@Z
    CError(int, unsigned int, unsigned int, unsigned int, unsigned int, IErrorService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CError@@IEAAJIPEBVxephemeral_string_ptr@@I@Z
    long Initialize(unsigned int, xephemeral_string_ptr const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CError@@MEAA@XZ
    virtual ~CError();
};
