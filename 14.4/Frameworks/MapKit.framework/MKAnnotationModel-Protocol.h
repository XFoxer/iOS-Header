//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@protocol MKAnnotationRepresentation;

@protocol MKAnnotationModel <NSObject>
- (void)moveAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 fromCoordinate:(struct CLLocationCoordinate2D)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)deselectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 animated:(_Bool)arg2;
- (void)selectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 animated:(_Bool)arg2;
- (void)removeAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1;
- (void)addAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 allowAnimation:(_Bool)arg2;
@end

