//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVEditView;

@protocol AVEditViewDelegate <NSObject>
- (void)editViewDidFinishRequestingThumbnails:(AVEditView *)arg1;
- (void)editViewWillBeginRequestingThumbnails:(AVEditView *)arg1;
- (void)editView:(AVEditView *)arg1 trimEndTimeDidChange:(double)arg2;
- (void)editView:(AVEditView *)arg1 trimStartTimeDidChange:(double)arg2;
- (void)editView:(AVEditView *)arg1 currentTimeDidChange:(double)arg2;
- (void)editViewDidEndScrubbing:(AVEditView *)arg1;
- (void)editViewDidBeginScrubbing:(AVEditView *)arg1;
@end

