/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADEventCreatedFromSuggestionPredicate : EKPredicate <EKDefaultPropertiesLoading> {
    NSString * _opaqueKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *opaqueKey;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyMatchingItemsWithDatabase:(/* Warning: unhandled struct encoding: '{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}B^{__CFArray}^{__CFArray}B@}' */ struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long x_8_1_1; BOOL x_8_1_2[40]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long x_20_1_1; BOOL x_20_1_2[40]; } x20; bool x21; struct __CFArray {} *x22; struct __CFArray {} *x23; bool x24; id x25; }*)arg1;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOpaqueKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)opaqueKey;
- (id)predicateFormat;
- (BOOL)shouldLoadDefaultProperties;

@end
