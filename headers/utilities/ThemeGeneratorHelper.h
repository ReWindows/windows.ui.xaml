#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class ThemeGeneratorHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ThemeGeneratorHelper@DirectUI@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreventHitTestingWhileAnimating@ThemeGeneratorHelper@DirectUI@@QEAAJ_J@Z
    long PreventHitTestingWhileAnimating(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterKeyFrame@ThemeGeneratorHelper@DirectUI@@QEAAJPEAUHSTRING__@@N_J1PEAUTimingFunctionDescription@2@@Z
    long RegisterKeyFrame(HSTRING__*, double, int64_t, int64_t, ::DirectUI::TimingFunctionDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPointerKeyFrame@ThemeGeneratorHelper@DirectUI@@QEAAJPEAUHSTRING__@@W4PointerDirection@2@NN_J@Z
    long RegisterPointerKeyFrame(HSTRING__*, int, double, double, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set2DTransformOriginValues@ThemeGeneratorHelper@DirectUI@@QEAAJUPoint@Foundation@Windows@@@Z
    long Set2DTransformOriginValues(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClipOriginValues@ThemeGeneratorHelper@DirectUI@@QEAAJUPoint@Foundation@Windows@@@Z
    long SetClipOriginValues(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ThemeGeneratorHelper@DirectUI@@QEAA@UPoint@Foundation@Windows@@0PEAUHSTRING__@@PEAUIDependencyObject@Xaml@UI@4@EPEAU?$IVector@PEAVTimeline@Animation@Media@Xaml@UI@Windows@@@Collections@34@@Z
    ThemeGeneratorHelper(WindissectOpaque, WindissectOpaque, HSTRING__*, ::Windows::UI::Xaml::IDependencyObject *, unsigned char, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThemeGeneratorHelper@DirectUI@@QEAA@XZ
    ~ThemeGeneratorHelper();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOriginForProperty@ThemeGeneratorHelper@DirectUI@@AEAAJUPoint@Foundation@Windows@@PEAUHSTRING__@@AEAE@Z
    long SetOriginForProperty(WindissectOpaque, HSTRING__*, unsigned char &);
};
} // namespace DirectUI
