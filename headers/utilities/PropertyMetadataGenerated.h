#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class PropertyMetadataGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CreateDefaultValueCallback@PropertyMetadataGenerated@DirectUI@@UEAAJPEAPEAUICreateDefaultValueCallback@Xaml@UI@Windows@@@Z
    virtual long get_CreateDefaultValueCallback(::Windows::UI::Xaml::ICreateDefaultValueCallback * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultValue@PropertyMetadataGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_DefaultValue(IInspectable * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PropertyMetadataGenerated@DirectUI@@UEAA@XZ
    virtual ~PropertyMetadataGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PropertyMetadataGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PropertyMetadataGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PropertyMetadataGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PropertyMetadataGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
