//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPFileDataStorage.h>

@class NSURL, SFUCryptoKey;

@interface TSPTemporaryDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
    SFUCryptoKey *_decryptionKey;
    _Bool _isMissingData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMissingData; // @synthesize isMissingData=_isMissingData;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 decryptionKey:(id)arg2;

@end

