//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLPTPConversionResult : NSObject
{
    NSString *_pathExtension;
    unsigned long long _estimatedFileLength;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long estimatedFileLength; // @synthesize estimatedFileLength=_estimatedFileLength;
@property(readonly, copy) NSString *pathExtension; // @synthesize pathExtension=_pathExtension;
- (id)initWithPathExtension:(id)arg1 estimatedFileLength:(unsigned long long)arg2;

@end

