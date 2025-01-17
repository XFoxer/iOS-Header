//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Widgets/WGWidgetVisibilityDelegate-Protocol.h>
#import <Widgets/_WGDataSourceManager-Protocol.h>

@class NSArray, NSString, WGWidgetDataSource, WGWidgetVisibilityManager;
@protocol _WGParentDataSourceManager;

@interface WGWidgetDataSourceManager : NSObject <WGWidgetVisibilityDelegate, _WGDataSourceManager>
{
    WGWidgetDataSource *_widgetDataSource;
    WGWidgetVisibilityManager *_widgetVisbilityManager;
    id _plugInDiscoveryToken;
    _Bool _isPublishing;
    CDUnknownBlockType _didStartBlock;
    id <_WGParentDataSourceManager> _parentDataSourceManager;
}

+ (id)discoverAvailableWidgetsWithError:(id *)arg1;
+ (id)_widgetExtensionsDiscoveryAttributes;
- (void).cxx_destruct;
@property(retain, nonatomic, getter=_widgetVisbilityManager) WGWidgetVisibilityManager *widgetVisbilityManager; // @synthesize widgetVisbilityManager=_widgetVisbilityManager;
@property(nonatomic) id <_WGParentDataSourceManager> parentDataSourceManager; // @synthesize parentDataSourceManager=_parentDataSourceManager;
@property(retain, nonatomic, getter=_plugInDiscoveryToken, setter=_setPlugInDiscoveryToken:) id plugInDiscoveryToken; // @synthesize plugInDiscoveryToken=_plugInDiscoveryToken;
- (void)_endContinuousPlugInDiscovery;
- (void)_beginContinuousPlugInDiscovery;
- (void)_updatePublishedWidgetExtensions;
- (void)_updatePublishedWidgetExtensions:(id)arg1;
- (void)_revokeExtensionWithIdentifier:(id)arg1;
- (void)_updateDataSourceWithExtension:(id)arg1;
- (_Bool)_shouldPublishWidgetExtension:(id)arg1;
- (void)widgetVisibilityDidChange;
- (void)_stop:(CDUnknownBlockType)arg1;
- (void)_start:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *dataSources;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

