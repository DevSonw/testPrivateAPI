/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@interface AppLaunchStats : NSObject <DuetLoggerProtocol, DuetSaveAndRestore, NWNetworkOfInterestManagerDelegate> {
    NSSet * _trendCandidates;
    int  allowedMaxCount;
    AppLaunchStatsAppWorkSpace * aplsAppWorkSpace;
    AppLaunchStatsDelayLaunch * aplsDelayLaunch;
    AppLaunchStatsDiag * aplsDiag;
    AppLaunchStatsLaunchQueue * aplsLaunchQueue;
    int  aplsNotifyToken;
    AppLaunchStatsREventHandler * aplsREventHandler;
    AppLaunchStatsRetryTracker * aplsRetryTracker;
    NSRunLoop * aplsRunLoop;
    AppLaunchStatsSBMonitor * aplsSBMonitor;
    AppLaunchStatsSBSettings * aplsSBSettings;
    AppLaunchStatsSaveAndRestore * aplsSaveAndRestore;
    AppLaunchStatsScheduler * aplsScheduler;
    AppLaunchStatsState * aplsState;
    AppLaunchStatsStateHandlerQueue * aplsStateHandlerQueue;
    NSObject<OS_dispatch_queue> * appLaunchStatDQueue;
    NSObject<OS_dispatch_queue> * appLaunchStatPushQueue;
    int  batterySaverModeToken;
    NSObject<OS_dispatch_queue> * budgetQueue;
    CDSession * budget_session;
    bool  budgetsInitialized;
    CDAttribute * bundleIdAttribute;
    int  classCLockedToken;
    int  configToken;
    NSObject<OS_xpc_object> * conn;
    CDBudget * dataBudget;
    <AppLaunchStatsDelegate> * delegate;
    NSObject<OS_dispatch_queue> * delegateQueue;
    bool  disableAllDueToSleep;
    bool  disableFetch;
    bool  disableHighPriorityPush;
    bool  disableLowPriorityPush;
    bool  disableTrending;
    int  displayStateToken;
    NSDistributedNotificationCenter * distNotCenter;
    CDBudget * energyBudget;
    int  externalTrigToken;
    int  externaltriggerType;
    NSString * fakeBundleID;
    int  fetchesInLastTriggeredSlot;
    bool  inBatterySaverMode;
    bool  isAppForecastUpdating;
    bool  isClassCLocked;
    bool  isDataBudgetUpdating;
    bool  isInternalInstall;
    bool  isNoprewarmUpdating;
    bool  isPowerBudgetsUpdating;
    NSDate * lastDateOfAliveList;
    NSDate * lastExternalTrigTime;
    BOOL  lastFetchInPoorConditions;
    bool  lastFetchWasTooLongAgo;
    int  lastTriggeredFetchSlot;
    int  lockStateToken;
    long long  lowPriorityStartTime;
    int  messageStatusAPSD;
    NSMutableDictionary * meterTokenTracker;
    BOOL  newsHasPresentedSmartNotification;
    NSDate * newsLaunchTime;
    PCPersistentTimer * newsWakeTimer;
    NWNetworkOfInterestManager * noiManager;
    NSObject<OS_dispatch_queue> * noiManagerQueue;
    NSObject<OS_dispatch_source> * noiTimer;
    NSMutableDictionary * nois;
    NSObject<OS_dispatch_queue> * noisQueue;
    NSDate * oneHourBudgetReset;
    id /* block */  pendingHandler;
    NSDate * periodicTimeTracker;
    int  pluggedInToken;
    unsigned char  prefUIKitFakeSwitch;
    int  pushListToken;
    int  pushToken;
    id /* block */  recommendHandler;
    int  resourceStatus;
    int  semaphoreSigToken;
    CDSession * session;
    int  testFetchTriggerToken;
    NSObject<OS_dispatch_source> * theTimer;
    NSDate * timeOfLastFetch;
    NSMutableDictionary * topicAbleList;
    BudgetPool * topicLimiter;
    CDSession * topicSession;
    int  trendToken;
    int  whiteListAppToken;
}

@property (nonatomic, readonly) AppLaunchStatsState *aplsState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *appLaunchStatDQueue;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *conn;
@property (nonatomic, readonly) id /* block */ pendingHandler;
@property (retain) NSSet *trendCandidates;

