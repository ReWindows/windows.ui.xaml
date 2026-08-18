#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class ParserErrorReporter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ParserErrorReporter@@QEAA@XZ
    ParserErrorReporter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetError@ParserErrorReporter@@QEAAJIIIAEBVxstring_ptr@@0@Z
    long SetError(unsigned int, unsigned int, unsigned int, xstring_ptr const &, xstring_ptr const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetError@ParserErrorReporter@@QEAAJIIIAEBVxstring_ptr@@@Z
    long SetError(unsigned int, unsigned int, unsigned int, xstring_ptr const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetError@ParserErrorReporter@@QEAAJIIII@Z
    long SetError(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ParserErrorReporter@@UEAA@XZ
    virtual ~ParserErrorReporter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAdjustedStringBuffer@ParserErrorReporter@@AEAAJAEBVxstring_ptr@@I@Z
    long LoadAdjustedStringBuffer(xstring_ptr const &, unsigned int);
};
