//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsAction.h"

__attribute__((visibility("hidden")))
@interface OpenFavoritesAction : MapsAction
{
    long long _favoritesType;
}

@property(nonatomic) long long favoritesType; // @synthesize favoritesType=_favoritesType;
- (_Bool)isCompatibleWithRestorationTask;
- (id)initWithFavoriteType:(long long)arg1;

@end

