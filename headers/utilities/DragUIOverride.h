#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class DragUIOverride {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DragUIOverride@DirectUI@@QEAAJPEAU?$IAsyncOperation@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@Windows@@PEAUIInspectable@@_N@Z
    long Initialize(WindissectOpaque *, IInspectable *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromBitmapImageImpl@DragUIOverride@DirectUI@@QEAAJPEAUIBitmapImage@Imaging@Media@Xaml@UI@Windows@@@Z
    long SetContentFromBitmapImageImpl(::Windows::UI::Xaml::Media::Imaging::IBitmapImage *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromBitmapImageWithAnchorPointImpl@DragUIOverride@DirectUI@@QEAAJPEAUIBitmapImage@Imaging@Media@Xaml@UI@Windows@@UPoint@Foundation@8@@Z
    long SetContentFromBitmapImageWithAnchorPointImpl(::Windows::UI::Xaml::Media::Imaging::IBitmapImage *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsCaptionVisibleImpl@DragUIOverride@DirectUI@@QEAAJE@Z
    long put_IsCaptionVisibleImpl(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragUIOverride@DirectUI@@UEAA@XZ
    virtual ~DragUIOverride();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterOverride@DragUIOverride@DirectUI@@AEAAXXZ
    void RegisterOverride();
};
} // namespace DirectUI
