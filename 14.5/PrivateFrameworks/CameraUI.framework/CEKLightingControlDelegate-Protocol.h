//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CEKLightingControl;

@protocol CEKLightingControlDelegate <NSObject>
- (void)lightingControlDidChangeSelectedLightingType:(CEKLightingControl *)arg1;

@optional
- (void)lightingControlDidChangeExpanded:(CEKLightingControl *)arg1;
- (void)lightingControl:(CEKLightingControl *)arg1 willChangeExpanded:(_Bool)arg2;
@end

