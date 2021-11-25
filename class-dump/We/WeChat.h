//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountServiceExt-Protocol.h"
#import "DebugMessageSourceViewDelegate-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "MMLeaksMonitorDelegate-Protocol.h"
#import "MMNetServiceDelegate-Protocol.h"
#import "MMNetServiceExt-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "WeChatInstance-Protocol.h"

@class FocusMonitor, IoMonitor, LeftViewController, LogoutCGI, MMChatsViewController, MMComposeTextView, MMDockItem, MMMainWindowController, MMServiceCenter, MMStatusItem, MMTimer, MMViewController, NSAlert, NSImageView, NSMenu, NSMenuItem, NSString, ShareExtConfirmWindowController, VisualizationMonitor, _TtC6WeChat11DiskMonitor, _TtC6WeChat24SafeModeWindowController;

@interface WeChat : NSObject <DebugMessageSourceViewDelegate, NSMenuDelegate, AccountServiceExt, MMNetServiceDelegate, MMNetServiceExt, IContactMgrExt, MMLeaksMonitorDelegate, WeChatInstance>
{
    BOOL _isLoggedIn;
    BOOL _isLocked;
    BOOL _isInBackground;
    BOOL _isAppTerminating;
    BOOL _showDisconnectBanner;
    BOOL _isWCDBRepairing;
    BOOL _hasMsgBeforeSync;
    BOOL _isWorkSpaceSleep;
    BOOL _isDisplayAsleep;
    BOOL _hasAuthOK;
    BOOL _triedAutoLogin;
    BOOL _hasClearAndExitApp;
    int _progress;
    MMMainWindowController *_mainWindowController;
    MMChatsViewController *_chatsViewController;
    LeftViewController *_leftViewController;
    MMViewController *_rightViewController;
    MMComposeTextView *_composeTextView;
    NSMenuItem *_lockMenuItem;
    NSMenu *_wechatMenu;
    unsigned long long _scrollBarShowStatus;
    long long _locateMessage;
    unsigned long long _loginType;
    _TtC6WeChat24SafeModeWindowController *_safeModeWindowController;
    ShareExtConfirmWindowController *_shareExtConfirmWindowController;
    MMServiceCenter *_serviceCenter;
    MMStatusItem *_statusItem;
    MMDockItem *_dockItem;
    NSMenuItem *_feedbackItem;
    LogoutCGI *_logoutCGI;
    IoMonitor *_ioMonitor;
    _TtC6WeChat11DiskMonitor *_diskMonitor;
    VisualizationMonitor *_visualizationMonitor;
    FocusMonitor *_focusMonitor;
    NSAlert *_oomAlert;
    NSImageView *_flagView;
    MMTimer *_timer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) int progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSImageView *flagView; // @synthesize flagView=_flagView;