- (void).cxx_destruct;
- (void)ableAdmissionForTopic:(id)arg1 attribute:(id)arg2 value:(id)arg3 withHandler:(id /* block */)arg4;
- (id)allTrackedNOIs;
- (void)aplsSBMonitorEvent:(int)arg1 withBundleID:(id)arg2;
- (id)aplsState;
- (void)appActivityForecastStartingOnDate:(id)arg1 duration:(double)arg2 granularity:(int)arg3 appFilter:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)appLaunchStatDQueue;
- (unsigned int)appUsageCountForBundle:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (BOOL)betterPredictedQualityForInterface:(id)arg1 withMinQuality:(int)arg2 beforeDate:(id)arg3;
- (BOOL)budgetAvailableForComplication:(id)arg1;
- (int)bundlePredictionZone:(id)arg1 launchzone:(int)arg2 top:(int)arg3 filter:(bool)arg4;
- (void)checkWifiChargerConnected;
- (BOOL)complicationIsActiveForBundle:(id)arg1;
- (id)conn;
- (id)convertComplicationTopicToBundleID:(id)arg1;
- (id)convertTopicIDtoBundleID:(id)arg1;
- (void)dataForecastStartingOnDate:(id)arg1 duration:(double)arg2 granularity:(int)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)defaultsDomainReadString:(id)arg1;
- (void)deleteAllEntriesInDB;
- (void)didStartTrackingNOI:(id)arg1;
- (void)didStopTrackingAllNOIs:(id)arg1;
- (void)didStopTrackingNOI:(id)arg1;
- (id)doConvertTopicString:(id)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 withSubStringIndex:(unsigned int)arg3;
- (void)energyForecastStartingOnDate:(id)arg1 duration:(double)arg2 granularity:(int)arg3 completionHandler:(id /* block */)arg4;
- (id)firstWakeApps;
- (void)handleNewsLaunch:(int)arg1;
- (BOOL)hasNewsPresentedSmartNotification;
- (bool)hasOpportunisticFetchFeature:(id)arg1;
- (bool)hasOpportunisticFetchFeatureWithType:(id)arg1 withFetch:(int)arg2;
- (id)init;
- (void)initAfterClassCUnlocked;
- (void)initAfterClassCUnlockedForClient;
- (void)initBudgets;
- (void)initChargeStatusMonitoring;
- (void)initRegisterNotifications;
- (void)initSharedNotification;
- (void)invalidateNewsWakeTimer;
- (BOOL)isLaunchDeniedForBundle:(id)arg1 withTriggerType:(int)arg2 isTrending:(BOOL)arg3 withPushHandler:(id /* block */)arg4;
- (BOOL)isPushTopicForComplication:(id)arg1;
- (bool)isSpringBoardInstance;
- (void)launchExternalTriggers:(unsigned long long)arg1;
- (void)logAll:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)logLight:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)newsWake:(id)arg1;
- (BOOL)noNetworkingAvailable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)okToLaunchMessageFor:(id)arg1 forReasons:(id)arg2 withHandler:(id /* block */)arg3;
- (void)okToPassPushMessageForTopic:(id)arg1 onQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)onTick;
- (id /* block */)pendingHandler;
- (void)preWarmHasEnded:(id)arg1 withResult:(unsigned int)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)preWarmHasStarted:(id)arg1 withResult:(unsigned int)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)readPool:(id)arg1;
- (void)receiveConnectedStateNotification:(unsigned long long)arg1;
- (void)receiveIncomingLowPriorityPushList:(unsigned long long)arg1;
- (void)receiveIncomingLowPriorityPushRequestForReservationStation:(id)arg1;
- (void)registerAppForTrending:(id)arg1;
- (void)reloadConfiguration;
- (void)removeAppFromLST:(id)arg1;
- (void)replaceTimeSlot:(id)arg1;
- (void)resetBudgetPool;
- (void)resetBudgetPoolClient;
- (void)restore:(id)arg1;
- (void)retrieveAppScoresWithHandler:(id /* block */)arg1;
- (void)retrieveAppScoresWithQueryHandler:(id /* block */)arg1;
- (void)runPCtimerHeartBeat:(bool)arg1;
- (void)save:(id)arg1;
- (void)sendLSTxtqueriesWithMask:(unsigned long long)arg1;
- (void)setAppLaunchRecommendationHandler:(id /* block */)arg1;
- (void)setAppLaunchStatsDelegate:(id)arg1 queue:(id)arg2;
- (void)setAppLaunchStatsPendingDelegate:(id)arg1 queue:(id)arg2;
- (void)setAppLaunchStatsPendingHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)setDelayLaunchFor:(id)arg1 with:(double)arg2;
- (void)setPendingWorkQueue:(id)arg1;
- (void)setTrendCandidates:(id)arg1;
- (BOOL)shouldDeferNetworking;
- (void)testAndReleaseBlueList;
- (void)testDatabaseAge:(id /* block */)arg1;
- (void)testOneHourBudgetExpirytime;
- (id)trackedNOIForInterface:(int)arg1;
- (id)trendCandidates;
- (void)trendQueryLaunchApp:(id /* block */)arg1;
- (void)triggerLaunchQueue:(id)arg1;
- (void)updateAliveList;
- (void)updateBatterySaverState:(int)arg1;
- (void)updateDailyAppForecast;
- (void)updateDailyOutOfBandForecast;
- (void)updateInstantNetworkQuality;
- (void)updatePredictionForNOIAsync:(id)arg1;
- (void)updatePredictionsForAllNOIsAsync;
- (void)updateQuality:(int)arg1 forInterface:(int)arg2;
- (void)updateResourceAvailability;
- (void)updateStateFromExternalNotification:(unsigned long long)arg1;
- (void)updateTrendingBehavior:(unsigned long long)arg1 withBundleID:(id)arg2;
- (void)wakeNewsIfNecessary:(BOOL)arg1;
- (void)whatToLaunch:(id)arg1;

@end
