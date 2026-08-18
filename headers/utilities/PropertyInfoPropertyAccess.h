#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI {
class PropertyInfoPropertyAccess {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PropertyInfoPropertyAccess@DirectUI@@SAJPEAUIPropertyAccessHost@2@PEAUIInspectable@@PEBVCClassInfo@@IPEAPEAVPropertyAccess@2@@Z
    static long CreateInstance(::DirectUI::IPropertyAccessHost *, IInspectable *, CClassInfo const *, unsigned int, ::DirectUI::PropertyAccess * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectEventHandlers@PropertyInfoPropertyAccess@DirectUI@@UEAAJXZ
    virtual long DisconnectEventHandlers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyName@PropertyInfoPropertyAccess@DirectUI@@UEAAPEBGXZ
    virtual unsigned short const * GetPropertyName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@PropertyInfoPropertyAccess@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetSource(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceType@PropertyInfoPropertyAccess@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetSourceType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@PropertyInfoPropertyAccess@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@PropertyInfoPropertyAccess@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetValue(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@PropertyInfoPropertyAccess@DirectUI@@UEAAIXZ
    virtual unsigned int IsConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@PropertyInfoPropertyAccess@DirectUI@@UEAAJXZ
    virtual long OnPropertyChanged();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PropertyInfoPropertyAccess@DirectUI@@QEAA@XZ
    PropertyInfoPropertyAccess();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@PropertyInfoPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@E@Z
    virtual long SetSource(IInspectable *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@PropertyInfoPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long SetValue(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReconnect@PropertyInfoPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@EAEAEAEAPEBVCClassInfo@@@Z
    virtual long TryReconnect(IInspectable *, unsigned char, unsigned char &, CClassInfo const * &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PropertyInfoPropertyAccess@DirectUI@@UEAA@XZ
    virtual ~PropertyInfoPropertyAccess();
};
} // namespace DirectUI
