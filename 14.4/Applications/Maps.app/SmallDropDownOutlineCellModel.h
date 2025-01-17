//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapsUIDiffableDataSourceViewModel-Protocol.h"

@class NSArray, NSString, SidebarOutlineCellBackgroundModel, UICollectionViewCellRegistration;
@protocol SmallDropDownOutlineCellDelegate;

__attribute__((visibility("hidden")))
@interface SmallDropDownOutlineCellModel : NSObject <MapsUIDiffableDataSourceViewModel>
{
    NSString *_buttonTitle;
    NSArray *_dropDownTitles;
    long long _selectedIndex;
    id <SmallDropDownOutlineCellDelegate> _delegate;
    SidebarOutlineCellBackgroundModel *_backgroundModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SidebarOutlineCellBackgroundModel *backgroundModel; // @synthesize backgroundModel=_backgroundModel;
@property(readonly, nonatomic) __weak id <SmallDropDownOutlineCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly, nonatomic) NSArray *dropDownTitles; // @synthesize dropDownTitles=_dropDownTitles;
@property(readonly, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (_Bool)needsReloadFromPreviousViewModel:(id)arg1;
@property(readonly, nonatomic) UICollectionViewCellRegistration *cellRegistration;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithButtonTitle:(id)arg1 dropDownTitles:(id)arg2 selectedIndex:(long long)arg3 delegate:(id)arg4 backgroundModel:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

