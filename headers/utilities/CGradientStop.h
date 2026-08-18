#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CGradientStop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWUCStop@CGradientStop@@QEAAXPEAUICompositor4@Composition@UI@Windows@@PEAU?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@5@@Z
    void AddWUCStop(::Windows::UI::Composition::ICompositor4*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CGradientStop@@QEAAJPEAPEAV1@@Z
    long Clone(CGradientStop * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGradientStop@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CGradientStop@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CGradientStop@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
};
