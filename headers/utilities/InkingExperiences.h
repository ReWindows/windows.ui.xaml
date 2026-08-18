#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 1 member(s).
class InkingExperiences {
public:
    class ApplyUpdatesOperation;
    class CandidateSelectedOperation;
    class CandidatesSessionsManager;
    class CompositeOperation;
    class ConversionTimerOperation;
    class Debug;
    class DigitizerProperties;
    class Helpers;
    class ICandidateSelectedEventArgs;
    class IInkToTextContentHost;
    class IInkToTextEngine;
    class IInkToTextUIHost;
    class ILayoutView;
    class IOperation;
    class ISegment;
    class IShowCandidatesArgs;
    class IUpdateContentArgs;
    class InactivityTimerOperation;
    class InkSamplesDataProvider;
    class InkSamplesLogger;
    class InkToTextConversionOperation;
    class InkToTextDataLogger;
    class InkToTextEngine;
    class InkToTextEngineConfiguration;
    class InkToTextEngineOperation;
    class InkToTextSettings;
    class InkToTextSettingsManager;
    class InkToTextTelemetryDataProvider;
    class OperationBase;
    class ProcessAnnotationNodeOperationBase;
    class ProcessCommitNodeOperation;
    class ProcessInsertNodeOperation;
    class ProcessJoinNodeOperation;
    class ProcessOverwriteNodeOperation;
    class ProcessStrikeThroughOrScratchoutNodeOperation;
    class ReAnalyzeJoinOperation;
    class RecognizedTextObject;
    class ShowPredictionCandidatesOperation;
    class ShowRequestedCandidatesOperation;
    class SimpleOperation;
    class TextObjectBase;
    class ThreadWithDispatcherQueue;
    class TimeLogger;
    class Wrappers;
    class details;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOperationRunning@InkingExperiences@@YA_NPEBVIOperation@1@@Z
    bool IsOperationRunning(WindissectOpaque const *);
};
