//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFOpenShortcutEvent : WFEvent
{
    unsigned int _actionCount;
    NSString *_key;
    NSString *_shortcutSource;
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryIdentifier;
}

+ (id)serializablePropertyTransformers;
+ (Class)codableEventClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(copy, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(copy, nonatomic) NSString *shortcutSource; // @synthesize shortcutSource=_shortcutSource;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end

