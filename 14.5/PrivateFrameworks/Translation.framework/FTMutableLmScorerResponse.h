//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTLmScorerResponse.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableLmScorerResponse : FTLmScorerResponse
{
}

@property(nonatomic) double ppl;
@property(copy, nonatomic) NSArray *tokens;
@property(copy, nonatomic) NSString *return_str;
@property(nonatomic) int return_code;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

