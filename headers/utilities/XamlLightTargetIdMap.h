#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class XamlLightTargetIdMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsTarget@XamlLightTargetIdMap@@QEBA_NPEAVCDependencyObject@@AEBVxstring_ptr@@@Z
    bool ContainsTarget(CDependencyObject *, xstring_ptr const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsTarget@XamlLightTargetIdMap@@QEBA_NPEAVCDependencyObject@@@Z
    bool ContainsTarget(CDependencyObject *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTargetAndId@XamlLightTargetIdMap@@AEAA_NPEAVCDependencyObject@@AEBVxstring_ptr@@@Z
    bool AddTargetAndId(CDependencyObject *, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTargetAndId@XamlLightTargetIdMap@@AEAA_NPEAVCDependencyObject@@AEBVxstring_ptr@@@Z
    bool RemoveTargetAndId(CDependencyObject *, xstring_ptr const &);
};
