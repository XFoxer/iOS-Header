//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SASTTemplatePercentageRating, SAUIDecoratedText;

@interface SASTMovieRatingReviewItem : AceObject <SASTTemplateItem>
{
}

+ (id)movieRatingReviewItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)movieRatingReviewItem;
@property(retain, nonatomic) SASTTemplatePercentageRating *templatePercentageRating;
@property(retain, nonatomic) SAUIDecoratedText *reviews;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

