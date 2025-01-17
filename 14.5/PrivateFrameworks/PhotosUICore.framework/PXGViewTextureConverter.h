//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGTextureConverter-Protocol.h>

@class NSString, PXGImageTexture;
@protocol OS_dispatch_queue;

@interface PXGViewTextureConverter : NSObject <PXGTextureConverter>
{
    _Bool _lowMemoryMode;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool lowMemoryMode; // @synthesize lowMemoryMode=_lowMemoryMode;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
- (id)createAtlasForTextureAtlasManager:(id)arg1;
- (id)createTextureAtlasManagerForImageDataSpec:(CDStruct_1b544862)arg1;
@property(readonly, nonatomic) PXGImageTexture *transparentTexture;
@property(readonly, nonatomic) _Bool supportsTextureAtlas;
- (id)createPayloadTextureFromPayload:(id)arg1;
- (id)createTextureFromCVPixelBuffer:(struct __CVBuffer *)arg1 transform:(struct CGAffineTransform)arg2;
- (id)createTextureFromCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2;
@property(readonly, nonatomic) int presentationType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

