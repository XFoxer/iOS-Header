//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBSetupAssistantProgressController.h>

@class NSDateComponentsFormatter;

@interface BFFTimeRemainingController : OBSetupAssistantProgressController
{
    NSDateComponentsFormatter *_durationFormatter;
}

- (void).cxx_destruct;
@property(retain) NSDateComponentsFormatter *durationFormatter; // @synthesize durationFormatter=_durationFormatter;
- (id)timeRemainingString:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setTimeRemainingEstimate:(double)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;

@end

