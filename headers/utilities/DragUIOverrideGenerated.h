#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI {
class DragUIOverrideGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@DragUIOverrideGenerated@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromBitmapImage@DragUIOverrideGenerated@DirectUI@@UEAAJPEAUIBitmapImage@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long SetContentFromBitmapImage(::Windows::UI::Xaml::Media::Imaging::IBitmapImage *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromBitmapImageWithAnchorPoint@DragUIOverrideGenerated@DirectUI@@UEAAJPEAUIBitmapImage@Imaging@Media@Xaml@UI@Windows@@UPoint@Foundation@8@@Z
    virtual long SetContentFromBitmapImageWithAnchorPoint(::Windows::UI::Xaml::Media::Imaging::IBitmapImage *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromSoftwareBitmap@DragUIOverrideGenerated@DirectUI@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@@Z
    virtual long SetContentFromSoftwareBitmap(::Windows::Graphics::Imaging::ISoftwareBitmap *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromSoftwareBitmapWithAnchorPoint@DragUIOverrideGenerated@DirectUI@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@UPoint@Foundation@6@@Z
    virtual long SetContentFromSoftwareBitmapWithAnchorPoint(::Windows::Graphics::Imaging::ISoftwareBitmap *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Caption@DragUIOverrideGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Caption(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCaptionVisible@DragUIOverrideGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsCaptionVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsContentVisible@DragUIOverrideGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsContentVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsGlyphVisible@DragUIOverrideGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsGlyphVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Caption@DragUIOverrideGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Caption(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsCaptionVisible@DragUIOverrideGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsCaptionVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsContentVisible@DragUIOverrideGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsContentVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsGlyphVisible@DragUIOverrideGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsGlyphVisible(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DragUIOverrideGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DragUIOverrideGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DragUIOverrideGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DragUIOverrideGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
