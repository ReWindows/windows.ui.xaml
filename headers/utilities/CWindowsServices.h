#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 77 member(s).
class CWindowsServices {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrowserHostCreate@CWindowsServices@@UEAAJPEAUIXcpHostSite@@PEAUIXcpDispatcher@@PEAPEAUIXcpBrowserHost@@@Z
    virtual long BrowserHostCreate(IXcpHostSite *, IXcpDispatcher *, IXcpBrowserHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallCoInitializeMTA@CWindowsServices@@UEAAJXZ
    virtual long CallCoInitializeMTA();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallCoUninitialize@CWindowsServices@@UEAAXXZ
    virtual void CallCoUninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDebugTrace@CWindowsServices@@UEAAXXZ
    virtual void CleanupDebugTrace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateApplicationDataProvider@CWindowsServices@@UEAAJPEAPEAUIPALApplicationDataProvider@@@Z
    virtual long CreateApplicationDataProvider(IPALApplicationDataProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClock@CWindowsServices@@UEAAJPEAPEAUIPALClock@@@Z
    virtual long CreateClock(IPALClock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateD2DPrintFactoryAndTarget@CWindowsServices@@UEAAJPEAPEAUIPALAcceleratedGraphicsFactory@@PEAPEAUIPALPrintTarget@@@Z
    virtual long CreateD2DPrintFactoryAndTarget(IPALAcceleratedGraphicsFactory * *, IPALPrintTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateD2DPrintingData@CWindowsServices@@UEAAJPEAPEAUIPALD2DPrintingData@@@Z
    virtual long CreateD2DPrintingData(IPALD2DPrintingData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFontAndScriptServices@CWindowsServices@@UEAAJPEAPEAUIFontAndScriptServicesFactory@PALText@@@Z
    virtual long CreateFontAndScriptServices(::PALText::IFontAndScriptServicesFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGraphicsDeviceManager@CWindowsServices@@UEAAJPEAPEAVWindowsGraphicsDeviceManager@@@Z
    virtual long CreateGraphicsDeviceManager(WindowsGraphicsDeviceManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIPALStreamFromIPALMemory@CWindowsServices@@UEAAJPEAUIPALMemory@@PEAPEAUIPALStream@@@Z
    virtual long CreateIPALStreamFromIPALMemory(IPALMemory *, IPALStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePALMemoryFromBuffer@CWindowsServices@@UEAAJIPEAEIPEAPEAUIPALMemory@@@Z
    virtual long CreatePALMemoryFromBuffer(unsigned int, unsigned char *, unsigned int, IPALMemory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRegion@CWindowsServices@@UEAAJPEAPEAUIPALRegion@@@Z
    virtual long CreateRegion(IPALRegion * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResourceProvider@CWindowsServices@@UEAAJPEAXPEAPEAUIPALResourceProvider@@@Z
    virtual long CreateResourceProvider(void *, IPALResourceProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWorkItemFactory@CWindowsServices@@UEAAJPEAPEAUIPALWorkItemFactory@@@Z
    virtual long CreateWorkItemFactory(IPALWorkItemFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DebugOutputSz@CWindowsServices@@UEAAXPEBG@Z
    virtual void DebugOutputSz(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DebugOutputSzNoEndl@CWindowsServices@@UEAAJPEBGZZ
    virtual long DebugOutputSzNoEndl(unsigned short const *, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DebugTrace@CWindowsServices@@UEAAJW4XDebugTraceType@@PEBGPEAD@Z
    virtual long DebugTrace(int, unsigned short const *, char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DebugTrace@CWindowsServices@@UEAAJW4XDebugTraceType@@PEBGZZ
    virtual long DebugTrace(int, unsigned short const *, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventCreate@CWindowsServices@@UEAAJPEAPEAUIPALEvent@@HH@Z
    virtual long EventCreate(IPALEvent * *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileCreate@CWindowsServices@@UEAAJIPEBGHPEAPEAUIPALFile@@@Z
    virtual long FileCreate(unsigned int, unsigned short const *, int, IPALFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateSecurityToken@CWindowsServices@@UEAAIXZ
    virtual unsigned int GenerateSecurityToken();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationSingleton@CWindowsServices@@UEAAJPEAPEAUIPALApplicationSingleton@@@Z
    virtual long GetApplicationSingleton(IPALApplicationSingleton * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationProvider@CWindowsServices@@UEAAJPEAUIXcpHostSite@@PEAVCDependencyObject@@PEAPEAUIUnknown@@@Z
    virtual long GetAutomationProvider(IXcpHostSite *, CDependencyObject *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundTaskSettings@CWindowsServices@@UEBAJPEAI00@Z
    virtual long GetBackgroundTaskSettings(unsigned int *, unsigned int *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCPUMilliseconds@CWindowsServices@@UEAA_KXZ
    virtual uint64_t GetCPUMilliseconds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCPUTime@CWindowsServices@@UEAA_KXZ
    virtual uint64_t GetCPUTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnableDecodeToRenderSize@CWindowsServices@@UEBAJPEAI0@Z
    virtual long GetEnableDecodeToRenderSize(unsigned int *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnableFramerateCounter@CWindowsServices@@UEBAJPEAI@Z
    virtual long GetEnableFramerateCounter(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnableOverdrawHeatMap@CWindowsServices@@UEBAJPEAI@Z
    virtual long GetEnableOverdrawHeatMap(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnableRedrawRegions@CWindowsServices@@UEBAJPEAI@Z
    virtual long GetEnableRedrawRegions(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFadeInThemeAnimationData@CWindowsServices@@UEAAJPEAHPEAPEAUOpacitySplineTransform@ThemingData@@@Z
    virtual long GetFadeInThemeAnimationData(int *, ::ThemingData::OpacitySplineTransform * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFadeOutThemeAnimationData@CWindowsServices@@UEAAJPEAHPEAPEAUOpacitySplineTransform@ThemingData@@@Z
    virtual long GetFadeOutThemeAnimationData(int *, ::ThemingData::OpacitySplineTransform * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputPaneInteraction@CWindowsServices@@UEAAJPEAUIXcpInputPaneHandler@@PEAPEAUIPALInputPaneInteraction@@@Z
    virtual long GetInputPaneInteraction(IXcpInputPaneHandler *, IPALInputPaneInteraction * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyboardModifiersState@CWindowsServices@@UEAAJPEAI@Z
    virtual long GetKeyboardModifiersState(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMemoryCount@CWindowsServices@@UEAA_KXZ
    virtual uint64_t GetMemoryCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumberOfCPUCores@CWindowsServices@@UEAAJPEAI@Z
    virtual long GetNumberOfCPUCores(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPasswordRevealDisabled@CWindowsServices@@UEBAJPEAI@Z
    virtual long GetPasswordRevealDisabled(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlatformUtilities@CWindowsServices@@UEAAJPEAPEAUIPlatformUtilities@@@Z
    virtual long GetPlatformUtilities(IPlatformUtilities * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessImageName@CWindowsServices@@UEAAJPEAVxstring_ptr@@@Z
    virtual long GetProcessImageName(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessModernAppId@CWindowsServices@@UEAAJPEAVxstring_ptr@@@Z
    virtual long GetProcessModernAppId(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessPackageFullName@CWindowsServices@@UEAAJPEAVxstring_ptr@@@Z
    virtual long GetProcessPackageFullName(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessPackagePath@CWindowsServices@@UEAAJPEAVxstring_ptr@@@Z
    virtual long GetProcessPackagePath(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTraceFlags@CWindowsServices@@UEAAIXZ
    virtual unsigned int GetTraceFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDebugTrace@CWindowsServices@@UEAAXXZ
    virtual void InitDebugTrace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDebugTraceTypeActive@CWindowsServices@@UEAAIW4XDebugTraceType@@@Z
    virtual unsigned int IsDebugTraceTypeActive(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirectManipulationSupported@CWindowsServices@@UEAAJAEAI@Z
    virtual long IsDirectManipulationSupported(unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnRemoteDesktopSession@CWindowsServices@@UEAAJPEAI@Z
    virtual long IsOnRemoteDesktopSession(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackageMultiUserAware@CWindowsServices@@UEAA_NXZ
    virtual bool IsPackageMultiUserAware();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPointerInfoValid@CWindowsServices@@UEAAIPEAXI@Z
    virtual unsigned int IsPointerInfoValid(void *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessAppContainer@CWindowsServices@@UEAAIXZ
    virtual unsigned int IsProcessAppContainer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessPackaged@CWindowsServices@@UEAAIXZ
    virtual unsigned int IsProcessPackaged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedPlatform@CWindowsServices@@UEAAIXZ
    virtual unsigned int IsSupportedPlatform();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemApp@CWindowsServices@@UEAAIXZ
    virtual unsigned int IsSystemApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NamedEventCreate@CWindowsServices@@UEAAJPEAPEAUIPALEvent@@W4PAL_IPCInitMode@@IIAEBVxstring_ptr_view@@I@Z
    virtual long NamedEventCreate(IPALEvent * *, int, unsigned int, unsigned int, xstring_ptr_view const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerfMarkersEnabled@CWindowsServices@@UEAA?AW4_PerfMarkerType@@XZ
    virtual int PerfMarkersEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformanceCounter@CWindowsServices@@UEAAIPEATXINT64_LARGE_INTEGER@@@Z
    virtual unsigned int PerformanceCounter(XINT64_LARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformanceFrequency@CWindowsServices@@UEAAIPEATXINT64_LARGE_INTEGER@@@Z
    virtual unsigned int PerformanceFrequency(XINT64_LARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintPage@CWindowsServices@@UEAAJPEAXPEAUIPALPrintingData@@@Z
    virtual long PrintPage(void *, IPALPrintingData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintStringCchExW@CWindowsServices@@UEAAJPEAGIPEAPEAGPEAIIPEBGZZ
    virtual long PrintStringCchExW(unsigned short *, unsigned int, unsigned short * *, unsigned int *, unsigned int, unsigned short const *, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintStringCchW@CWindowsServices@@UEAAJPEAGIPEBGZZ
    virtual long PrintStringCchW(unsigned short *, unsigned int, unsigned short const *, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessGetPriority@CWindowsServices@@UEAAHXZ
    virtual int ProcessGetPriority();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetPriority@CWindowsServices@@UEAAJH@Z
    virtual long ProcessSetPriority(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueCreate@CWindowsServices@@UEAAJPEAPEAUIPALQueue@@@Z
    virtual long QueueCreate(IPALQueue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendXcpPerfMarker@CWindowsServices@@UEAAJ_KPEAUHWND__@@@Z
    virtual long SendXcpPerfMarker(uint64_t, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTraceFlags@CWindowsServices@@UEAAXPEAI@Z
    virtual void SetTraceFlags(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadCreate@CWindowsServices@@UEAAJPEAPEAUIPALWaitable@@P6AHPEAE@ZI1@Z
    virtual long ThreadCreate(IPALWaitable * *, int ( *)(unsigned char *), unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadGetPriority@CWindowsServices@@UEAAHPEAUIPALWaitable@@@Z
    virtual int ThreadGetPriority(IPALWaitable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadSetPriority@CWindowsServices@@UEAAJPEAUIPALWaitable@@H@Z
    virtual long ThreadSetPriority(IPALWaitable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UriCreate@CWindowsServices@@UEAAJIPEBGPEAPEAUIPALUri@@@Z
    virtual long UriCreate(unsigned int, unsigned short const *, IPALUri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForObjects@CWindowsServices@@UEAAIIPEAPEAUIPALWaitable@@HI@Z
    virtual unsigned int WaitForObjects(unsigned int, IPALWaitable * *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XcpPerfMarker@CWindowsServices@@UEAAJ_K@Z
    virtual long XcpPerfMarker(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XcpPerfMarkerDwordInfo@CWindowsServices@@UEAAJ_KK@Z
    virtual long XcpPerfMarkerDwordInfo(uint64_t, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XcpPerfMarkerStringInfo@CWindowsServices@@UEAAJ_KPEAG@Z
    virtual long XcpPerfMarkerStringInfo(uint64_t, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XcpRenderCountersIncrement@CWindowsServices@@UEAAJI@Z
    virtual long XcpRenderCountersIncrement(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XcpRenderCountersInitialize@CWindowsServices@@UEAAJXZ
    virtual long XcpRenderCountersInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowsServices@@QEAA@XZ
    ~CWindowsServices();
};
