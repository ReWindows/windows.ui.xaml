#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace FocusProperties {
class DefaultFocusChildrenIterator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DefaultFocusChildrenIterator@FocusProperties@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU?$IIterator@PEAVDependencyObject@Xaml@UI@Windows@@@Collections@Foundation@6@@Z
    static long CreateInstance(::Windows::UI::Xaml::IDependencyObject *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DefaultFocusChildrenIterator@FocusProperties@@QEAA@XZ
    DefaultFocusChildrenIterator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@DefaultFocusChildrenIterator@FocusProperties@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@DefaultFocusChildrenIterator@FocusProperties@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_Current(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@DefaultFocusChildrenIterator@FocusProperties@@UEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefaultFocusChildrenIterator@FocusProperties@@UEAA@XZ
    virtual ~DefaultFocusChildrenIterator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DefaultFocusChildrenIterator@FocusProperties@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DefaultFocusChildrenIterator@FocusProperties@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DefaultFocusChildrenIterator@FocusProperties@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DefaultFocusChildrenIterator@FocusProperties@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@DefaultFocusChildrenIterator@FocusProperties@@AEAAJIPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long GetAt(unsigned int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@DefaultFocusChildrenIterator@FocusProperties@@AEAAIXZ
    unsigned int GetCount();
};
} // namespace FocusProperties
