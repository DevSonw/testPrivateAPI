/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATOperation : NSOperation {
    NSUUID * _UUID;
    BOOL  _canCancel;
    int  _completedUnitCount;
    NSDate * _createdDate;
    NSDate * _enqueuedDate;
    NSError * _error;
    NSDate * _finishedDate;
    unsigned int  _phase;
    id  _resultObject;
    NSDate * _startedDate;
    int  _totalUnitCount;
    NSDictionary * _userInfo;
    NSArray * mCallStackSymbols;
    NSLock * mLock;
    _CATObserverManager * mObserverManager;
    int  mState;
}

@property (retain) NSUUID *UUID;
@property (readonly) BOOL canCancel;
@property int completedUnitCount;
@property (retain) NSDate *createdDate;
@property (retain) NSDate *enqueuedDate;
@property (retain) NSError *error;
@property (retain) NSDate *finishedDate;
@property (readonly) BOOL isCanceled;
@property unsigned int phase;
@property (retain) id resultObject;
@property (retain) NSDate *startedDate;
@property int totalUnitCount;
@property (retain) NSDictionary *userInfo;

+ (BOOL)automaticallyNotifiesObserversOfCreatedDate;
+ (BOOL)automaticallyNotifiesObserversOfEnqueuedDate;
+ (BOOL)automaticallyNotifiesObserversOfFinishedDate;
+ (BOOL)automaticallyNotifiesObserversOfStartedDate;
+ (BOOL)automaticallyNotifiesObserversOfUUID;
+ (id)callStackSymbols;
+ (BOOL)isCancelable;
+ (id)keyPathsForValuesAffectingIsCanceled;

- (void).cxx_destruct;
- (id)UUID;
- (void)addDependency:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned int)arg3;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned int)arg3 delegateQueue:(id)arg4;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned int)arg3 userInfo:(id)arg4;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned int)arg3 userInfo:(id)arg4 delegateQueue:(id)arg5;
- (BOOL)canCancel;
- (void)cancel;
- (int)completedUnitCount;
- (id)createdDate;
- (id)description;
- (void)endOperationSuccessfullyIfNeeded;
- (void)endOperationWithError:(id)arg1;
- (void)endOperationWithResultObject:(id)arg1;
- (id)enqueuedDate;
- (id)error;
- (void)finalizeOperation;
- (id)finishedDate;
- (id)init;
- (BOOL)isAsynchronous;
- (BOOL)isCanceled;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isReady;
- (void)operationDidFinish;
- (void)operationWillEnqueueOntoOperationQueue:(id)arg1;
- (void)operationWillFinish;
- (void)operationWillStart;
- (unsigned int)phase;
- (void)removeDependency:(id)arg1;
- (id)resultObject;
- (void)setCompletedUnitCount:(int)arg1;
- (void)setCreatedDate:(id)arg1;
- (void)setEnqueuedDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFinishedDate:(id)arg1;
- (void)setPhase:(unsigned int)arg1;
- (void)setResultObject:(id)arg1;
- (void)setStartedDate:(id)arg1;
- (void)setTotalUnitCount:(int)arg1;
- (void)setUUID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)start;
- (id)startedDate;
- (id)stateDescription;
- (int)totalUnitCount;
- (id)userInfo;
- (void)waitUntilFinished;
- (BOOL)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2;

@end
