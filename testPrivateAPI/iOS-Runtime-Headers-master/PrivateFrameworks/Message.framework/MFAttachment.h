/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachment : NSObject <MFCancelable> {
    MFAttachmentManager * _attachmentManager;
    <MFDataConsumer> * _customConsumer;
    NSString * _disposition;
    NSProgress * _downloadProgress;
    id /* block */  _fetchCompletionBlock;
    BOOL  _isAutoArchive;
    BOOL  _isDataAvailableLocally;
    unsigned int  _lastProgressBytes;
    double  _lastProgressTime;
    MFMimePart * _part;
    MFAttachmentPlaceholder * _placeholder;
    NSURL * _url;
    BOOL  _wantsCompletionBlockOffMainThread;
}

@property (nonatomic) MFAttachmentManager *attachmentManager;
@property (copy) NSString *contentID;
@property (nonatomic, retain) <MFDataConsumer> *customConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int decodedFileSize;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *disposition;
@property (nonatomic, retain) NSProgress *downloadProgress;
@property (nonatomic) unsigned int encodedFileSize;
@property (nonatomic, retain) NSString *eventID;
@property (nonatomic, copy) id /* block */ fetchCompletionBlock;
@property (nonatomic, copy) NSString *fileName;
@property (readonly) NSString *fileUTType;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *icsRepresentation;
@property (nonatomic) struct CGSize { float x1; float x2; } imageDimensions;
@property (readonly) NSString *inferredMimeType;
@property (readonly) BOOL isAutoArchive;
@property (readonly) BOOL isContainedInCompose;
@property (readonly) BOOL isContainedInRFC822;
@property (readonly) BOOL isDataAvailableLocally;
@property BOOL isPlaceholder;
@property (nonatomic) unsigned int lastProgressBytes;
@property (nonatomic) double lastProgressTime;
@property (nonatomic, retain) MFMailDropMetadata *mailDropMetadata;
@property (nonatomic, retain) NSString *meetingStorePersistentID;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, retain) MFMimePart *part;
@property (readonly) NSString *path;
@property (nonatomic, retain) MFAttachmentPlaceholder *placeholder;
@property (nonatomic, copy) NSString *remoteImageFileName;
@property (readonly) BOOL shouldAutoDownload;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic) BOOL wantsCompletionBlockOffMainThread;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (id)_dataProvider;
- (id)_fileUTTypeForFileName:(id)arg1;
- (id)attachmentContentTypeForFileName:(id)arg1;
- (id)attachmentManager;
- (void)cancel;
- (BOOL)conformsToType:(id)arg1;
- (id)contentID;
- (BOOL)contentTypeConformsToEvent;
- (BOOL)contentTypeConformsToEventICS;
- (BOOL)contentTypeConformsToEventVCS;
- (BOOL)contentTypeConformsToIWork;
- (BOOL)contentTypeConformsToMarkup;
- (BOOL)contentTypeConformsToPassbook;
- (BOOL)contentTypeConformsToProvisionment;
- (BOOL)contentTypeConformsToVCard;
- (id)customConsumer;
- (void)dealloc;
- (id)decodeFilterWithDataConsumer:(id)arg1;
- (unsigned int)decodedFileSize;
- (id)description;
- (id)disposition;
- (id)downloadProgress;
- (unsigned int)encodedFileSize;
- (id /* block */)fetchCompletionBlock;
- (void)fetchData;
- (id)fetchDataSynchronously:(id*)arg1;
- (id)fetchDataSynchronously:(id*)arg1 stripPrivateMetadata:(BOOL)arg2;
- (id)fetchDataToURL:(id*)arg1;
- (id)fetchLocalData;
- (id)fetchLocalData:(id*)arg1 stripPrivateMetadata:(BOOL)arg2;
- (id)fetchPlaceholderData;
- (id)fileAttributes;
- (id)fileName;
- (id)fileNameByStrippingZipIfNeeded:(BOOL)arg1;
- (id)fileURL;
- (id)fileUTType;
- (id)filterData:(id)arg1;
- (id)filterICSData:(id)arg1;
- (id)filterVCSData:(id)arg1;
- (unsigned int)hash;
- (id)inferredMimeType;
- (id)initWithURL:(id)arg1 attachmentManager:(id)arg2;
- (BOOL)isAutoArchive;
- (BOOL)isAvailable;
- (BOOL)isCached;
- (BOOL)isContainedInCompose;
- (BOOL)isContainedInRFC822;
- (BOOL)isDataAvailableLocally;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isImageFile;
- (BOOL)isMailDrop;
- (BOOL)isMailDropPhotoArchive;
- (BOOL)isPlaceholder;
- (unsigned int)lastProgressBytes;
- (double)lastProgressTime;
- (id)mailDropMetadata;
- (id)metadataValueForKey:(id)arg1;
- (id)mimeType;
- (id)part;
- (id)path;
- (id)placeholder;
- (id)readFromDisk;
- (id)remoteImageFileName;
- (void)resetProgress;
- (void)setAttachmentManager:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setCustomConsumer:(id)arg1;
- (void)setDecodedFileSize:(unsigned int)arg1;
- (void)setDisposition:(id)arg1;
- (void)setDownloadProgress:(id)arg1;
- (void)setEncodedFileSize:(unsigned int)arg1;
- (void)setFetchCompletionBlock:(id /* block */)arg1;
- (void)setFileName:(id)arg1;
- (void)setIsPlaceholder:(BOOL)arg1;
- (void)setLastProgressBytes:(unsigned int)arg1;
- (void)setLastProgressTime:(double)arg1;
- (void)setMailDropMetadata:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setMimeType:(id)arg1;
- (void)setPart:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setRemoteImageFileName:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setWantsCompletionBlockOffMainThread:(BOOL)arg1;
- (BOOL)shouldAutoDownload;
- (unsigned int)sizeOnDisk;
- (id)textEncodingGuessWithData:(id)arg1;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (void)updateProgressWithCurrentBytes:(unsigned int)arg1;
- (id)url;
- (BOOL)wantsCompletionBlockOffMainThread;
- (void)writeToDiskWithData:(id)arg1;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)attachmentElementHTMLStringWithAttributes:(id)arg1;
+ (id)passPlaceholder;

