#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class TouchHitTestingHandler {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTouchHitTestingEnabled@TouchHitTestingHandler@DirectUI@@SA_NPEAVCCoreServices@@@Z
    static bool IsTouchHitTestingEnabled(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTouchHitTestingEvent@TouchHitTestingHandler@DirectUI@@QEAA_NPEAVCContentRoot@@_JPEA_J@Z
    bool OnTouchHitTestingEvent(CContentRoot *, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@TouchHitTestingHandler@DirectUI@@QEAAJPEAUICoreWindow@Core@UI@Windows@@@Z
    long Register(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@TouchHitTestingHandler@DirectUI@@QEAAJPEAUHWND__@@@Z
    long Register(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchHitTesting@TouchHitTestingHandler@DirectUI@@SAJPEAVCUIElement@@PEAUITouchHitTestingEventArgs@Core@UI@Windows@@@Z
    static long TouchHitTesting(CUIElement *, ::Windows::UI::Core::ITouchHitTestingEventArgs *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPolygonBounds@TouchHitTestingHandler@DirectUI@@CAXIPEAUPoint@Foundation@Windows@@PEAURect@45@@Z
    static void GetPolygonBounds(unsigned int, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTouchHitTesting@TouchHitTestingHandler@DirectUI@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUITouchHitTestingEventArgs@456@@Z
    long OnTouchHitTesting(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::ITouchHitTestingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBestEval@TouchHitTestingHandler@DirectUI@@CAJAEBUCoreProximityEvaluation@Core@UI@Windows@@AEAU3456@AEBURect@Foundation@6@AEAU786@AEAIPEAVCUIElement@@PEAPEAV9@@Z
    static long UpdateBestEval(::Windows::UI::Core::CoreProximityEvaluation const &, ::Windows::UI::Core::CoreProximityEvaluation &, WindissectOpaque const &, WindissectOpaque &, unsigned int &, CUIElement *, CUIElement * *);
};
} // namespace DirectUI
