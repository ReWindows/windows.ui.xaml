#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 39 member(s).
namespace DirectUI {
class HandwritingViewGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidates@HandwritingViewGenerated@DirectUI@@QEAAJIPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    long GetCandidates(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatesChangedEventSourceNoRef@HandwritingViewGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVHandwritingView@Controls@Xaml@UI@Windows@@PEAVHandwritingViewCandidatesChangedEventArgs@2345@@Foundation@Windows@@UIHandwritingView@Controls@Xaml@UI@3@UIHandwritingViewCandidatesChangedEventArgs@5673@@2@@Z
    long GetCandidatesChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosedEventSourceNoRef@HandwritingViewGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVHandwritingView@Controls@Xaml@UI@Windows@@PEAVHandwritingPanelClosedEventArgs@2345@@Foundation@Windows@@UIHandwritingView@Controls@Xaml@UI@3@UIHandwritingPanelClosedEventArgs@5673@@2@@Z
    long GetClosedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFunctionButtonPressedEventSourceNoRef@HandwritingViewGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UIHandwritingViewFunctionButtonPressedHandler@Controls@Xaml@UI@Windows@@UIInspectable@@UIHandwritingViewFunctionButtonPressedArgs@2345@@2@@Z
    long GetFunctionButtonPressedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenedEventSourceNoRef@HandwritingViewGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVHandwritingView@Controls@Xaml@UI@Windows@@PEAVHandwritingPanelOpenedEventArgs@2345@@Foundation@Windows@@UIHandwritingView@Controls@Xaml@UI@3@UIHandwritingPanelOpenedEventArgs@5673@@2@@Z
    long GetOpenedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextSubmittedEventSourceNoRef@HandwritingViewGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVHandwritingView@Controls@Xaml@UI@Windows@@PEAVHandwritingViewTextSubmittedEventArgs@2345@@Foundation@Windows@@UIHandwritingView@Controls@Xaml@UI@3@UIHandwritingViewTextSubmittedEventArgs@5673@@2@@Z
    long GetTextSubmittedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@HandwritingViewGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectCandidate@HandwritingViewGenerated@DirectUI@@QEAAJII@Z
    long SelectCandidate(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryClose@HandwritingViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long TryClose(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryOpen@HandwritingViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long TryOpen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CandidatesChanged@HandwritingViewGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVHandwritingView@Controls@Xaml@UI@Windows@@PEAVHandwritingViewCandidatesChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_CandidatesChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Closed@HandwritingViewGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVHandwritingView@Controls@Xaml@UI@Windows@@PEAVHandwritingPanelClosedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Closed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FunctionButtonPressed@HandwritingViewGenerated@DirectUI@@UEAAJPEAUIHandwritingViewFunctionButtonPressedHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_FunctionButtonPressed(::Windows::UI::Xaml::Controls::IHandwritingViewFunctionButtonPressedHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Opened@HandwritingViewGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVHandwritingView@Controls@Xaml@UI@Windows@@PEAVHandwritingPanelOpenedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Opened(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TextSubmitted@HandwritingViewGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVHandwritingView@Controls@Xaml@UI@Windows@@PEAVHandwritingViewTextSubmittedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_TextSubmitted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreCandidatesEnabled@HandwritingViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_AreCandidatesEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOpen@HandwritingViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsOpen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlacementAlignment@HandwritingViewGenerated@DirectUI@@UEAAJPEAW4HandwritingPanelPlacementAlignment@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PlacementAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlacementTarget@HandwritingViewGenerated@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_PlacementTarget(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldConstrainToRootBounds@HandwritingViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_ShouldConstrainToRootBounds(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowEmojiButtonInPlaceOfSwitchToKeyboard@HandwritingViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_ShowEmojiButtonInPlaceOfSwitchToKeyboard(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowEnterButtonForSingleLineTextBox@HandwritingViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_ShowEnterButtonForSingleLineTextBox(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuspendInput@HandwritingViewGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_SuspendInput(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AreCandidatesEnabled@HandwritingViewGenerated@DirectUI@@UEAAJE@Z
    virtual long put_AreCandidatesEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlacementAlignment@HandwritingViewGenerated@DirectUI@@UEAAJW4HandwritingPanelPlacementAlignment@Controls@Xaml@UI@Windows@@@Z
    virtual long put_PlacementAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlacementTarget@HandwritingViewGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long put_PlacementTarget(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShouldConstrainToRootBounds@HandwritingViewGenerated@DirectUI@@UEAAJE@Z
    virtual long put_ShouldConstrainToRootBounds(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShowEmojiButtonInPlaceOfSwitchToKeyboard@HandwritingViewGenerated@DirectUI@@UEAAJE@Z
    virtual long put_ShowEmojiButtonInPlaceOfSwitchToKeyboard(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShowEnterButtonForSingleLineTextBox@HandwritingViewGenerated@DirectUI@@UEAAJE@Z
    virtual long put_ShowEnterButtonForSingleLineTextBox(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SuspendInput@HandwritingViewGenerated@DirectUI@@UEAAJE@Z
    virtual long put_SuspendInput(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CandidatesChanged@HandwritingViewGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_CandidatesChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Closed@HandwritingViewGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Closed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FunctionButtonPressed@HandwritingViewGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FunctionButtonPressed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Opened@HandwritingViewGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Opened(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TextSubmitted@HandwritingViewGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_TextSubmitted(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@HandwritingViewGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@HandwritingViewGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@HandwritingViewGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@HandwritingViewGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
