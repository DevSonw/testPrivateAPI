/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCZoneHealthReportOperation : _BRCOperation <BRCOperationSubclass> {
    BRCAccountSession * _session;
    BOOL  shouldPerformAnotherBatch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reportRecords:(id)arg1 requestID:(unsigned long long)arg2;
- (id)initWithSession:(id)arg1;
- (void)main;
- (BOOL)shouldPerformAnotherBatch;
- (BOOL)shouldRetryForError:(id)arg1;

@end
