#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace DirectUI {
class XamlMobileDragVisualOverride {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@XamlMobileDragVisualOverride@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromSoftwareBitmap@XamlMobileDragVisualOverride@DirectUI@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@@Z
    virtual long SetContentFromSoftwareBitmap(::Windows::Graphics::Imaging::ISoftwareBitmap *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentFromSoftwareBitmapWithAnchorPoint@XamlMobileDragVisualOverride@DirectUI@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@UPoint@Foundation@6@@Z
    virtual long SetContentFromSoftwareBitmapWithAnchorPoint(::Windows::Graphics::Imaging::ISoftwareBitmap *, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlMobileDragVisualOverride@DirectUI@@QEAA@XZ
    XamlMobileDragVisualOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Caption@XamlMobileDragVisualOverride@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Caption(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCaptionVisible@XamlMobileDragVisualOverride@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsCaptionVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsContentVisible@XamlMobileDragVisualOverride@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsContentVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsGlyphVisible@XamlMobileDragVisualOverride@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsGlyphVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Caption@XamlMobileDragVisualOverride@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Caption(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsCaptionVisible@XamlMobileDragVisualOverride@DirectUI@@UEAAJE@Z
    virtual long put_IsCaptionVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsContentVisible@XamlMobileDragVisualOverride@DirectUI@@UEAAJE@Z
    virtual long put_IsContentVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsGlyphVisible@XamlMobileDragVisualOverride@DirectUI@@UEAAJE@Z
    virtual long put_IsGlyphVisible(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlMobileDragVisualOverride@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlMobileDragVisualOverride@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlMobileDragVisualOverride@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
