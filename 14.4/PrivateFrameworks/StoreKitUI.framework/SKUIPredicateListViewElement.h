//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSPredicate;

@interface SKUIPredicateListViewElement : SKUIViewElement
{
    NSPredicate *_compoundEntityValuePredicate;
}

- (void).cxx_destruct;
- (void)_enumeratePredicateViewElementsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSPredicate *compoundEntityValuePredicate;
@property(readonly, copy, nonatomic) NSArray *predicateViewElements;
- (id)applyUpdatesWithElement:(id)arg1;

@end