@property(nonatomic) BOOL hasClearAndExitApp; // @synthesize hasClearAndExitApp=_hasClearAndExitApp;
@property(retain, nonatomic) NSAlert *oomAlert; // @synthesize oomAlert=_oomAlert;
@property(retain, nonatomic) FocusMonitor *focusMonitor; // @synthesize focusMonitor=_focusMonitor;
@property(retain, nonatomic) VisualizationMonitor *visualizationMonitor; // @synthesize visualizationMonitor=_visualizationMonitor;
@property(retain, nonatomic) _TtC6WeChat11DiskMonitor *diskMonitor; // @synthesize diskMonitor=_diskMonitor;
@property(retain, nonatomic) IoMonitor *ioMonitor; // @synthesize ioMonitor=_ioMonitor;
@property(retain, nonatomic) LogoutCGI *logoutCGI; // @synthesize logoutCGI=_logoutCGI;
@property(retain, nonatomic) NSMenuItem *feedbackItem; // @synthesize feedbackItem=_feedbackItem;
@property(retain, nonatomic) MMDockItem *dockItem; // @synthesize dockItem=_dockItem;
@property(retain, nonatomic) MMStatusItem *statusItem; // @synthesize statusItem=_statusItem;
@property(retain, nonatomic) MMServiceCenter *serviceCenter; // @synthesize serviceCenter=_serviceCenter;
@property(retain, nonatomic) ShareExtConfirmWindowController *shareExtConfirmWindowController; // @synthesize shareExtConfirmWindowController=_shareExtConfirmWindowController;
@property(retain, nonatomic) _TtC6WeChat24SafeModeWindowController *safeModeWindowController; // @synthesize safeModeWindowController=_safeModeWindowController;
@property(nonatomic) unsigned long long loginType; // @synthesize loginType=_loginType;
@property(nonatomic) BOOL triedAutoLogin; // @synthesize triedAutoLogin=_triedAutoLogin;
@property(nonatomic) BOOL hasAuthOK; // @synthesize hasAuthOK=_hasAuthOK;
@property(nonatomic) BOOL isDisplayAsleep; // @synthesize isDisplayAsleep=_isDisplayAsleep;
@property(nonatomic) BOOL isWorkSpaceSleep; // @synthesize isWorkSpaceSleep=_isWorkSpaceSleep;
@property(nonatomic) long long locateMessage; // @synthesize locateMessage=_locateMessage;
@property(nonatomic) BOOL hasMsgBeforeSync; // @synthesize hasMsgBeforeSync=_hasMsgBeforeSync;
@property(nonatomic) unsigned long long scrollBarShowStatus; // @synthesize scrollBarShowStatus=_scrollBarShowStatus;
@property(nonatomic) BOOL isWCDBRepairing; // @synthesize isWCDBRepairing=_isWCDBRepairing;
@property(nonatomic) BOOL showDisconnectBanner; // @synthesize showDisconnectBanner=_showDisconnectBanner;
@property(nonatomic) BOOL isAppTerminating; // @synthesize isAppTerminating=_isAppTerminating;
@property(nonatomic) BOOL isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) BOOL isLocked; // @synthesize isLocked=_isLocked;
@property(nonatomic) BOOL isLoggedIn; // @synthesize isLoggedIn=_isLoggedIn;
@property(nonatomic) __weak NSMenu *wechatMenu; // @synthesize wechatMenu=_wechatMenu;
@property(nonatomic) __weak NSMenuItem *lockMenuItem; // @synthesize lockMenuItem=_lockMenuItem;
@property(retain, nonatomic) MMComposeTextView *composeTextView; // @synthesize composeTextView=_composeTextView;
@property(nonatomic) __weak MMViewController *rightViewController; // @synthesize rightViewController=_rightViewController;
@property(nonatomic) __weak LeftViewController *leftViewController; // @synthesize leftViewController=_leftViewController;
@property(nonatomic) __weak MMChatsViewController *chatsViewController; // @synthesize chatsViewController=_chatsViewController;
@property(retain, nonatomic) MMMainWindowController *mainWindowController; // @synthesize mainWindowController=_mainWindowController;
- (void)leakMonitor:(id)arg1 decideForOOMAction:(CDUnknownBlockType)arg2;
- (void)onUserChangedSystemTime:(id)arg1;
- (void)showAppDebugWindow;
- (void)showOrHideMainWindow;
- (void)orderFrontMainWindow;
- (void)showMainWindow;
- (void)updateMainWindowTitle;
- (void)showWindow;
- (void)setupFeedbackIfNeeded;
- (void)setupAppearance;
- (int)CurrentQQUin;
- (int)CurrentWeixinUin;
- (id)CurrentUserName;
- (BOOL)OnHeadBeatCGIResponse:(id)arg1;
- (BOOL)GetHeartBeatRequestData:(id)arg1 reqCmdId:(int *)arg2 respCmdId:(int *)arg3;
- (BOOL)IsAuthOK;
- (BOOL)MakeSureAuth;
- (void)onSessionTimeout;
- (void)onAuthFaildForInvalidCGISessionID;
- (void)handleAuthFailedWithReason:(id)arg1 errorMsg:(id)arg2;
- (void)onAuthKickOutWithReason:(id)arg1 errorMsg:(id)arg2;
- (void)onAuthFaild:(id)arg1;
- (void)onAuthFaildWithWrongPasswordOrUsername;
- (void)onAuthAlphaVersion:(id)arg1;
- (void)onAuthKeyInfoInvalid:(id)arg1;
- (void)updateAllContactsFromServerIfNeeded;
- (void)delayRestoreSnsPublishTask;
- (void)delayReportSettingsData;
- (void)delayReportDBData;
- (void)onAuthUpdateCert;
- (void)delayCheckInvalidContact;
- (void)delayUpdateSessionGroupChat;
- (void)delayInitPanel;
- (void)createSearchCaches;
- (void)setupAuthServices;
- (void)securityReport;
- (void)updateCDNServerIP;
- (void)reportLoginDevice;
- (void)startSyncAndHeatbeat;
- (void)updateMainUI:(BOOL)arg1;
- (void)doSomethingOnManualAuth;
- (void)doSomethingOnAuth:(BOOL)arg1;
- (void)initDBMonitor;
- (void)FFAddRecvFavZZ:(BOOL)arg1;
- (void)onLoginAuthOK;
- (void)onPreAuthOKOfUser:(id)arg1;
- (void)performDelayCleanUpExtension;
- (void)onUserManualLogout;
- (void)onUserStopInit:(CDUnknownBlockType)arg1;
- (void)setupServices;
- (void)cleanServices;
- (void)cleanUI;
- (void)cleanProperties;
- (void)doSomethingWhenLogout;
- (void)doSomethingWhenAppEnterBackground;
- (void)doSomethindWhenAppEnterForeground;
- (void)applicationWillHide:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillBecomeActive:(id)arg1;
- (void)realExitApp;
- (void)doLogoutOnAppTerminate;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)setupCheckUpdateIfNeeded;
- (void)performSearchAction:(id)arg1;
- (void)setupDockItem;
- (void)setupMenubarIcon;
- (void)processForwardNotification:(id)arg1;
- (void)shareNotification:(id)arg1;
- (BOOL)isStopSyncToServer;
- (void)onWorkspaceWillSleep:(id)arg1;
- (void)onWorkspaceDidWake:(id)arg1;
- (void)screenDidUnlock:(id)arg1;
- (void)screenDidLock:(id)arg1;
- (void)onWorkspaceScreenDidWake:(id)arg1;
- (void)onWorkspaceScreenDidSleep:(id)arg1;
- (void)onForbiddenOpenWeApp;
- (void)onForbiddenMultiProcess;
- (void)addObservers;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)init;
- (void)showSettingsWindow:(id)arg1;
- (void)showProxySettingsWindow:(id)arg1;
- (void)showBetaWindow;
- (void)showWhatNewWindow;
- (void)uploadCov;
- (void)showLagReportWindow;
- (void)showAppLogReportWindow;
- (void)showLogReportWindow;
- (void)showFavDBEssentialInfo;
- (void)clearSettingsHistory;
- (void)showSettingsHistory;
- (void)showUpgradeHistory;
- (void)showPerformanceMonitorToolWindow;
- (void)showDeviceAvailabilityWindow;
- (void)showRecoverWindow;
- (void)showAutoRepairWindow;
- (void)showRepairWindow;
- (void)showTechSupport:(id)arg1;
- (void)showFeedBackWindow;
- (void)showJSConsoleWindow:(id)arg1;
- (void)showMemoryMonitorWindow;
- (void)showInfoWindow;
- (void)showHelp:(id)arg1;
- (void)showAboutWindow:(id)arg1;
- (BOOL)isScreenSmallerThan13Inch;
- (id)mainWindowScreen;
- (struct CGRect)mainWindowScreenFrame;
- (BOOL)isMainWindowOcclused;
- (BOOL)isMainWindowVisible;
- (id)currentMainWindow;
- (void)debugMessageSourceViewDidClose:(id)arg1;
- (void)viewSourceForText:(id)arg1;
- (void)viewSourceForMessage:(id)arg1;
- (BOOL)shouldShowMsgDBIdentifier;
- (BOOL)shouldShowViewSourceTool;
- (BOOL)shouldShowDebugMessageLayoutGuides;
- (BOOL)releaseHasAutoupdate;
- (BOOL)releaseIsInternalTestBuild;
- (BOOL)releaseIsDebugBuild;
- (void)showFeatureMissingPlaceholderWithDescription:(id)arg1;
- (void)showFeatureMissingPlaceholder;
- (void)showDebugMenuIfNeeded;
- (void)_triggerSubthreadDeadLock:(id)arg1;
- (void)_triggerOvertimeRelaunch:(id)arg1;
- (void)_triggerDBRepairTimeout:(id)arg1;
- (int)_f:(int)arg1;
- (void)_triggerMainThreadDeadLock:(id)arg1;
- (void)_triggerMainThreadShortBlock:(id)arg1;
- (void)_triggerMemoryOOM:(id)arg1;
- (void)_triggerSwiftException:(id)arg1;
- (void)_triggerException:(id)arg1;
- (void)_showMpDebug:(id)arg1;
- (void)_showSnsDebug:(id)arg1;
- (void)_showWeUI:(id)arg1;
- (void)_showRecover:(id)arg1;
- (void)_showLiveRoom:(id)arg1;
- (void)_showConfigContent:(id)arg1;
- (void)_showNewXExprData:(id)arg1;
- (void)_showMiscOptions:(id)arg1;
- (void)_showIPSwitcher:(id)arg1;
- (void)_showChatLogDebug:(id)arg1;
- (void)_showNetDebugWindow:(id)arg1;
- (void)_showFavoritesDebug:(id)arg1;
- (void)_showIDKeyWindow:(id)arg1;
- (void)_showBenchmarkTool:(id)arg1;
- (void)_showReleaseNotesBlog:(id)arg1;
- (void)_openCacheFolder:(id)arg1;
- (void)_openCurrentDocument:(id)arg1;
- (void)_openCurrentSandbox:(id)arg1;
- (BOOL)doUpgradeMigrationFromVersion:(unsigned int)arg1 toVersion:(unsigned int)arg2;
- (id)checkVersionFilePath;
- (void)saveToDiskWithVersion:(unsigned int)arg1;
- (unsigned int)checkVersionFromDisk;
- (void)doUpgradePreparationIfNeeded;
- (BOOL)isApplicationActive;
- (long long)applicationState;
- (void)previousTab:(id)arg1;
- (void)nextTab:(id)arg1;
- (void)showSnsWindow:(id)arg1;
- (void)showFileManager:(id)arg1;
- (void)showFavoritesTab:(id)arg1;
- (void)showContactsTab:(id)arg1;
- (void)showChatsTab:(id)arg1;
- (unsigned int)currentTab;
- (void)lock:(id)arg1;
- (void)shouldMakeComposeTextViewFirstResponder;
- (void)pasteRevokeReferMessage:(id)arg1 atUserList:(id)arg2;
- (void)pasteRevokMsgContent:(id)arg1 atUserList:(id)arg2;
- (void)pasteScreenshotToInputView:(id)arg1;
- (void)sendDragOperationToInputView:(id)arg1;
- (void)openFavoritesTabToFavoritesWithKeyWord:(id)arg1;
- (void)startANewGroupChatWithUserNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startANewChatWithContact:(id)arg1;
- (void)selectChatWithUserName:(id)arg1;
- (void)showContactsTabWithUserName:(id)arg1;
- (void)goToNextUnreadChat:(id)arg1;
- (id)currentChatListViewController;
- (long long)chatLastSelectedRow;
- (id)currentSelectedUserName;
- (void)hideChatMemberListWithAnimated:(BOOL)arg1;
- (void)stopVoicePlayWhenSelectionChange;
- (void)orderFrontLiveWindow;
- (void)orderFrontVoipWindow;
- (void)backupRecoverChatlog:(id)arg1;
- (void)orderFrontBackupWindow;
- (void)resetInitFlag:(id)arg1;
- (void)showWeAppCache:(id)arg1;
- (void)showWeAppDBData:(id)arg1;
- (void)showWeAppLogDir:(id)arg1;
- (void)showWeAppLatestWindow:(id)arg1;
- (void)showWeAppDebugWindow:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)showWeAppMenuIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
