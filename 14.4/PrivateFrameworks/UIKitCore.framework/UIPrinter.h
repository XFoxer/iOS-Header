//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface UIPrinter : NSObject
{
    id _printerInfo;
    NSURL *URL;
}

+ (id)printerWithURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSURL *URL; // @synthesize URL;
- (id)_internalPrinter;
- (void)contactPrinter:(CDUnknownBlockType)arg1;
@property(readonly) _Bool supportsDuplex;
@property(readonly) _Bool supportsColor;
@property(readonly, copy) NSString *makeAndModel;
@property(readonly) long long supportedJobTypes;
@property(readonly, copy) NSString *displayLocation;
@property(readonly, copy) NSString *displayName;
- (id)init;
- (id)_initWithPrinter:(id)arg1;
- (id)_initWithURL:(id)arg1;

@end

