//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, VideosExtrasGridElementViewController, VideosExtrasGridSectionHeaderStyle, VideosExtrasStackTemplateViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasStackCollectionCell : UICollectionViewCell
{
    NSArray *_fitConstraints;
    _Bool _needsViewWillAppear;
    VideosExtrasStackTemplateViewController *_parentViewController;
    VideosExtrasGridElementViewController *_viewController;
    VideosExtrasGridSectionHeaderStyle *_sectionStyle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) VideosExtrasGridSectionHeaderStyle *sectionStyle; // @synthesize sectionStyle=_sectionStyle;
@property(retain, nonatomic) VideosExtrasGridElementViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) VideosExtrasStackTemplateViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void)willMoveToSuperview:(id)arg1;

@end

