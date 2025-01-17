//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>

@class TSCH3DSceneObject;

@interface TSCH3DPickedPoint : NSObject <NSCopying>
{
    tvec2_3b141483 _element;
    TSCH3DSceneObject *_sceneObject;
    tvec3_17f03ce0 _objectSpacePoint;
    tvec2_84d5962d _centerProjectionPoint;
    tmat4x4_3074befe _projection;
    tmat4x4_3074befe _transform;
}

+ (id)pickedPointWithSceneObject:(id)arg1 element:(const tvec2_3b141483 *)arg2 projection:(const tmat4x4_3074befe *)arg3 transform:(const tmat4x4_3074befe *)arg4 objectSpacePoint:(const tvec3_17f03ce0 *)arg5 centerProjectionPoint:(const tvec2_84d5962d *)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) TSCH3DSceneObject *sceneObject; // @synthesize sceneObject=_sceneObject;
@property(readonly, nonatomic) tmat4x4_3074befe transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) tmat4x4_3074befe projection; // @synthesize projection=_projection;
@property(readonly, nonatomic) tvec2_84d5962d centerProjectionPoint; // @synthesize centerProjectionPoint=_centerProjectionPoint;
@property(readonly, nonatomic) tvec3_17f03ce0 objectSpacePoint; // @synthesize objectSpacePoint=_objectSpacePoint;
@property(readonly, nonatomic) tvec2_3b141483 element; // @synthesize element=_element;
@property(readonly, nonatomic) tvec3_17f03ce0 cameraSpacePoint;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSceneObject:(id)arg1 element:(const tvec2_3b141483 *)arg2 projection:(const tmat4x4_3074befe *)arg3 transform:(const tmat4x4_3074befe *)arg4 objectSpacePoint:(const tvec3_17f03ce0 *)arg5 centerProjectionPoint:(const tvec2_84d5962d *)arg6;

@end

