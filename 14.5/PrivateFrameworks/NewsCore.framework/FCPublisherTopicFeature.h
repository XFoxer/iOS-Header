//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCPersonalizationFeature.h>

@class NSArray, NSString;

@interface FCPublisherTopicFeature : FCPersonalizationFeature
{
    NSString *_publisherTagID;
    NSString *_topicTagID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *topicTagID; // @synthesize topicTagID=_topicTagID;
@property(retain, nonatomic) NSString *publisherTagID; // @synthesize publisherTagID=_publisherTagID;
@property(readonly, nonatomic) NSArray *features;
- (id)initWithPublisherTagID:(id)arg1 topicTagID:(id)arg2;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)init;

@end