- (id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1;
- (unsigned int)_imageScale;
- (id)_imageScalingKeyForImageScale:(unsigned int)arg1;
- (BOOL)_isContentTypeDisplayableByMobileMail;
- (void)_setImageScale:(unsigned int)arg1;
- (id)className;
- (void)compressContentsWithCompletion:(id /* block */)arg1;
- (float)constrainedWidth;
- (id)contentType;
- (void)decompressContentsWithCompletion:(id /* block */)arg1;
- (void)enqueueScaleAttachmentWithCompletionBlock:(id /* block */)arg1;
- (id)eventID;
- (id)filenameStrippingZipIfNeededUseApplications:(BOOL)arg1;
- (BOOL)hasCalendarMetadata;
- (id)icsRepresentation;
- (struct CGSize { float x1; float x2; })imageDimensions;
- (struct CGSize { float x1; float x2; })imageDimensionsWithData:(id)arg1;
- (unsigned int)imageScalingFlags;
- (BOOL)isCalendarFile;
- (BOOL)isContentCompressed;
- (BOOL)isContentOpenable;
- (BOOL)isDisplayableByWebKit;
- (BOOL)isDisplayableImage;
- (BOOL)isDisplayableInline;
- (BOOL)isDisplayableInlineWithData:(id)arg1;
- (BOOL)isDisplayableInsidePlugin;
- (BOOL)isMedia;
- (BOOL)isPDFFile;
- (BOOL)isPass;
- (BOOL)isRFC822;
- (BOOL)isRestrictedMIMEType;
- (struct CGSize { float x1; float x2; })markupSizeForImageScale:(unsigned int)arg1;
- (id)markupStringForCompositionWithPrependedBlankLine:(BOOL)arg1 imageScale:(unsigned int)arg2;
- (id)markupStringForDisplayWithData:(id)arg1 displayStyle:(int)arg2 printableWidth:(float)arg3 allowAttachmentElement:(BOOL)arg4;
- (id)meetingStorePersistentID;
- (BOOL)needsColorspaceConversion;
- (id)pass;
- (id)passWithError:(id*)arg1;
- (unsigned int)scaledFileSize;
- (unsigned int)scaledFileSizeForScale:(unsigned int)arg1;
- (id)scaledImageToFit:(unsigned int)arg1 saveScaledImage:(BOOL)arg2 attachmentContextID:(id)arg3;
- (void)setEventID:(id)arg1;
- (void)setIcsRepresentation:(id)arg1;
- (void)setImageDimensions:(struct CGSize { float x1; float x2; })arg1;
- (void)setMeetingStorePersistentID:(id)arg1;

@end
