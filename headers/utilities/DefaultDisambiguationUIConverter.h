#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class DefaultDisambiguationUIConverter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Convert@DefaultDisambiguationUIConverter@DirectUI@@UEAAJPEAUIInspectable@@UTypeName@Interop@Xaml@UI@Windows@@0PEAUHSTRING__@@PEAPEAU3@@Z
    virtual long Convert(IInspectable *, ::Windows::UI::Xaml::Interop::TypeName, IInspectable *, HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertBack@DefaultDisambiguationUIConverter@DirectUI@@UEAAJPEAUIInspectable@@UTypeName@Interop@Xaml@UI@Windows@@0PEAUHSTRING__@@PEAPEAU3@@Z
    virtual long ConvertBack(IInspectable *, ::Windows::UI::Xaml::Interop::TypeName, IInspectable *, HSTRING__*, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DefaultDisambiguationUIConverter@DirectUI@@QEAA@XZ
    DefaultDisambiguationUIConverter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DefaultDisambiguationUIConverter@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
