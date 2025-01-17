//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTBatchTranslationResponse : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BatchTranslationResponse *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_b7e0ff9f)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) NSArray *span;
@property(readonly, nonatomic) NSString *translated_text;
@property(readonly, nonatomic) NSString *paragraph_id;
@property(readonly, nonatomic) NSString *return_string;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *request_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationResponse *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationResponse *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

