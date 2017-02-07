/* Generated by RuntimeBrowser
   Image: /usr/lib/libmecabra.dylib
 */

@interface MecabraAnalysisContextImpl : NSObject {
    NSMutableArray * _candidateContext;
    NSMutableString * _candidateContextString;
    BOOL  _rebuildCandidateContextString;
    NSString * _stringBeforeCaret;
    NSString * _stringContext;
}

@property (nonatomic, retain) NSMutableArray *candidateContext;
@property (nonatomic, readonly) NSArray *candidateContextForAnalysis;
@property (nonatomic, retain) NSMutableString *candidateContextString;
@property (nonatomic) BOOL rebuildCandidateContextString;
@property (nonatomic, retain) NSString *stringBeforeCaret;
@property (nonatomic, retain) NSString *stringContext;
@property (nonatomic, readonly) NSString *stringContextForAnalysis;

- (void)addCandidate:(id)arg1;
- (void)adjustCandidateContext;
- (id)candidateContext;
- (id)candidateContextForAnalysis;
- (id)candidateContextString;
- (void)clearContextForAddition;
- (void)dealloc;
- (id)init;
- (struct { unsigned int x1; unsigned int x2; })positionInContextWithPartialDocumentStringLength:(unsigned int)arg1;
- (BOOL)rebuildCandidateContextString;
- (void)reset;
- (void)revertLastCommittedCandidate;
- (void)setCandidateContext:(id)arg1;
- (void)setCandidateContextString:(id)arg1;
- (void)setRebuildCandidateContextString:(BOOL)arg1;
- (void)setStringBeforeCaret:(id)arg1;
- (void)setStringContext:(id)arg1;
- (id)stringBeforeCaret;
- (id)stringContext;
- (id)stringContextForAnalysis;

@end
