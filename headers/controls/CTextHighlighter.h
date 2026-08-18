#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CTextHighlighter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextHighlighter@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextHighlighter@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateTextRanges@CTextHighlighter@@QEAAXXZ
    void InvalidateTextRanges();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CTextHighlighter@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextHighlighter@@UEAA@XZ
    virtual ~CTextHighlighter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CTextHighlighter@@EEAAJXZ
    virtual long InitInstance();
};
