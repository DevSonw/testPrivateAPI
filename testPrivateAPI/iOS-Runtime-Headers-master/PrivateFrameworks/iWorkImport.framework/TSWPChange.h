/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying, TSWPTextSpanningObject> {
    BOOL  _changeWasAddedToDocumentRoot;
    NSDate * _date;
    int  _kind;
    TSWPStorage * _parentStorage;
    TSWPChangeSession * _session;
    NSString * _textAttributeUUIDString;
}

@property (nonatomic, readonly) TSUColor *changeAdornmentsColor;
@property (nonatomic) BOOL changeWasAddedToDocumentRoot;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isHidden, nonatomic, readonly) BOOL hidden;
@property (nonatomic, readonly) BOOL isDeletion;
@property (nonatomic, readonly) BOOL isInsertion;
@property (nonatomic, readonly) int kind;
@property (nonatomic) TSWPStorage *parentStorage;
@property (nonatomic, retain) TSWPChangeSession *session;
@property (nonatomic, readonly) BOOL showsHiddenDeletionMarkup;
@property (nonatomic, readonly) BOOL showsMarkup;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *textAttributeUUIDString;
@property (nonatomic, readonly) TSUColor *textMarkupColor;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)canMergeWithKind:(int)arg1 session:(id)arg2;
- (id)changeAdornmentsColor;
- (BOOL)changeWasAddedToDocumentRoot;
- (id)copyWithContext:(id)arg1;
- (id)date;
- (void)dealloc;
- (void)i_setTextAttributeUUIDString:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 kind:(int)arg2 session:(id)arg3;
- (BOOL)isDeletion;
- (BOOL)isEquivalentToObject:(id)arg1;
- (BOOL)isFromChangeSession:(id)arg1;
- (BOOL)isHidden;
- (BOOL)isInsertion;
- (int)kind;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1 key:(id)arg2;
- (id)parentStorage;
- (void)resetTextAttributeUUIDString;
- (void)saveToArchiver:(id)arg1;
- (id)session;
- (void)setChangeWasAddedToDocumentRoot:(BOOL)arg1;
- (void)setDate:(id)arg1;
- (void)setParentStorage:(id)arg1;
- (void)setSession:(id)arg1;
- (BOOL)showsHiddenDeletionMarkup;
- (BOOL)showsMarkup;
- (id)textAttributeUUIDString;
- (id)textMarkupColor;
- (void)trackedTextDidChange;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
