#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class KeyboardAcceleratorCopyConverter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Convert@KeyboardAcceleratorCopyConverter@@UEAAJPEAUIInspectable@@UTypeName@Interop@Xaml@UI@Windows@@0PEAUHSTRING__@@PEAPEAU2@@Z
    virtual long Convert(IInspectable *, ::Windows::UI::Xaml::Interop::TypeName, IInspectable *, HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertBack@KeyboardAcceleratorCopyConverter@@UEAAJPEAUIInspectable@@UTypeName@Interop@Xaml@UI@Windows@@0PEAUHSTRING__@@PEAPEAU2@@Z
    virtual long ConvertBack(IInspectable *, ::Windows::UI::Xaml::Interop::TypeName, IInspectable *, HSTRING__*, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0KeyboardAcceleratorCopyConverter@@QEAA@XZ
    KeyboardAcceleratorCopyConverter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@KeyboardAcceleratorCopyConverter@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
