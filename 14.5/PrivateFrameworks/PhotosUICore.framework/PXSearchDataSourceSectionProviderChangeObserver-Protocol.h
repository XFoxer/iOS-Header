//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray;
@protocol PXSearchDataSourceSectionProvider;

@protocol PXSearchDataSourceSectionProviderChangeObserver <NSObject>
- (void)searchDataSourceSectionProviderDidChange:(id <PXSearchDataSourceSectionProvider>)arg1 reloadItemIdentifiers:(NSArray *)arg2 animateChanges:(_Bool)arg3;
- (void)searchDataSourceSectionProviderDidChange:(id <PXSearchDataSourceSectionProvider>)arg1 animateChanges:(_Bool)arg2;
@end

