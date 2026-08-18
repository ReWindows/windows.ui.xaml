#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class CCueStyler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertUserColor@CCueStyler@DirectUI@@SA?AUColor@UI@Windows@@W4ClosedCaptionColor@ClosedCaptioning@Media@5@W4ClosedCaptionOpacity@785@@Z
    static ::Windows::UI::Color ConvertUserColor(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertUserFontSizeScale@CCueStyler@DirectUI@@SANW4ClosedCaptionSize@ClosedCaptioning@Media@Windows@@@Z
    static double ConvertUserFontSizeScale(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertUserFontStyle@CCueStyler@DirectUI@@SA?AVStringReference@Internal@Windows@@PEBG@Z
    static ::Windows::Internal::StringReference ConvertUserFontStyle(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertUserFontStyle@CCueStyler@DirectUI@@SA?AVStringReference@Internal@Windows@@W4ClosedCaptionStyle@ClosedCaptioning@Media@5@@Z
    static ::Windows::Internal::StringReference ConvertUserFontStyle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOutline@CCueStyler@DirectUI@@QEAAJPEAUITimedTextLine@Core@Media@Windows@@PEAUITimedTextStyle@456@PEAUITimedTextRegion@456@PEAVGrid@2@@Z
    long CreateOutline(::Windows::Media::Core::ITimedTextLine *, ::Windows::Media::Core::ITimedTextStyle *, ::Windows::Media::Core::ITimedTextRegion *, ::DirectUI::Grid *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCueStyler@DirectUI@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFontSizeRatio@CCueStyler@DirectUI@@QEAAXN@Z
    void SetFontSizeRatio(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImage@CCueStyler@DirectUI@@QEAAJAEAV?$ComPtr@VImage@DirectUI@@@ctl@@AEBV?$ComPtr@UIImageCue@Core@Media@Windows@@@4@@Z
    long SetImage(WindissectOpaque &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageRegionConfiguration@CCueStyler@DirectUI@@QEAAJQEAVBorder@2@AEBV?$ComPtr@UIImageCue@Core@Media@Windows@@@ctl@@NNNN@Z
    long SetImageRegionConfiguration(::DirectUI::Border * const, WindissectOpaque const &, double, double, double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRegionConfiguration@CCueStyler@DirectUI@@QEAAJPEAVBorder@2@PEAUITimedTextRegion@Core@Media@Windows@@NNNN@Z
    long SetRegionConfiguration(::DirectUI::Border *, ::Windows::Media::Core::ITimedTextRegion *, double, double, double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextBlock@CCueStyler@DirectUI@@QEAAJPEAUITimedTextLine@Core@Media@Windows@@PEAUITimedTextStyle@456@PEAVTextBlock@2@PEAUITimedTextRegion@456@PEAVGrid@2@_N@Z
    long SetTextBlock(::Windows::Media::Core::ITimedTextLine *, ::Windows::Media::Core::ITimedTextStyle *, ::DirectUI::TextBlock *, ::Windows::Media::Core::ITimedTextRegion *, ::DirectUI::Grid *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextBlockEffect@CCueStyler@DirectUI@@QEAAJPEAVTextBlock@2@PEAVCanvas@2@PEAVGrid@2@@Z
    long SetTextBlockEffect(::DirectUI::TextBlock *, ::DirectUI::Canvas *, ::DirectUI::Grid *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCueStyler@DirectUI@@QEAA@XZ
    ~CCueStyler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDepressedStyle@CCueStyler@DirectUI@@AEAAJPEAUICompositionBrush@Composition@UI@Windows@@UVector2@Numerics@Foundation@6@PEAUIVisualCollection@456@W4ClosedCaptionSize@ClosedCaptioning@Media@6@@Z
    long ApplyDepressedStyle(::Windows::UI::Composition::ICompositionBrush *, WindissectOpaque, ::Windows::UI::Composition::IVisualCollection *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDropShadowStyle@CCueStyler@DirectUI@@AEAAJPEAVTextBlock@2@W4ClosedCaptionSize@ClosedCaptioning@Media@Windows@@@Z
    long ApplyDropShadowStyle(::DirectUI::TextBlock *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRaisedStyle@CCueStyler@DirectUI@@AEAAJPEAUICompositionBrush@Composition@UI@Windows@@UVector2@Numerics@Foundation@6@PEAUIVisualCollection@456@W4ClosedCaptionSize@ClosedCaptioning@Media@6@@Z
    long ApplyRaisedStyle(::Windows::UI::Composition::ICompositionBrush *, WindissectOpaque, ::Windows::UI::Composition::IVisualCollection *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyUniformStyle@CCueStyler@DirectUI@@AEAAJPEAUICompositionBrush@Composition@UI@Windows@@UVector2@Numerics@Foundation@6@PEAUIVisualCollection@456@W4ClosedCaptionSize@ClosedCaptioning@Media@6@@Z
    long ApplyUniformStyle(::Windows::UI::Composition::ICompositionBrush *, WindissectOpaque, ::Windows::UI::Composition::IVisualCollection *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateFontSize@CCueStyler@DirectUI@@AEAAJPEAUITimedTextStyle@Core@Media@Windows@@PEAN@Z
    long CalculateFontSize(::Windows::Media::Core::ITimedTextStyle *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMaskBrush@CCueStyler@DirectUI@@AEAA?AV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositionBrush@Composition@UI@Windows@@0@Z
    WindissectOpaque CreateMaskBrush(::Windows::UI::Composition::ICompositionBrush *, ::Windows::UI::Composition::ICompositionBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOutlineHelper@CCueStyler@DirectUI@@AEAAJPEAUITimedTextLine@Core@Media@Windows@@PEAUITimedTextStyle@456@PEAUITimedTextRegion@456@PEAVGrid@2@NN@Z
    long CreateOutlineHelper(::Windows::Media::Core::ITimedTextLine *, ::Windows::Media::Core::ITimedTextStyle *, ::Windows::Media::Core::ITimedTextRegion *, ::DirectUI::Grid *, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRun@CCueStyler@DirectUI@@AEAAJPEAUITimedTextLine@Core@Media@Windows@@PEAUITimedTextStyle@456@HH_NPEAPEAUIRun@Documents@Xaml@UI@6@@Z
    long CreateRun(::Windows::Media::Core::ITimedTextLine *, ::Windows::Media::Core::ITimedTextStyle *, int, int, bool, ::Windows::UI::Xaml::Documents::IRun * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualAndAdd@CCueStyler@DirectUI@@AEAAJPEAUICompositionBrush@Composition@UI@Windows@@UVector2@Numerics@Foundation@6@UVector3@896@PEAUIVisualCollection@456@@Z
    long CreateVisualAndAdd(::Windows::UI::Composition::ICompositionBrush *, WindissectOpaque, WindissectOpaque, ::Windows::UI::Composition::IVisualCollection *);
};
} // namespace DirectUI
