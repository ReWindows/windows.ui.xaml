#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CParserError {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CParserError@@SAJIIAEBVxstring_ptr@@00IIPEBVxephemeral_string_ptr@@IPEAPEAUIError@@PEAUIErrorService@@@Z
    static long Create(unsigned int, unsigned int, xstring_ptr const &, xstring_ptr const &, xstring_ptr const &, unsigned int, unsigned int, xephemeral_string_ptr const *, unsigned int, IError * *, IErrorService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateErrorEventArgs@CParserError@@UEAAJPEAPEAVCErrorEventArgs@@PEAVCCoreServices@@@Z
    virtual long GenerateErrorEventArgs(CErrorEventArgs * *, CCoreServices *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorEventArgs@CParserError@@UEAAJPEAVCEventArgs@@@Z
    virtual long SetErrorEventArgs(CEventArgs *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CParserError@@IEAA@IIAEBVxstring_ptr@@00IIPEAUIErrorService@@@Z
    CParserError(unsigned int, unsigned int, xstring_ptr const &, xstring_ptr const &, xstring_ptr const &, unsigned int, unsigned int, IErrorService *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CParserError@@MEAA@XZ
    virtual ~CParserError();
};
