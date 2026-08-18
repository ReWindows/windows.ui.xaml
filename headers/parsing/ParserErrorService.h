#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class ParserErrorService {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ParserErrorService@@QEAA@XZ
    ParserErrorService();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@ParserErrorService@@MEAAJIIIIIAEBVxstring_ptr@@@Z
    virtual long ReportError(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, xstring_ptr const &);
};
