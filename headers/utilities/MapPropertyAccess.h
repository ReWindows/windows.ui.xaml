#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
namespace DirectUI {
class MapPropertyAccess {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@MapPropertyAccess@DirectUI@@SAJPEAUIPropertyAccessHost@2@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@IPEAPEAVPropertyAccess@2@@Z
    static long CreateInstance(::DirectUI::IPropertyAccessHost *, WindissectOpaque *, unsigned int, ::DirectUI::PropertyAccess * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectEventHandlers@MapPropertyAccess@DirectUI@@UEAAJXZ
    virtual long DisconnectEventHandlers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@MapPropertyAccess@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetSource(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceType@MapPropertyAccess@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetSourceType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@MapPropertyAccess@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@MapPropertyAccess@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetValue(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@MapPropertyAccess@DirectUI@@UEAAIXZ
    virtual unsigned int IsConnected();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@MapPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@E@Z
    virtual long SetSource(IInspectable *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@MapPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long SetValue(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReconnect@MapPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@EAEAEAEAPEBVCClassInfo@@@Z
    virtual long TryReconnect(IInspectable *, unsigned char, unsigned char &, CClassInfo const * &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MapPropertyAccess@DirectUI@@UEAA@XZ
    virtual ~MapPropertyAccess();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddKeyChangedEventHandler@MapPropertyAccess@DirectUI@@AEAAJXZ
    long AddKeyChangedEventHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMapChanged@MapPropertyAccess@DirectUI@@AEAAJPEAU?$IMapChangedEventArgs@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    long OnMapChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeRemoveKeyChangedEventHandler@MapPropertyAccess@DirectUI@@AEAAJXZ
    long SafeRemoveKeyChangedEventHandler();
};
} // namespace DirectUI
