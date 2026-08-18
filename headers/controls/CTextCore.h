#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CTextCore {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontAndScriptServices@CTextCore@@QEAAJPEAPEAVIFontAndScriptServices@@@Z
    long GetFontAndScriptServices(IFontAndScriptServices * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextFormatterCache@CTextCore@@QEAAJPEAPEAVTextFormatterCache@RichTextServices@@@Z
    long GetTextFormatterCache(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTextControl@CTextCore@@SA_NPEAVCDependencyObject@@@Z
    static bool IsTextControl(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTextSelectionEnabled@CTextCore@@SA_NPEAVCDependencyObject@@@Z
    static bool IsTextSelectionEnabled(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseUnusedTextFormatters@CTextCore@@QEAAXXZ
    void ReleaseUnusedTextFormatters();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextCore@@QEAA@XZ
    ~CTextCore();
};
