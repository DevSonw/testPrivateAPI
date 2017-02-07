/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFZipCentralDirectoryFileHeader : NSObject {
    unsigned int  _compressedSize;
    unsigned short  _compressionMethod;
    unsigned int  _crc32;
    unsigned int  _externalFileAttrs;
    NSData * _extraFieldData;
    unsigned short  _extraFieldLength;
    NSString * _fileComment;
    unsigned short  _fileCommentLength;
    unsigned short  _fileStartDiskNumber;
    NSString * _filename;
    unsigned short  _filenameLength;
    unsigned short  _generalPurposeBit;
    unsigned short  _internalFileAttrs;
    unsigned short  _lastModDate;
    unsigned short  _lastModTime;
    unsigned int  _localFileHeaderRelativeOffset;
    unsigned int  _uncompressedSize;
    unsigned short  _versionMadeBy;
    unsigned short  _versionNeededToExtract;
}

@property (nonatomic) unsigned int compressedSize;
@property (nonatomic) unsigned short compressionMethod;
@property (nonatomic) unsigned int crc32;
@property (nonatomic) unsigned int externalFileAttrs;
@property (nonatomic, retain) NSData *extraFieldData;
@property (nonatomic, readonly) unsigned short extraFieldLength;
@property (nonatomic, retain) NSString *fileComment;
@property (nonatomic, readonly) unsigned short fileCommentLength;
@property (nonatomic) unsigned short fileStartDiskNumber;
@property (nonatomic, retain) NSString *filename;
@property (nonatomic, readonly) unsigned short filenameLength;
@property (nonatomic) unsigned short generalPurposeBit;
@property (nonatomic) unsigned short internalFileAttrs;
@property (nonatomic) unsigned short lastModDate;
@property (nonatomic) unsigned short lastModTime;
@property (nonatomic) unsigned int localFileHeaderRelativeOffset;
@property (nonatomic) unsigned int uncompressedSize;
@property (nonatomic) unsigned short versionMadeBy;
@property (nonatomic) unsigned short versionNeededToExtract;

- (void)appendToData:(id)arg1;
- (unsigned int)compressedSize;
- (unsigned short)compressionMethod;
- (unsigned int)crc32;
- (void)dealloc;
- (id)description;
- (unsigned int)externalFileAttrs;
- (id)extraFieldData;
- (unsigned short)extraFieldLength;
- (id)fileComment;
- (unsigned short)fileCommentLength;
- (unsigned short)fileStartDiskNumber;
- (id)filename;
- (unsigned short)filenameLength;
- (unsigned short)generalPurposeBit;
- (id)init;
- (unsigned short)internalFileAttrs;
- (unsigned short)lastModDate;
- (unsigned short)lastModTime;
- (unsigned int)loadFromBytes:(const char *)arg1 offset:(unsigned int)arg2;
- (unsigned int)loadFromData:(id)arg1 offset:(unsigned int)arg2;
- (unsigned int)localFileHeaderRelativeOffset;
- (void)setCompressedSize:(unsigned int)arg1;
- (void)setCompressionMethod:(unsigned short)arg1;
- (void)setCrc32:(unsigned int)arg1;
- (void)setExternalFileAttrs:(unsigned int)arg1;
- (void)setExtraFieldData:(id)arg1;
- (void)setFileComment:(id)arg1;
- (void)setFileStartDiskNumber:(unsigned short)arg1;
- (void)setFilename:(id)arg1;
- (void)setGeneralPurposeBit:(unsigned short)arg1;
- (void)setInternalFileAttrs:(unsigned short)arg1;
- (void)setLastModDate:(unsigned short)arg1;
- (void)setLastModTime:(unsigned short)arg1;
- (void)setLocalFileHeaderRelativeOffset:(unsigned int)arg1;
- (void)setUncompressedSize:(unsigned int)arg1;
- (void)setVersionMadeBy:(unsigned short)arg1;
- (void)setVersionNeededToExtract:(unsigned short)arg1;
- (unsigned int)uncompressedSize;
- (unsigned short)versionMadeBy;
- (unsigned short)versionNeededToExtract;

@end
