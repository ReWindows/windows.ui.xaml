#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class RenderTargetBitmapGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelsAsync@RenderTargetBitmapGenerated@DirectUI@@UEAAJPEAPEAU?$IAsyncOperation@PEAUIBuffer@Streams@Storage@Windows@@@Foundation@Windows@@@Z
    virtual long GetPixelsAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@RenderTargetBitmapGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderAsync@RenderTargetBitmapGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long RenderAsync(::Windows::UI::Xaml::IUIElement *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderToSizeAsync@RenderTargetBitmapGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@HHPEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long RenderToSizeAsync(::Windows::UI::Xaml::IUIElement *, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelHeight@RenderTargetBitmapGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_PixelHeight(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelWidth@RenderTargetBitmapGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_PixelWidth(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RenderTargetBitmapGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RenderTargetBitmapGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@RenderTargetBitmapGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RenderTargetBitmapGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
