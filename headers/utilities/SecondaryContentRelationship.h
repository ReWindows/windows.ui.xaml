#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class SecondaryContentRelationship {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Apply@SecondaryContentRelationship@DirectUI@@UEAAJXZ
    virtual long Apply();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SecondaryContentRelationship@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForCurveUpdate@SecondaryContentRelationship@DirectUI@@UEAAJXZ
    virtual long PrepareForCurveUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@SecondaryContentRelationship@DirectUI@@UEAAJXZ
    virtual long Remove();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAuxiliaryDependencyPropertyHolder@SecondaryContentRelationship@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long SetAuxiliaryDependencyPropertyHolder(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryContent@SecondaryContentRelationship@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long SetPrimaryContent(::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSecondaryContent@SecondaryContentRelationship@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIDependencyObject@456@@Z
    long SetSecondaryContent(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDependencyProperties@SecondaryContentRelationship@DirectUI@@UEAAJXZ
    virtual long UpdateDependencyProperties();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SecondaryContentRelationship@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SecondaryContentRelationship@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SecondaryContentRelationship@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SecondaryContentRelationship@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
