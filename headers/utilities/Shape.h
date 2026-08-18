#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 30 member(s).
namespace DirectUI {
class Shape {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlphaMask@Shape@DirectUI@@UEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z
    virtual long GetAlphaMask(::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Shape@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Fill@Shape@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_Fill(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GeometryTransform@Shape@DirectUI@@UEAAJPEAPEAUITransform@Media@Xaml@UI@Windows@@@Z
    virtual long get_GeometryTransform(::Windows::UI::Xaml::Media::ITransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stretch@Shape@DirectUI@@UEAAJPEAW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long get_Stretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stroke@Shape@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_Stroke(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StrokeDashArray@Shape@DirectUI@@UEAAJPEAPEAU?$IVector@N@Collections@Foundation@Windows@@@Z
    virtual long get_StrokeDashArray(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StrokeDashCap@Shape@DirectUI@@UEAAJPEAW4PenLineCap@Media@Xaml@UI@Windows@@@Z
    virtual long get_StrokeDashCap(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StrokeDashOffset@Shape@DirectUI@@UEAAJPEAN@Z
    virtual long get_StrokeDashOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StrokeEndLineCap@Shape@DirectUI@@UEAAJPEAW4PenLineCap@Media@Xaml@UI@Windows@@@Z
    virtual long get_StrokeEndLineCap(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StrokeLineJoin@Shape@DirectUI@@UEAAJPEAW4PenLineJoin@Media@Xaml@UI@Windows@@@Z
    virtual long get_StrokeLineJoin(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StrokeMiterLimit@Shape@DirectUI@@UEAAJPEAN@Z
    virtual long get_StrokeMiterLimit(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StrokeStartLineCap@Shape@DirectUI@@UEAAJPEAW4PenLineCap@Media@Xaml@UI@Windows@@@Z
    virtual long get_StrokeStartLineCap(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StrokeThickness@Shape@DirectUI@@UEAAJPEAN@Z
    virtual long get_StrokeThickness(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Fill@Shape@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_Fill(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stretch@Shape@DirectUI@@UEAAJW4Stretch@Media@Xaml@UI@Windows@@@Z
    virtual long put_Stretch(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stroke@Shape@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_Stroke(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StrokeDashArray@Shape@DirectUI@@UEAAJPEAU?$IVector@N@Collections@Foundation@Windows@@@Z
    virtual long put_StrokeDashArray(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StrokeDashCap@Shape@DirectUI@@UEAAJW4PenLineCap@Media@Xaml@UI@Windows@@@Z
    virtual long put_StrokeDashCap(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StrokeDashOffset@Shape@DirectUI@@UEAAJN@Z
    virtual long put_StrokeDashOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StrokeEndLineCap@Shape@DirectUI@@UEAAJW4PenLineCap@Media@Xaml@UI@Windows@@@Z
    virtual long put_StrokeEndLineCap(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StrokeLineJoin@Shape@DirectUI@@UEAAJW4PenLineJoin@Media@Xaml@UI@Windows@@@Z
    virtual long put_StrokeLineJoin(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StrokeMiterLimit@Shape@DirectUI@@UEAAJN@Z
    virtual long put_StrokeMiterLimit(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StrokeStartLineCap@Shape@DirectUI@@UEAAJW4PenLineCap@Media@Xaml@UI@Windows@@@Z
    virtual long put_StrokeStartLineCap(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StrokeThickness@Shape@DirectUI@@UEAAJN@Z
    virtual long put_StrokeThickness(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Shape@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Shape@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Shape@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Shape@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlphaMaskImpl@Shape@DirectUI@@AEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z
    long GetAlphaMaskImpl(::Windows::UI::Composition::ICompositionBrush * *);
};
} // namespace DirectUI
