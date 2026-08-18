#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace FocusProperties {
class DefaultFocusChildrenIterable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DefaultFocusChildrenIterable@FocusProperties@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU?$IIterable@PEAVDependencyObject@Xaml@UI@Windows@@@Collections@Foundation@6@@Z
    static long CreateInstance(::Windows::UI::Xaml::IDependencyObject *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@DefaultFocusChildrenIterable@FocusProperties@@UEAAJPEAPEAU?$IIterator@PEAVDependencyObject@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefaultFocusChildrenIterable@FocusProperties@@UEAA@XZ
    virtual ~DefaultFocusChildrenIterable();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DefaultFocusChildrenIterable@FocusProperties@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DefaultFocusChildrenIterable@FocusProperties@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DefaultFocusChildrenIterable@FocusProperties@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DefaultFocusChildrenIterable@FocusProperties@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace FocusProperties
