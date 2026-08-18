#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI {
class DependencyObjectPropertyAccess {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DependencyObjectPropertyAccess@DirectUI@@SAJPEAUIPropertyAccessHost@2@PEAUIInspectable@@PEBVCClassInfo@@IPEAPEAVPropertyAccess@2@@Z
    static long CreateInstance(::DirectUI::IPropertyAccessHost *, IInspectable *, CClassInfo const *, unsigned int, ::DirectUI::PropertyAccess * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DependencyObjectPropertyAccess@DirectUI@@SAJPEAUIPropertyAccessHost@2@PEAUIInspectable@@PEBVCClassInfo@@PEBVCDependencyProperty@@IPEAPEAVPropertyAccess@2@@Z
    static long CreateInstance(::DirectUI::IPropertyAccessHost *, IInspectable *, CClassInfo const *, CDependencyProperty const *, unsigned int, ::DirectUI::PropertyAccess * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectEventHandlers@DependencyObjectPropertyAccess@DirectUI@@UEAAJXZ
    virtual long DisconnectEventHandlers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@DependencyObjectPropertyAccess@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetSource(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceType@DependencyObjectPropertyAccess@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetSourceType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@DependencyObjectPropertyAccess@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@DependencyObjectPropertyAccess@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetValue(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@DependencyObjectPropertyAccess@DirectUI@@UEAAIXZ
    virtual unsigned int IsConnected();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@DependencyObjectPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@E@Z
    virtual long SetSource(IInspectable *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@DependencyObjectPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long SetValue(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReconnect@DependencyObjectPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@EAEAEAEAPEBVCClassInfo@@@Z
    virtual long TryReconnect(IInspectable *, unsigned char, unsigned char &, CClassInfo const * &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DependencyObjectPropertyAccess@DirectUI@@UEAA@XZ
    virtual ~DependencyObjectPropertyAccess();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPropertyChangedHandler@DependencyObjectPropertyAccess@DirectUI@@AEAAJXZ
    long AddPropertyChangedHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@DependencyObjectPropertyAccess@DirectUI@@AEAAJPEAPEAVDependencyObject@2@@Z
    long GetSource(::DirectUI::DependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeRemovePropertyChangedHandler@DependencyObjectPropertyAccess@DirectUI@@AEAAJXZ
    long SafeRemovePropertyChangedHandler();
};
} // namespace DirectUI
