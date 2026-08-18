#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
namespace DirectUI {
class IndexerPropertyAccess {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@IndexerPropertyAccess@DirectUI@@SAJPEAUIIndexedPropertyAccessHost@2@PEAUICustomPropertyProvider@Data@Xaml@UI@Windows@@UTypeName@Interop@678@PEAUIInspectable@@IPEAPEAVPropertyAccess@2@@Z
    static long CreateInstance(::DirectUI::IIndexedPropertyAccessHost *, ::Windows::UI::Xaml::Data::ICustomPropertyProvider *, ::Windows::UI::Xaml::Interop::TypeName, IInspectable *, unsigned int, ::DirectUI::PropertyAccess * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectEventHandlers@IndexerPropertyAccess@DirectUI@@UEAAJXZ
    virtual long DisconnectEventHandlers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@IndexerPropertyAccess@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetSource(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceType@IndexerPropertyAccess@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetSourceType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@IndexerPropertyAccess@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@IndexerPropertyAccess@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetValue(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@IndexerPropertyAccess@DirectUI@@UEAAIXZ
    virtual unsigned int IsConnected();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@IndexerPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@E@Z
    virtual long SetSource(IInspectable *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@IndexerPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long SetValue(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReconnect@IndexerPropertyAccess@DirectUI@@UEAAJPEAUIInspectable@@EAEAEAEAPEBVCClassInfo@@@Z
    virtual long TryReconnect(IInspectable *, unsigned char, unsigned char &, CClassInfo const * &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IndexerPropertyAccess@DirectUI@@UEAA@XZ
    virtual ~IndexerPropertyAccess();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPropertyChangedHandler@IndexerPropertyAccess@DirectUI@@AEAAJXZ
    long AddPropertyChangedHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicatePropertyValue@IndexerPropertyAccess@DirectUI@@CAJPEAUIInspectable@@PEAPEAU3@@Z
    static long DuplicatePropertyValue(IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@IndexerPropertyAccess@DirectUI@@AEAAJPEAUIPropertyChangedEventArgs@Data@Xaml@UI@Windows@@@Z
    long OnPropertyChanged(::Windows::UI::Xaml::Data::IPropertyChangedEventArgs *);
};
} // namespace DirectUI
