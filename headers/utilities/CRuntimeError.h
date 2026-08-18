#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CRuntimeError {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRuntimeError@@SAJIIIIAEBVxstring_ptr@@0PEBVxephemeral_string_ptr@@IPEAPEAUIError@@PEAUIErrorService@@@Z
    static long Create(unsigned int, unsigned int, unsigned int, unsigned int, xstring_ptr const &, xstring_ptr const &, xephemeral_string_ptr const *, unsigned int, IError * *, IErrorService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateErrorEventArgs@CRuntimeError@@UEAAJPEAPEAVCErrorEventArgs@@PEAVCCoreServices@@@Z
    virtual long GenerateErrorEventArgs(CErrorEventArgs * *, CCoreServices *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorEventArgs@CRuntimeError@@UEAAJPEAVCEventArgs@@@Z
    virtual long SetErrorEventArgs(CEventArgs *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRuntimeError@@MEAA@XZ
    virtual ~CRuntimeError();
};
