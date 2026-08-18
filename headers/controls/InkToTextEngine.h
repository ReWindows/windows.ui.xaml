#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 28 member(s).
namespace InkingExperiences {
class InkToTextEngine {
public:
    class Resources;
    class UpdateObject;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfiguration@InkToTextEngine@InkingExperiences@@UEBA?AUInkToTextEngineConfiguration@2@XZ
    virtual WindissectOpaque GetConfiguration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConfigurationSupported@InkToTextEngine@InkingExperiences@@QEBA_NAEBUInkToTextEngineConfiguration@2@@Z
    bool IsConfigurationSupported(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidateSelected@InkToTextEngine@InkingExperiences@@UEAAJPEAVICandidateSelectedEventArgs@2@@Z
    virtual long OnCandidateSelected(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputEnabledStateChanged@InkToTextEngine@InkingExperiences@@UEAAJ_N@Z
    virtual long OnInputEnabledStateChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOperationCompleted@InkToTextEngine@InkingExperiences@@UEAAJPEAVIOperation@2@@Z
    virtual long OnOperationCompleted(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewChangeCompleted@InkToTextEngine@InkingExperiences@@UEAAJXZ
    virtual long OnViewChangeCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewChanged@InkToTextEngine@InkingExperiences@@UEAAJXZ
    virtual long OnViewChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@InkToTextEngine@InkingExperiences@@UEAAJPEAVIInkToTextUIHost@2@PEAVIInkToTextContentHost@2@@Z
    virtual long Start(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@InkToTextEngine@InkingExperiences@@UEAAJW4InkToTextDismissReason@2@_N@Z
    virtual long Stop(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetConfiguration@InkToTextEngine@InkingExperiences@@UEAAJAEBUInkToTextEngineConfiguration@2@AEA_N@Z
    virtual long TrySetConfiguration(WindissectOpaque const &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InkToTextEngine@InkingExperiences@@UEAA@XZ
    virtual ~InkToTextEngine();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyConversionOptionsPayload@InkToTextEngine@InkingExperiences@@AEAAXI@Z
    void ApplyConversionOptionsPayload(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectInkPresenter@InkToTextEngine@InkingExperiences@@CAJPEAV12@PEAUIInkPresenter@Inking@Input@UI@Windows@@AEAUInkPresenterRegistrationTokens@12@@Z
    static long ConnectInkPresenter(WindissectOpaque *, ::Windows::UI::Input::Inking::IInkPresenter *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectInkPresenter@InkToTextEngine@InkingExperiences@@CAJPEAUIInkPresenter@Inking@Input@UI@Windows@@AEBUInkPresenterRegistrationTokens@12@@Z
    static long DisconnectInkPresenter(::Windows::UI::Input::Inking::IInkPresenter *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureConversionTimer@InkToTextEngine@InkingExperiences@@AEAAJXZ
    long EnsureConversionTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInactivityTimer@InkToTextEngine@InkingExperiences@@AEAAJXZ
    long EnsureInactivityTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInkAnalyzers@InkToTextEngine@InkingExperiences@@AEAAJXZ
    long EnsureInkAnalyzers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnyOperationActive@InkToTextEngine@InkingExperiences@@AEBA_NXZ
    bool IsAnyOperationActive() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConversionTimerTick@InkToTextEngine@InkingExperiences@@AEAAJPEAUIDispatcherQueueTimer@System@Windows@@PEAUIInspectable@@@Z
    long OnConversionTimerTick(::Windows::System::IDispatcherQueueTimer *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInactivityTimerTick@InkToTextEngine@InkingExperiences@@AEAAJPEAUIDispatcherQueueTimer@System@Windows@@PEAUIInspectable@@@Z
    long OnInactivityTimerTick(::Windows::System::IDispatcherQueueTimer *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStrokeCanceledOrEnded@InkToTextEngine@InkingExperiences@@AEAAJPEAUIInkStrokeInput@Inking@Input@UI@Windows@@PEAUIPointerEventArgs@Core@67@@Z
    long OnStrokeCanceledOrEnded(::Windows::UI::Input::Inking::IInkStrokeInput *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStrokeStarted@InkToTextEngine@InkingExperiences@@AEAAJPEAUIInkStrokeInput@Inking@Input@UI@Windows@@PEAUIPointerEventArgs@Core@67@@Z
    long OnStrokeStarted(::Windows::UI::Input::Inking::IInkStrokeInput *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStrokesCollected@InkToTextEngine@InkingExperiences@@AEAAJPEAUIInkPresenter@Inking@Input@UI@Windows@@PEAUIInkStrokesCollectedEventArgs@4567@@Z
    long OnStrokesCollected(::Windows::UI::Input::Inking::IInkPresenter *, ::Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStrokesErased@InkToTextEngine@InkingExperiences@@AEAAJPEAUIInkPresenter@Inking@Input@UI@Windows@@PEAUIInkStrokesErasedEventArgs@4567@@Z
    long OnStrokesErased(::Windows::UI::Input::Inking::IInkPresenter *, ::Windows::UI::Input::Inking::IInkStrokesErasedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunScheduler@InkToTextEngine@InkingExperiences@@AEAAX_N@Z
    void RunScheduler(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldEnableConversionTimerForPendingUpdate@InkToTextEngine@InkingExperiences@@AEBA_NXZ
    bool ShouldEnableConversionTimerForPendingUpdate() const;
};
} // namespace InkingExperiences
