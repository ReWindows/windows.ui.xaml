#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class TextFormatting {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TextFormatting@@SAJPEAVCCoreServices@@PEAPEAV1@@Z
    static long Create(CCoreServices *, TextFormatting * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCopy@TextFormatting@@SAJPEAVCCoreServices@@PEBV1@PEAPEAV1@@Z
    static long CreateCopy(CCoreServices *, TextFormatting const *, TextFormatting * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefault@TextFormatting@@SAJPEAVCCoreServices@@PEAPEAV1@@Z
    static long CreateDefault(CCoreServices *, TextFormatting * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaledFontSize@TextFormatting@@QEBAMM@Z
    float GetScaledFontSize(float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveLanguageListString@TextFormatting@@QEAAJPEAVCCoreServices@@@Z
    long ResolveLanguageListString(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveLanguageString@TextFormatting@@QEAAJPEAVCCoreServices@@@Z
    long ResolveLanguageString(CCoreServices *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFontFamily@TextFormatting@@QEAAJPEAVCDependencyObject@@PEAVCFontFamily@@@Z
    long SetFontFamily(CDependencyObject *, CFontFamily *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForeground@TextFormatting@@QEAAJPEAVCDependencyObject@@PEAVCBrush@@@Z
    long SetForeground(CDependencyObject *, CBrush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLanguageString@TextFormatting@@QEAAXVxstring_ptr@@@Z
    void SetLanguageString(xstring_ptr);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResolvedLanguageListString@TextFormatting@@QEAAXVxstring_ptr@@@Z
    void SetResolvedLanguageListString(xstring_ptr);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResolvedLanguageString@TextFormatting@@QEAAXVxstring_ptr@@@Z
    void SetResolvedLanguageString(xstring_ptr);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextFormatting@@AEAA@XZ
    TextFormatting();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextFormatting@@EEAA@XZ
    virtual ~TextFormatting();
};
