#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class ParserServiceProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServiceImpl@ParserServiceProvider@DirectUI@@QEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    long GetServiceImpl(::Windows::UI::Xaml::Interop::TypeName, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveImpl@ParserServiceProvider@DirectUI@@QEAAJPEAUHSTRING__@@PEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    long ResolveImpl(HSTRING__*, ::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaseUriImpl@ParserServiceProvider@DirectUI@@QEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long get_BaseUriImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RootObjectImpl@ParserServiceProvider@DirectUI@@QEAAJPEAPEAUIInspectable@@@Z
    long get_RootObjectImpl(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetObjectImpl@ParserServiceProvider@DirectUI@@QEAAJPEAPEAUIInspectable@@@Z
    long get_TargetObjectImpl(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetPropertyImpl@ParserServiceProvider@DirectUI@@QEAAJPEAPEAUIInspectable@@@Z
    long get_TargetPropertyImpl(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BaseUriImpl@ParserServiceProvider@DirectUI@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long put_BaseUriImpl(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ParserServiceProvider@DirectUI@@UEAA@XZ
    virtual ~ParserServiceProvider();
};
} // namespace DirectUI
