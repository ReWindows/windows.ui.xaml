#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CInkCanvas {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CInkCanvas@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CInkCanvas@@UEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CInkCanvas@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CInkCanvas@@UEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CInkCanvas@@UEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CInkCanvas@@UEAAJXZ
    virtual long InitInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InkPresenter@CInkCanvas@@QEAAJPEAPEAUIUnknown@@@Z
    long get_InkPresenter(IUnknown * *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInkCanvas@@MEAA@XZ
    virtual ~CInkCanvas();
};
