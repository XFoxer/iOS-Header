//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSPRegistry : NSObject
{
    struct unordered_map<unsigned int, const google::protobuf::Message *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, const google::protobuf::Message *>>> _messageTypeToPrototypeMap;
    struct unordered_map<const google::protobuf::Descriptor *, unsigned int, TSP::DescriptorHash, std::__1::equal_to<const google::protobuf::Descriptor *>, std::__1::allocator<std::__1::pair<const google::protobuf::Descriptor *const, unsigned int>>> _descriptorToMessageTypeMap;
    struct unordered_map<unsigned int, const char *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, const char *>>> _messageTypeToClassnameMap;
    struct unordered_map<const char *, unsigned int, TSP::CStringHash, TSP::CStringEqualTo, std::__1::allocator<std::__1::pair<const char *const, unsigned int>>> _classnameToMessageTypeMap;
    struct unordered_map<unsigned int, __unsafe_unretained Class, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, __unsafe_unretained Class>>> _messageTypeToClassMap;
}

+ (void)setInitializationHandler:(CDUnknownBlockType)arg1;
+ (id)sharedRegistry;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)setDeprecatedMessageType:(unsigned int)arg1;
- (void)setOverrideMessageType:(unsigned int)arg1 messagePrototype:(const struct Message *)arg2 descriptor:(const struct Descriptor *)arg3;
- (void)setUpgradeMessageType:(unsigned int)arg1 messagePrototype:(const struct Message *)arg2 unarchiveClass:(Class)arg3 unarchiveClassname:(const char *)arg4;
- (void)setUpgradeMessageType:(unsigned int)arg1 messagePrototype:(const struct Message *)arg2 unarchiveClassname:(const char *)arg3;
- (void)setOverrideMessageType:(unsigned int)arg1 messagePrototype:(const struct Message *)arg2 descriptor:(const struct Descriptor *)arg3 unarchiveClassname:(const char *)arg4;
- (void)setMessageType:(unsigned int)arg1 messagePrototype:(const struct Message *)arg2 descriptor:(const struct Descriptor *)arg3 unarchiveClassname:(const char *)arg4;
- (void)resetForMessageType:(unsigned int)arg1 descriptor:(const struct Descriptor *)arg2;
- (void)setMessageType:(unsigned int)arg1 forUnarchiveClassname:(const char *)arg2;
- (unsigned int)messageTypeForUnarchiveClassname:(const char *)arg1;
- (Class)unarchiveClassForMessageType:(unsigned int)arg1;
- (unsigned int)messageTypeForDescriptor:(const struct Descriptor *)arg1;
- (const struct Message *)messagePrototypeForMessageType:(unsigned int)arg1;
- (void)registerPersistenceMessages;
- (void)dealloc;
- (id)init;

@end

