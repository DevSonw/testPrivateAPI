/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADCalSearchOperation : NSOperation <CalSearchDataSink> {
    <NSObject> * _boostToken;
    ClientConnection * _connection;
    NSObject<OS_dispatch_semaphore> * _finishedSemaphore;
    long  _lastIndex;
    unsigned int  _replyID;
    CalSearch * _search;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)operationWithConnection:(id)arg1 filter:(struct CalFilter { }*)arg2 replyID:(unsigned int)arg3;

- (void).cxx_destruct;
- (void)calSearch:(id)arg1 foundOccurrences:(struct __CFArray { }*)arg2 cachedDays:(struct __CFArray { }*)arg3 cachedDaysIndexes:(struct __CFArray { }*)arg4;
- (void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;
- (void)calSearchComplete:(id)arg1;
- (bool)calSearchShouldStopSearching:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 filter:(struct CalFilter { }*)arg2 replyID:(unsigned int)arg3;
- (void)main;
- (unsigned int)replyID;
- (id)search;

@end
