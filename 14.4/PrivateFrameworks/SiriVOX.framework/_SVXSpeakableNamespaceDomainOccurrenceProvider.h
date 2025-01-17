//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/AFSpeakableNamespaceProvider-Protocol.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _SVXSpeakableNamespaceDomainOccurrenceProvider : NSObject <AFSpeakableNamespaceProvider>
{
    NSString *_domain;
    unsigned long long _count;
    NSSet *_deferredMessageKeys;
}

+ (id)providerForDomain:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *deferredMessageKeys; // @synthesize deferredMessageKeys=_deferredMessageKeys;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)stringForExpression:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

