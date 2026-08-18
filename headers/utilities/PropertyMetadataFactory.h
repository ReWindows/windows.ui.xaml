#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class PropertyMetadataFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithDefaultValue@PropertyMetadataFactory@DirectUI@@UEAAJPEAUIInspectable@@0PEAPEAU3@PEAPEAUIPropertyMetadata@Xaml@UI@Windows@@@Z
    virtual long CreateInstanceWithDefaultValue(IInspectable *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::IPropertyMetadata * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithDefaultValueAndCallback@PropertyMetadataFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAUIPropertyChangedCallback@Xaml@UI@Windows@@0PEAPEAU3@PEAPEAUIPropertyMetadata@567@@Z
    virtual long CreateInstanceWithDefaultValueAndCallback(IInspectable *, ::Windows::UI::Xaml::IPropertyChangedCallback *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::IPropertyMetadata * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithDefaultValue@PropertyMetadataFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIPropertyMetadata@Xaml@UI@Windows@@@Z
    virtual long CreateWithDefaultValue(IInspectable *, ::Windows::UI::Xaml::IPropertyMetadata * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithDefaultValueAndCallback@PropertyMetadataFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAUIPropertyChangedCallback@Xaml@UI@Windows@@PEAPEAUIPropertyMetadata@567@@Z
    virtual long CreateWithDefaultValueAndCallback(IInspectable *, ::Windows::UI::Xaml::IPropertyChangedCallback *, ::Windows::UI::Xaml::IPropertyMetadata * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithFactory@PropertyMetadataFactory@DirectUI@@UEAAJPEAUICreateDefaultValueCallback@Xaml@UI@Windows@@PEAPEAUIPropertyMetadata@456@@Z
    virtual long CreateWithFactory(::Windows::UI::Xaml::ICreateDefaultValueCallback *, ::Windows::UI::Xaml::IPropertyMetadata * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithFactoryAndCallback@PropertyMetadataFactory@DirectUI@@UEAAJPEAUICreateDefaultValueCallback@Xaml@UI@Windows@@PEAUIPropertyChangedCallback@456@PEAPEAUIPropertyMetadata@456@@Z
    virtual long CreateWithFactoryAndCallback(::Windows::UI::Xaml::ICreateDefaultValueCallback *, ::Windows::UI::Xaml::IPropertyChangedCallback *, ::Windows::UI::Xaml::IPropertyMetadata * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckActivationAllowed@PropertyMetadataFactory@DirectUI@@MEAAJXZ
    virtual long CheckActivationAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PropertyMetadataFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PropertyMetadataFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PropertyMetadataFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
