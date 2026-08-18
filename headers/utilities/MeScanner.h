#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class MeScanner {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAtEndOfInput@MeScanner@@QEAAIXZ
    unsigned int IsAtEndOfInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@MeScanner@@QEAAJXZ
    long Read();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MeScanner@@QEAA@XZ
    ~MeScanner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advance@MeScanner@@AEAAIXZ
    unsigned int Advance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceOverWhitespace@MeScanner@@AEAAXXZ
    void AdvanceOverWhitespace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalIsAtEndOfInput@MeScanner@@AEAAIXZ
    unsigned int InternalIsAtEndOfInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadString@MeScanner@@AEAAJAEAV?$TStringBuilder@$0GA@@@@Z
    long ReadString(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEscapesInPlace@MeScanner@@CAJAEAV?$TStringBuilder@$0GA@@@@Z
    static long RemoveEscapesInPlace(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@MeScanner@@AEAAJIAEBVXamlLineInfo@@@Z
    long ReportError(unsigned int, XamlLineInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@MeScanner@@AEAAJIAEBVXamlLineInfo@@AEBVxstring_ptr@@1@Z
    long ReportError(unsigned int, XamlLineInfo const &, xstring_ptr const &, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@MeScanner@@AEAAJIAEBVXamlLineInfo@@AEBVxstring_ptr@@@Z
    long ReportError(unsigned int, XamlLineInfo const &, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePropertyName@MeScanner@@AEAAJAEBVxstring_ptr_view@@@Z
    long ResolvePropertyName(xstring_ptr_view const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveTypeName@MeScanner@@AEAAJAEBVxstring_ptr_view@@@Z
    long ResolveTypeName(xstring_ptr_view const &);
};
