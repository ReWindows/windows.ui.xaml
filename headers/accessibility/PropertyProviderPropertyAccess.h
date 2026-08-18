#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace DirectUI {
class PropertyProviderPropertyAccess {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PropertyProviderPropertyAccess@DirectUI@@SAJPEAUIPropertyAccessHost@2@PEAUICustomPropertyProvider@Data@Xaml@UI@Windows@@IPEAPEAVPropertyAccess@2@@Z
    static long CreateInstance(::DirectUI::IPropertyAccessHost *, ::Windows::UI::Xaml::Data::ICustomPropertyProvider *, unsigned int, ::DirectUI::PropertyAccess * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectEventHandlers@PropertyProviderPropertyAccess@DirectUI@@UEAAJXZ
    virtual long DisconnectEventHandlers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@PropertyProviderPropertyAccess@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetSource(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceType@PropertyProviderPropertyAccess@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetSourceType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@PropertyProviderPropertyAccess@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@PropertyProviderPropertyAccess@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetValue(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@PropertyProviderPropertyAccess@DirectUI@@UEAAIXZ
    virtual unsigned int IsConnected();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PropertyProviderPropertyAccess@DirectUI@@QEAA@XZ
    PropertyProviderPropertyAccess();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@PropertyProviderPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@E@Z
    virtual long SetSource(IInspectable *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@PropertyProviderPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long SetValue(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReconnect@PropertyProviderPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@EAEAEAEAPEBVCClassInfo@@@Z
    virtual long TryReconnect(IInspectable *, unsigned char, unsigned char &, CClassInfo const * &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PropertyProviderPropertyAccess@DirectUI@@UEAA@XZ
    virtual ~PropertyProviderPropertyAccess();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyName@PropertyProviderPropertyAccess@DirectUI@@EEAAPEBGXZ
    virtual unsigned short const * GetPropertyName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PropertyProviderPropertyAccess@DirectUI@@AEAAXPEAUIPropertyAccessHost@2@PEAUICustomPropertyProvider@Data@Xaml@UI@Windows@@PEAUICustomProperty@5678@PEBVCClassInfo@@@Z
    void Initialize(::DirectUI::IPropertyAccessHost *, ::Windows::UI::Xaml::Data::ICustomPropertyProvider *, ::Windows::UI::Xaml::Data::ICustomProperty *, CClassInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@PropertyProviderPropertyAccess@DirectUI@@EEAAJXZ
    virtual long OnPropertyChanged();
};
} // namespace DirectUI
