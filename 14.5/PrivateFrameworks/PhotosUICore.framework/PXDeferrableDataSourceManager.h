//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSArray, NSString, PXSectionedDataSource;
@protocol PXDeferrableDataSourceManagerDelegate;

@interface PXDeferrableDataSourceManager : PXSectionedDataSourceManager <PXSectionedDataSourceManagerObserver>
{
    PXSectionedDataSourceManager *_underlyingDataSourceManager;
    _Bool _hasInitialDataSource;
    _Bool _clientIsHandlingDataSourceTransition;
    PXSectionedDataSource *_pendingDataSource;
    NSArray *_pendingDataSourceChangeDetails;
    id <PXDeferrableDataSourceManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PXDeferrableDataSourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)resumeDataSourceChanges;
- (void)_setPendingDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (_Bool)_canAttemptDataSourceChanges;
- (id)createInitialDataSource;
- (void)_internal_setDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)_finishTransitionToDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)setDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (id)changeDetailsFromDataSource:(id)arg1 toDataSource:(id)arg2;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

