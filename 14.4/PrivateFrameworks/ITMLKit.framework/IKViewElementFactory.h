//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKViewElementRegistry, IKViewElementStyleFactory;

@interface IKViewElementFactory : NSObject
{
    struct {
        unsigned int sparse:1;
        unsigned int parsingUpdatedTree:1;
        unsigned int parsingReorderedSiblings:1;
        unsigned int parsingPartOfPrototype:1;
    } _parsingFlags;
    IKViewElementRegistry *_elementRegistry;
    IKViewElementStyleFactory *_styleFactory;
}

+ (_Bool)elementsForDocumentElement:(id)arg1 context:(id)arg2;
+ (_Bool)isDependentByTagName:(id)arg1;
+ (Class)elementClassByTagName:(id)arg1;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(_Bool)arg4;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) IKViewElementStyleFactory *styleFactory; // @synthesize styleFactory=_styleFactory;
- (id)elementForDOMElement:(id)arg1 parent:(id)arg2;
@property(nonatomic, getter=isSparse) _Bool sparse;
- (unsigned long long)elementTypeByTagName:(id)arg1;
- (Class)elementClassByTagName:(id)arg1;
- (id)initWithElementRegistry:(id)arg1;

@end

