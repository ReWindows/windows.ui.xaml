#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class XamlPresenter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlPresenter@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFontScaleImpl@XamlPresenter@DirectUI@@QEAAJM@Z
    long SetFontScaleImpl(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResourceManager@XamlPresenter@DirectUI@@UEAAJPEAUIMrtResourceManager@@@Z
    virtual long SetResourceManager(IMrtResourceManager *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewActivityStateImpl@XamlPresenter@DirectUI@@QEAAJEE@Z
    long SetViewActivityStateImpl(unsigned char, unsigned char);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlPresenter@DirectUI@@QEAA@XZ
    XamlPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundsImpl@XamlPresenter@DirectUI@@QEAAJPEAURect@Foundation@Windows@@@Z
    long get_BoundsImpl(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResourcesImpl@XamlPresenter@DirectUI@@QEAAJPEAPEAUIResourceDictionary@Xaml@UI@Windows@@@Z
    long get_ResourcesImpl(::Windows::UI::Xaml::IResourceDictionary * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContentImpl@XamlPresenter@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long put_ContentImpl(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ResourcesImpl@XamlPresenter@DirectUI@@QEAAJPEAUIResourceDictionary@Xaml@UI@Windows@@@Z
    long put_ResourcesImpl(::Windows::UI::Xaml::IResourceDictionary *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlPresenter@DirectUI@@UEAA@XZ
    virtual ~XamlPresenter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyAtlasSizeHint@XamlPresenter@DirectUI@@AEAAJXZ
    long ApplyAtlasSizeHint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@XamlPresenter@DirectUI@@AEAAJW4ApplicationTheme@Xaml@UI@Windows@@@Z
    long Initialize(int);
};
} // namespace DirectUI
