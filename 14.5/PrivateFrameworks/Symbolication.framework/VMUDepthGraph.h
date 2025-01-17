//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VMUProcessObjectGraph;

@interface VMUDepthGraph : NSObject
{
    VMUProcessObjectGraph *_graph;
    unsigned int *_depthMap;
}

- (void).cxx_destruct;
- (void)_buildDepthMap;
- (void)_buildNextDepth:(id)arg1 into:(id)arg2 depth:(unsigned int)arg3;
- (void)_processNodes:(void *)arg1 withDepth:(unsigned int)arg2;
- (long long)markNodes:(void *)arg1 atDepth:(unsigned int)arg2;
- (unsigned int)depthOfNode:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithGraph:(id)arg1;

@end

