#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class ComponentPropertyValueGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ComponentPropertyValueGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ElementId@ComponentPropertyValueGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ElementId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Site@ComponentPropertyValueGenerated@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_Site(::Windows::UI::Xaml::IUIElement * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ComponentPropertyValueGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ComponentPropertyValueGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ComponentPropertyValueGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ComponentPropertyValueGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
