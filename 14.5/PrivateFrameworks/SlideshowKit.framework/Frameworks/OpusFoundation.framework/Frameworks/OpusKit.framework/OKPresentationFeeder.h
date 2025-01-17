//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKPresentationCanvas.h>

@class NSMutableDictionary, NSString;

@interface OKPresentationFeeder : OKPresentationCanvas
{
    NSString *_className;
    NSMutableDictionary *_internalSettings;
}

+ (id)feederWithName:(id)arg1 className:(id)arg2 settings:(id)arg3;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
- (void)resolveIfNeeded;
- (id)dictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3;
- (id)init;

@end

