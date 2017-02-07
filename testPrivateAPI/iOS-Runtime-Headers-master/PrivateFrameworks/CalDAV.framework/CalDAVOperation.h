/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVOperation : CoreDAVTaskGroup {
    BOOL  _isCancellingTaskGroups;
    NSMutableSet * _outstandingTaskGroups;
    <CalDAVPrincipal> * _principal;
}

@property (nonatomic, retain) NSMutableSet *outstandingTaskGroups;
@property (nonatomic, retain) <CalDAVPrincipal> *principal;

- (void).cxx_destruct;
- (void)_tearDownAllTaskGroupsWithBlock:(id /* block */)arg1;
- (void)bailWithError:(id)arg1;
- (void)cancelTaskGroup;
- (void)dealloc;
- (id)init;
- (id)initWithPrincipal:(id)arg1;
- (id)outstandingTaskGroups;
- (id)principal;
- (void)setOutstandingTaskGroups:(id)arg1;
- (void)setPrincipal:(id)arg1;

@end
