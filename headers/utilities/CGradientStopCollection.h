#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CGradientStopCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWUCStops@CGradientStopCollection@@QEAAXPEAUICompositor4@Composition@UI@Windows@@PEAUICompositionGradientBrush@345@@Z
    void AddWUCStops(::Windows::UI::Composition::ICompositor4*, ::Windows::UI::Composition::ICompositionGradientBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CGradientStopCollection@@UEAAJAEAVCValue@@PEAI@Z
    virtual long Append(CValue &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CGradientStopCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CGradientStopCollection@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CGradientStopCollection@@QEAAJPEAPEAV1@@Z
    long Clone(CGradientStopCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGradientStopCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromArray@CGradientStopCollection@@SAJPEAPEAUXcpGradientStop@@IPEAV1@@Z
    static long CreateFromArray(XcpGradientStop * *, unsigned int, CGradientStopCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CGradientStopCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CGradientStopCollection@@UEAAJIAEAVCValue@@@Z
    virtual long Insert(unsigned int, CValue &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CGradientStopCollection@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
};
