#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class CRelativePanel {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundSizing@CRelativePanel@@UEBA?AW4BackgroundSizing@DirectUI@@XZ
    virtual int GetBackgroundSizing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderBrush@CRelativePanel@@UEBA?AV?$xref_ptr@VCBrush@@@@XZ
    virtual WindissectOpaque GetBorderBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderThickness@CRelativePanel@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetBorderThickness() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCornerRadius@CRelativePanel@@UEBA?AUXRECTF_CR@@XZ
    virtual XRECTF_CR GetCornerRadius() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPadding@CRelativePanel@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetPadding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRelativePanel@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRelativePanel@@UEAA@XZ
    virtual ~CRelativePanel();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CRelativePanel@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRelativePanel@@IEAA@PEAVCCoreServices@@@Z
    CRelativePanel(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CRelativePanel@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateGraph@CRelativePanel@@AEAAJXZ
    long GenerateGraph();
};
