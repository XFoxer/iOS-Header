//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol RestaurantReservationDetailsError <NSObject>
@property(copy, nonatomic) NSString *errorButtonText;
@property(copy, nonatomic) NSString *errorText;
@property(nonatomic) _Bool displayError;
- (void)addErrorButtonTouchUpInsideTarget:(id)arg1 action:(SEL)arg2;
- (void)setDisplayError:(_Bool)arg1 animated:(_Bool)arg2;
@end

