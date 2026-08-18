#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ExternalObjectReference {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConditionalWrap@ExternalObjectReference@DirectUI@@SAJPEAUIInspectable@@PEAPEAVDependencyObject@2@PEAE@Z
    static long ConditionalWrap(IInspectable *, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExternalObjectReference@ExternalObjectReference@DirectUI@@UEAA_NXZ
    virtual bool IsExternalObjectReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBeWrapped@ExternalObjectReference@DirectUI@@SAJPEAUIInspectable@@AEAE@Z
    static long ShouldBeWrapped(IInspectable *, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Wrap@ExternalObjectReference@DirectUI@@SAJPEAUIInspectable@@PEAPEAVDependencyObject@2@@Z
    static long Wrap(IInspectable *, ::DirectUI::DependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Target@ExternalObjectReference@DirectUI@@QEAAJPEAPEAUIInspectable@@@Z
    long get_Target(IInspectable * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ExternalObjectReference@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
