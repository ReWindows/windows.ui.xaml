#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 51 member(s).
class TextBoxInkingHost {
public:
    class CandidatesSession;
    class UpdateContentRequest;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendSpaceCharacter@TextBoxInkingHost@@QEAAJXZ
    long AppendSpaceCharacter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyMessageFilterConfig@TextBoxInkingHost@@QEAAXXZ
    void ApplyMessageFilterConfig();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHandwritingSpacesAndScrollInsertionPointToView@TextBoxInkingHost@@QEAAXXZ
    void ClearHandwritingSpacesAndScrollInsertionPointToView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSelection@TextBoxInkingHost@@UEAAJXZ
    virtual long ClearSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DbgDumpSegments@TextBoxInkingHost@@QEAAXXZ
    void DbgDumpSegments();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DbgInsertHandwritingSpaceAfterSelection@TextBoxInkingHost@@QEAAXXZ
    void DbgInsertHandwritingSpaceAfterSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSpaceAtEnd@TextBoxInkingHost@@QEAAJXZ
    long EnsureSpaceAtEnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentDispatcherQueue@TextBoxInkingHost@@UEAAJPEAPEAUIDispatcherQueue@System@Windows@@@Z
    virtual long GetContentDispatcherQueue(::Windows::System::IDispatcherQueue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInkPresenter@TextBoxInkingHost@@UEAAJPEAPEAUIInkPresenter@Inking@Input@UI@Windows@@@Z
    virtual long GetInkPresenter(::Windows::UI::Input::Inking::IInkPresenter * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIDispatcherQueue@TextBoxInkingHost@@UEAAJPEAPEAUIDispatcherQueue@System@Windows@@@Z
    virtual long GetUIDispatcherQueue(::Windows::System::IDispatcherQueue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewport@TextBoxInkingHost@@UEAAJAEAURect@Foundation@Windows@@@Z
    virtual long GetViewport(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleBackspace@TextBoxInkingHost@@QEAAJXZ
    long HandleBackspace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSelectedContent@TextBoxInkingHost@@UEAAJAEA_N@Z
    virtual long HasSelectedContent(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideCandidates@TextBoxInkingHost@@UEAAJI@Z
    virtual long HideCandidates(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidateSelected@TextBoxInkingHost@@QEAAJI@Z
    long OnCandidateSelected(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@TextBoxInkingHost@@QEAAJXZ
    long OnContentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@TextBoxInkingHost@@QEAAJXZ
    long OnSelectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewportSizeChanged@TextBoxInkingHost@@QEAAJXZ
    long OnViewportSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Redo@TextBoxInkingHost@@QEAAJXZ
    long Redo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectContent@TextBoxInkingHost@@UEAAJAEBURect@Foundation@Windows@@@Z
    virtual long SelectContent(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuppressChangeNotifications@TextBoxInkingHost@@QEBA?AVScopedSuppressChangeNotifications@CTextBoxBase@@XZ
    WindissectOpaque SuppressChangeNotifications() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Undo@TextBoxInkingHost@@QEAAJXZ
    long Undo();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextBoxInkingHost@@UEAA@XZ
    virtual ~TextBoxInkingHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCookies@TextBoxInkingHost@@AEAAXPEAUITextRange2@@@Z
    void ClearCookies(ITextRange2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHitTestResultFromCurrentInsertionPoint@TextBoxInkingHost@@AEBA?AUHitTestResult@1@XZ
    WindissectOpaque CreateHitTestResultFromCurrentInsertionPoint() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUpdateContentRequest@TextBoxInkingHost@@AEBA?AUUpdateContentRequest@1@PEAVIUpdateContentArgs@InkingExperiences@@@Z
    WindissectOpaque CreateUpdateContentRequest(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteRange@TextBoxInkingHost@@AEAAJPEAUITextRange2@@@Z
    long DeleteRange(ITextRange2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteSelection@TextBoxInkingHost@@AEAAJXZ
    long DeleteSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHandwritingSpacePresent@TextBoxInkingHost@@AEAA_NPEAUITextRange2@@@Z
    bool EnsureHandwritingSpacePresent(ITextRange2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisibility@TextBoxInkingHost@@AEAAXPEAUITextRange2@@@Z
    void EnsureVisibility(ITextRange2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDegenerateRangeAfterHandwritingSpaces@TextBoxInkingHost@@AEBA?AV?$ComPtr@UITextRange2@@@WRL@Microsoft@@PEAUITextRange2@@@Z
    WindissectOpaque GetDegenerateRangeAfterHandwritingSpaces(ITextRange2*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDegenerateRangeBeforeHandwritingSpaces@TextBoxInkingHost@@AEBA?AV?$ComPtr@UITextRange2@@@WRL@Microsoft@@PEAUITextRange2@@@Z
    WindissectOpaque GetDegenerateRangeBeforeHandwritingSpaces(ITextRange2*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRangeExcludingLeadingAndTrailingHandwritingSpaces@TextBoxInkingHost@@AEBA?AV?$ComPtr@UITextRange2@@@WRL@Microsoft@@PEAUITextRange2@@@Z
    WindissectOpaque GetRangeExcludingLeadingAndTrailingHandwritingSpaces(ITextRange2*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRangeSanitizedForHandwritingSpaces@TextBoxInkingHost@@AEBA?AV?$ComPtr@UITextRange2@@@WRL@Microsoft@@PEAUITextRange2@@@Z
    WindissectOpaque GetRangeSanitizedForHandwritingSpaces(ITextRange2*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestPoint@TextBoxInkingHost@@AEBA?AUHitTestResult@1@AEBUPoint@Foundation@Windows@@@Z
    WindissectOpaque HitTestPoint(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestPointForInsertion@TextBoxInkingHost@@AEBA?AUHitTestResult@1@AEBUPoint@Foundation@Windows@@@Z
    WindissectOpaque HitTestPointForInsertion(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestRectForDeletion@TextBoxInkingHost@@AEBA?AUHitTestResult@1@AEBURect@Foundation@Windows@@@Z
    WindissectOpaque HitTestRectForDeletion(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertHandwritingSpace@TextBoxInkingHost@@AEAAXPEAUITextRange2@@@Z
    void InsertHandwritingSpace(ITextRange2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogBackspaceTelemetry@TextBoxInkingHost@@AEAAX_NPEAUITextRange2@@@Z
    void LogBackspaceTelemetry(bool, ITextRange2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureSpaceRect@TextBoxInkingHost@@AEAAJAEAURect@Foundation@Windows@@@Z
    long MeasureSpaceRect(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeleteContentRequest@TextBoxInkingHost@@AEAAXAEAUUpdateContentRequest@1@@Z
    void ProcessDeleteContentRequest(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInsertContentRequest@TextBoxInkingHost@@AEAAXAEAUUpdateContentRequest@1@@Z
    void ProcessInsertContentRequest(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInsertHandwritingSpaceRequest@TextBoxInkingHost@@AEAAXAEAUUpdateContentRequest@1@@Z
    void ProcessInsertHandwritingSpaceRequest(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessReplaceContentRequest@TextBoxInkingHost@@AEAAXAEAUUpdateContentRequest@1@@Z
    void ProcessReplaceContentRequest(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepositionCandidates@TextBoxInkingHost@@AEAAXXZ
    void RepositionCandidates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepositionCandidatesIfNecessary@TextBoxInkingHost@@AEAAXXZ
    void RepositionCandidatesIfNecessary();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsertionPoint@TextBoxInkingHost@@AEAAXPEAUITextRange2@@@Z
    void SetInsertionPoint(ITextRange2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCreateHandwritingSpace@TextBoxInkingHost@@AEBA_NPEAUITextRange2@@@Z
    bool ShouldCreateHandwritingSpace(ITextRange2*) const;
};
