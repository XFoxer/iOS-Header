//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSgPTPNetworkPort.h>

@class TSgPTPPortStatistics;

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort
{
    TSgPTPPortStatistics *_statistics;
}

+ (id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TSgPTPPortStatistics *statistics; // @synthesize statistics=_statistics;
- (id)_statistics;
- (void)updateProperties;
- (_Bool)_commonInitWithService:(id)arg1;

@end

