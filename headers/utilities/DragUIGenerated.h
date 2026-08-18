#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class DragUIGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromBitmapImage@DragUIGenerated@DirectUI@@UEAAJPEAUIBitmapImage@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long SetContentFromBitmapImage(::Windows::UI::Xaml::Media::Imaging::IBitmapImage *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromBitmapImageWithAnchorPoint@DragUIGenerated@DirectUI@@UEAAJPEAUIBitmapImage@Imaging@Media@Xaml@UI@Windows@@UPoint@Foundation@8@@Z
    virtual long SetContentFromBitmapImageWithAnchorPoint(::Windows::UI::Xaml::Media::Imaging::IBitmapImage *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromDataPackage@DragUIGenerated@DirectUI@@UEAAJXZ
    virtual long SetContentFromDataPackage();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromSoftwareBitmap@DragUIGenerated@DirectUI@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@@Z
    virtual long SetContentFromSoftwareBitmap(::Windows::Graphics::Imaging::ISoftwareBitmap *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromSoftwareBitmapWithAnchorPoint@DragUIGenerated@DirectUI@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@UPoint@Foundation@6@@Z
    virtual long SetContentFromSoftwareBitmapWithAnchorPoint(::Windows::Graphics::Imaging::ISoftwareBitmap *, WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DragUIGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DragUIGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DragUIGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DragUIGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
