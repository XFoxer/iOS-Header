//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

__attribute__((visibility("hidden")))
@interface SKUIExpandViewElement : SKUIViewElement
{
    _Bool _open;
    _Bool _previousIsOpen;
}

@property(nonatomic) _Bool previousIsOpen; // @synthesize previousIsOpen=_previousIsOpen;
@property(readonly, nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
- (long long)pageComponentType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

