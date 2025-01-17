//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface RTReviewedPlace : NSObject
{
    _Bool _hasUserReviewed;
    unsigned long long _muid;
    NSDate *_lastSuggestedReviewDate;
    NSDate *_modifiedDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(readonly, nonatomic) _Bool hasUserReviewed; // @synthesize hasUserReviewed=_hasUserReviewed;
@property(readonly, nonatomic) NSDate *lastSuggestedReviewDate; // @synthesize lastSuggestedReviewDate=_lastSuggestedReviewDate;
@property(readonly, nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (id)description;
- (id)initWithMuid:(unsigned long long)arg1 lastSuggestedReviewDate:(id)arg2 hasUserReviewed:(_Bool)arg3 modifiedDate:(id)arg4;
- (id)init;

@end

