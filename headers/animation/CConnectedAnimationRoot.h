#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CConnectedAnimationRoot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CConnectedAnimationRoot@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateConnectedAnimationVisual@CConnectedAnimationRoot@@QEAAJPEAPEAUIVisual@Composition@UI@Windows@@@Z
    long CreateConnectedAnimationVisual(::Windows::UI::Composition::IVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CConnectedAnimationRoot@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveConnectedAnimationVisual@CConnectedAnimationRoot@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z
    long RemoveConnectedAnimationVisual(::Windows::UI::Composition::IVisual *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDebugTag@CConnectedAnimationRoot@@AEAAXPEAUIVisual@Composition@UI@Windows@@PEBG@Z
    void SetDebugTag(::Windows::UI::Composition::IVisual *, unsigned short const *);
};
