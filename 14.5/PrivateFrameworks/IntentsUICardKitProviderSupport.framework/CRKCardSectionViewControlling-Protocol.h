//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IntentsUICardKitProviderSupport/CRKEventResponding-Protocol.h>

@protocol CRKCardSectionViewControllingDelegate;

@protocol CRKCardSectionViewControlling <CRKEventResponding>
@property(nonatomic) __weak id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;

@optional
- (void)desiresInteractivity:(void (^)(_Bool))arg1;
@end

