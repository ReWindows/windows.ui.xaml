#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class CTransparentUnoptimizedBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTransparentUnoptimizedBrush@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrushSpan@CTransparentUnoptimizedBrush@@UEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAPEAUIBrushSpan@@@Z
    virtual long CreateBrushSpan(CMILMatrix const *, XRECTF_WH const *, IBrushSpan * *);
};
