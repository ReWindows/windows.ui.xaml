#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace InkingExperiences {
class InkToTextTelemetryDataProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIntegratedPenDigitizerProperties@InkToTextTelemetryDataProvider@InkingExperiences@@QEAA?AVDigitizerProperties@2@XZ
    WindissectOpaque GetIntegratedPenDigitizerProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsInputLanguageLowUsed@InkToTextTelemetryDataProvider@InkingExperiences@@QEAA_NXZ
    bool GetIsInputLanguageLowUsed();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InkToTextTelemetryDataProvider@InkingExperiences@@QEAA@XZ
    InkToTextTelemetryDataProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoked@InkToTextTelemetryDataProvider@InkingExperiences@@QEAAXAEBUInkToTextEngineConfiguration@2@@Z
    void OnInvoked(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLogUnexpectedAnnotatedNodes@InkToTextTelemetryDataProvider@InkingExperiences@@QEAAXW4InkAnalysisAnnotationKind@Analysis@Internal@Inking@Input@UI@Windows@@I@Z
    void OnLogUnexpectedAnnotatedNodes(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOperationCompleted@InkToTextTelemetryDataProvider@InkingExperiences@@QEAAXW4Operation@InkToTextDataLogger@2@@Z
    void OnOperationCompleted(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOperationStarted@InkToTextTelemetryDataProvider@InkingExperiences@@QEAAXW4Operation@InkToTextDataLogger@2@@Z
    void OnOperationStarted(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetTelemetryArgs@InkToTextTelemetryDataProvider@InkingExperiences@@QEAAXXZ
    void ResetTelemetryArgs();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InkToTextTelemetryDataProvider@InkingExperiences@@QEAA@XZ
    ~InkToTextTelemetryDataProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIntegratedPenDigitizerProperties@InkToTextTelemetryDataProvider@InkingExperiences@@AEAA?AVDigitizerProperties@2@XZ
    WindissectOpaque CreateIntegratedPenDigitizerProperties();
};
} // namespace InkingExperiences
