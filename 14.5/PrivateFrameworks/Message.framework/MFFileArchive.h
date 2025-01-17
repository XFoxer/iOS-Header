//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface MFFileArchive : NSObject
{
    NSData *_inputData;
    NSMutableData *_outputData;
    CDUnknownBlockType _readerBlock;
    CDUnknownBlockType _writerBlock;
    struct _NSRange _inputRange;
}

+ (id)archive;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType writerBlock; // @synthesize writerBlock=_writerBlock;
@property(copy, nonatomic) CDUnknownBlockType readerBlock; // @synthesize readerBlock=_readerBlock;
@property(retain, nonatomic) NSMutableData *outputData; // @synthesize outputData=_outputData;
@property(nonatomic) struct _NSRange inputRange; // @synthesize inputRange=_inputRange;
@property(retain, nonatomic) NSData *inputData; // @synthesize inputData=_inputData;
- (int)_decompressionCompleteForArchive:(struct archive *)arg1 error:(id *)arg2;
- (_Bool)_decompressArchive:(struct archive *)arg1 intoArchiveDirectory:(id)arg2 error:(id *)arg3;
- (struct archive *)_decompressionArchive;
- (void)decompressContents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_decompressContents:(id)arg1 inMemoryWithError:(id *)arg2 mainEntry:(_Bool)arg3;
- (int)_compressionCompleteForArchive:(struct archive *)arg1 error:(id *)arg2;
- (int)_archiveDirectoryName:(id)arg1 withArchive:(struct archive *)arg2 error:(id *)arg3;
- (int)_compressContents:(id)arg1 fileName:(id)arg2 withArchive:(struct archive *)arg3 error:(id *)arg4;
- (struct archive_entry *)_compressionArchiveEntryWithName:(id)arg1 length:(unsigned long long)arg2 isDirectory:(_Bool)arg3;
- (int)_compressWithArchive:(struct archive *)arg1 error:(id *)arg2;
- (int)_compressContents:(id)arg1 withArchive:(struct archive *)arg2 error:(id *)arg3;
- (struct archive *)_compressionArchive;
- (id)compressFolder:(id)arg1 error:(id *)arg2;
- (void)compressContents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_compressContents:(id)arg1 error:(id *)arg2;
- (void)unregisterBlocks;
- (void)registerBlocks:(CDUnknownBlockType)arg1 writer:(CDUnknownBlockType)arg2;
- (id)_errorForArchiveStatus:(long long)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end

