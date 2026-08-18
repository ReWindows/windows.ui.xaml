#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace InkingExperiences::InkToTextDataLogger {
class InkOnTextInvokeActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InkOnTextInvokeActivity@InkToTextDataLogger@InkingExperiences@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InkOnTextInvokeActivity@InkToTextDataLogger@InkingExperiences@@QEAA@XZ
    ~InkOnTextInvokeActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InkOnTextInvokeActivity@InkToTextDataLogger@InkingExperiences@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InkOnTextInvokeActivity@InkToTextDataLogger@InkingExperiences@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InkingExperiences::InkToTextDataLogger
