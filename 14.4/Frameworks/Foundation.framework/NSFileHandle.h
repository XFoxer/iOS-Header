//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSData;

@interface NSFileHandle : NSObject <NSSecureCoding>
{
}

+ (id)fileHandleForUpdatingURL:(id)arg1 mode:(unsigned short)arg2 error:(id *)arg3;
+ (id)fileHandleForWritingToURL:(id)arg1 mode:(unsigned short)arg2 error:(id *)arg3;
+ (id)fileHandleForReadingFromURL:(id)arg1 mode:(unsigned short)arg2 error:(id *)arg3;
+ (id)fileHandleForUpdatingURL:(id)arg1 error:(id *)arg2;
+ (id)fileHandleForWritingToURL:(id)arg1 error:(id *)arg2;
+ (id)fileHandleForReadingFromURL:(id)arg1 error:(id *)arg2;
+ (id)fileHandleForUpdatingAtPath:(id)arg1;
+ (id)fileHandleForWritingAtPath:(id)arg1;
+ (id)fileHandleForReadingAtPath:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)fileHandleWithNullDevice;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleWithStandardOutput;
+ (id)fileHandleWithStandardInput;
+ (void)initialize;
- (void)_closeOnDealloc;
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)readabilityHandler;
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)writeabilityHandler;
- (int)fileDescriptor;
- (_Bool)closeAndReturnError:(out id *)arg1;
- (void)closeFile;
- (_Bool)synchronizeAndReturnError:(out id *)arg1;
- (void)synchronizeFile;
- (_Bool)truncateAtOffset:(unsigned long long)arg1 error:(out id *)arg2;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (_Bool)seekToOffset:(unsigned long long)arg1 error:(out id *)arg2;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (_Bool)seekToEndReturningOffset:(out unsigned long long *)arg1 error:(out id *)arg2;
- (unsigned long long)seekToEndOfFile;
- (_Bool)getOffset:(out unsigned long long *)arg1 error:(out id *)arg2;
@property(readonly) unsigned long long offsetInFile;
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;
- (void)writeData:(id)arg1;
- (id)readDataUpToLength:(unsigned long long)arg1 error:(out id *)arg2;
- (id)readDataOfLength:(unsigned long long)arg1;
- (id)readDataToEndOfFileAndReturnError:(out id *)arg1;
- (id)readDataToEndOfFile;
@property(readonly, copy) NSData *availableData;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(_Bool)arg2;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;

@end

