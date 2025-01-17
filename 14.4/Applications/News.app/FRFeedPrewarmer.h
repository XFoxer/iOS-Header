//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLFeedSettings, TSImageCache;
@protocol FRFeedCollectionViewLayoutBlueprintProviderType, FRFeldsparContext;

@interface FRFeedPrewarmer : NSObject
{
    NFLFeedSettings *_feedSettings;
    id <FRFeldsparContext> _feldsparContext;
    id <FRFeedCollectionViewLayoutBlueprintProviderType> _blueprintProvider;
    TSImageCache *_publisherLogoImageCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSImageCache *publisherLogoImageCache; // @synthesize publisherLogoImageCache=_publisherLogoImageCache;
@property(nonatomic) __weak id <FRFeedCollectionViewLayoutBlueprintProviderType> blueprintProvider; // @synthesize blueprintProvider=_blueprintProvider;
@property(nonatomic) __weak id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
- (id)initWithBlueprintProvider:(id)arg1 feedSettings:(id)arg2 feldsparContext:(id)arg3 publisherLogoImageCache:(id)arg4;

@end

