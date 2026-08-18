#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class ScrollViewerView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalOffset@ScrollViewerView@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalOffset@ScrollViewerView@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomFactor@ScrollViewerView@DirectUI@@UEAAJPEAM@Z
    virtual long get_ZoomFactor(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalOffset@ScrollViewerView@DirectUI@@QEAAJN@Z
    long put_HorizontalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalOffset@ScrollViewerView@DirectUI@@QEAAJN@Z
    long put_VerticalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ZoomFactor@ScrollViewerView@DirectUI@@QEAAJM@Z
    long put_ZoomFactor(float);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ScrollViewerView@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ScrollViewerView@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ScrollViewerView@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ScrollViewerView@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
