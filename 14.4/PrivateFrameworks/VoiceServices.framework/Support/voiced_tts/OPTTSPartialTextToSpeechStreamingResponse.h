//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <voiced_tts/FLTBFBufferAccessor-Protocol.h>
#import <voiced_tts/NSCopying-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface OPTTSPartialTextToSpeechStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct PartialTextToSpeechStreamingResponse *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_cde40885)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) NSArray *word_timing_info;
- (void)audio:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSData *audio;
@property(readonly, nonatomic) int current_pkt_number;
@property(readonly, nonatomic) NSString *stream_id;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PartialTextToSpeechStreamingResponse *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PartialTextToSpeechStreamingResponse *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

