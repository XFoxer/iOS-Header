//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUMaskProvider.h>

@class SUScriptCanvasFunction;

@interface SUCanvasMaskProvider : SUMaskProvider
{
    SUScriptCanvasFunction *_function;
}

- (struct CGPath *)copyPathForMaskWithSize:(struct CGSize)arg1;
- (id)copyMaskImageWithSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFunction:(id)arg1;

@end

