#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace Diagnostics {
class ElementStateChangedBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceDictionaryContext@ElementStateChangedBuilder@Diagnostics@@QEAA_NPEAVCResourceDictionary@@PEAVCDependencyObject@@@Z
    bool AddResourceDictionaryContext(CResourceDictionary *, CDependencyObject *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ElementStateChangedBuilder@Diagnostics@@QEAA@PEAVCDependencyObject@@PEBVCDependencyProperty@@@Z
    ElementStateChangedBuilder(CDependencyObject *, CDependencyProperty const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ElementStateChangedBuilder@Diagnostics@@QEAA@XZ
    ~ElementStateChangedBuilder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAccessor@ElementStateChangedBuilder@Diagnostics@@AEAAXI@Z
    void AddAccessor(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAccessor@ElementStateChangedBuilder@Diagnostics@@AEAAXPEBG@Z
    void AddAccessor(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAccessor@ElementStateChangedBuilder@Diagnostics@@AEAAXPEBVCClassInfo@@@Z
    void AddAccessor(CClassInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProperty@ElementStateChangedBuilder@Diagnostics@@AEAAXPEBVCDependencyProperty@@@Z
    void AddProperty(CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPropertyInternal@ElementStateChangedBuilder@Diagnostics@@AEAAXPEBVCDependencyProperty@@@Z
    void AddPropertyInternal(CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindParentProperty@ElementStateChangedBuilder@Diagnostics@@AEAAPEBVCDependencyProperty@@PEAVCDependencyObject@@0@Z
    CDependencyProperty const * FindParentProperty(CDependencyObject *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNewStep@ElementStateChangedBuilder@Diagnostics@@AEAAXXZ
    void StartNewStep();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindIndexInCollection@ElementStateChangedBuilder@Diagnostics@@AEAA_NPEAVCDOCollection@@PEAVCDependencyObject@@PEAI@Z
    bool TryFindIndexInCollection(CDOCollection *, CDependencyObject *, unsigned int *);
};
} // namespace Diagnostics
