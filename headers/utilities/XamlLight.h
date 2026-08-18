#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class XamlLight {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@XamlLight@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetId(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdProtected@XamlLight@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetIdProtected(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@XamlLight@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@XamlLight@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long OnConnected(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedProtected@XamlLight@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long OnConnectedProtected(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@XamlLight@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long OnDisconnected(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedProtected@XamlLight@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long OnDisconnectedProtected(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompositionLight@XamlLight@DirectUI@@UEAAJPEAPEAUICompositionLight@Composition@UI@Windows@@@Z
    virtual long get_CompositionLight(::Windows::UI::Composition::ICompositionLight * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CompositionLight@XamlLight@DirectUI@@UEAAJPEAUICompositionLight@Composition@UI@Windows@@@Z
    virtual long put_CompositionLight(::Windows::UI::Composition::ICompositionLight *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlLight@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlLight@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@XamlLight@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlLight@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
