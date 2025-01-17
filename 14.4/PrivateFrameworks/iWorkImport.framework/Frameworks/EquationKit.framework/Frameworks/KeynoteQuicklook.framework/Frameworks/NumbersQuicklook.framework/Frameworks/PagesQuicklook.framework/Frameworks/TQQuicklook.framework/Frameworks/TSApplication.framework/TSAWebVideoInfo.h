//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDDrawableInfo.h>

#import <TSApplication/TSDDrawableInfoCustomUnarchivingSubclassProviding-Protocol.h>
#import <TSApplication/TSDFittingOnInsertion-Protocol.h>
#import <TSApplication/TSDMixing-Protocol.h>
#import <TSApplication/TSDStyleOwning-Protocol.h>
#import <TSApplication/TSSStyleClient-Protocol.h>

@class NSString, NSURL, TSDAttribution, TSDMediaStyle, TSPData, TSSStyle;

@interface TSAWebVideoInfo : TSDDrawableInfo <TSDFittingOnInsertion, TSDMixing, TSDDrawableInfoCustomUnarchivingSubclassProviding, TSDStyleOwning, TSSStyleClient>
{
    TSDMediaStyle *_style;
    NSString *_URLString;
    TSPData *_posterImageData;
    TSDAttribution *_attribution;
    _Bool _definedPosterImageData;
    _Bool _definedAttribution;
    struct CGSize _archivedImageNaturalSize;
}

+ (id)p_defaultArchivedImageStyleWithContext:(id)arg1;
+ (Class)drawableInfoSubclassForClass:(Class)arg1 unarchiver:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) TSDAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) TSPData *posterImageData; // @synthesize posterImageData=_posterImageData;
- (void)didInitFromSOS;
- (void)saveToArchive:(struct ImageArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ImageArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)animationFilters;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
@property(readonly, nonatomic) Class styleClass;
@property(retain, nonatomic) TSSStyle *style;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (unsigned int)elementKind;
- (id)p_attributedStringRepresentation;
- (id)promisedDataForType:(id)arg1;
- (_Bool)wantsStandardTypesInAdditionToTypesToPromiseWhenDraggingSingleDrawable;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (_Bool)supportsHyperlinks;
- (void)scaleDownSizeToFitWithinSize:(struct CGSize)arg1;
- (void)acceptVisitor:(id)arg1;
- (void)takePropertiesFromReplacedWebVideoInfo:(id)arg1;
- (void)takeGeometryFromReplacedWebVideoInfo:(id)arg1;
@property(readonly, nonatomic) NSURL *URL;
- (_Bool)allowsTitle;
- (_Bool)allowsCaption;
- (_Bool)wantsCounterRotationWhenNotSupportingParentRotationInRotatedParent;
- (_Bool)supportsParentRotation;
- (_Bool)isSelectable;
- (Class)repClass;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 URL:(id)arg4 posterImageData:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 URL:(id)arg3 posterImageData:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

