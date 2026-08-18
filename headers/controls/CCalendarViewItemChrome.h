#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CCalendarViewItemChrome {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCalendarViewItemChrome@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CCalendarViewItemChrome@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBlockAlignments@CCalendarViewItemChrome@@MEAA_N_NPEAUTextBlockAlignments@CCalendarViewBaseItemChrome@@@Z
    virtual bool GetTextBlockAlignments(bool, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBlockFontProperties@CCalendarViewItemChrome@@MEAA_N_NPEAUTextBlockFontProperties@CCalendarViewBaseItemChrome@@@Z
    virtual bool GetTextBlockFontProperties(bool, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBlockMargin@CCalendarViewItemChrome@@MEBA?AUXRECTF_RB@@_N@Z
    virtual XRECTF_RB GetTextBlockMargin(bool) const;
};
