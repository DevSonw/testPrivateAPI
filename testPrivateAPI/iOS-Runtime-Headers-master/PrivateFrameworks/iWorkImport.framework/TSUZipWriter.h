/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipWriter : NSObject {
    BOOL  _calculateCRC;
    BOOL  _calculateSize;
    NSObject<OS_dispatch_queue> * _channelQueue;
    TSUZipWriterEntry * _currentEntry;
    long long  _currentOffset;
    NSMutableArray * _entries;
    NSMutableDictionary * _entriesMap;
    unsigned long  _entryDataSize;
    NSMutableArray * _entryDatas;
    unsigned short  _entryDate;
    unsigned short  _entryTime;
    NSError * _error;
    BOOL  _force32BitSize;
    BOOL  _isClosed;
    NSObject<OS_dispatch_data> * _localFileHeaderData;
    unsigned int  _options;
    <TSURandomWriteChannel> * _writeChannel;
    NSObject<OS_dispatch_semaphore> * _writeChannelCompletionSemaphore;
    long  _writeChannelOnceToken;
    NSObject<OS_dispatch_queue> * _writeQueue;
    long long  _writtenOffset;
}

@property (nonatomic, readonly) unsigned long long archiveLength;

- (void).cxx_destruct;
- (void)addBarrier:(id /* block */)arg1;
- (void)addData:(id)arg1;
- (void)addData:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)addDataImpl:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)archiveLength;
- (void)beginEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2;
- (void)beginEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 size:(unsigned long long)arg3 CRC:(unsigned int)arg4;
- (void)beginEntryWithNameImpl:(id)arg1 force32BitSize:(BOOL)arg2 size:(unsigned long long)arg3 CRC:(unsigned int)arg4;
- (void)closeWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)encodedLengthForEntryWithName:(id)arg1;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
- (void)finishEntry;
- (void)flushEntryData;
- (void)handleWriteError:(id)arg1;
- (id)init;
- (void)initEntryTime;
- (id)initWithOptions:(unsigned int)arg1;
- (id)localFileHeaderDataForEntry:(id)arg1;
- (void)p_writeData:(id)arg1 offset:(long long)arg2 completion:(id /* block */)arg3;
- (id)prepareWriteChannelWithCloseCompletionHandler:(id /* block */)arg1;
- (void)writeCentralDirectory;
- (void)writeCentralFileHeaderDataForEntry:(id)arg1;
- (id)writeChannel;
- (void)writeData:(id)arg1;
- (void)writeData:(id)arg1 offset:(long long)arg2;
- (void)writeData:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)writeEndOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned int)arg3;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 fromReadChannel:(id)arg3 completion:(id /* block */)arg4;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 size:(unsigned long long)arg3 CRC:(unsigned int)arg4 fromReadChannel:(id)arg5 completion:(id /* block */)arg6;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 size:(unsigned long long)arg3 CRC:(unsigned int)arg4 fromReadChannel:(id)arg5 writeHandler:(id /* block */)arg6;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned int)arg3;

@end