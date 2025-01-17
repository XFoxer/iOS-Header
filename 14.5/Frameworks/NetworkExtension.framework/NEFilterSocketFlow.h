//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterFlow.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSString, NSUUID, NWEndpoint;

@interface NEFilterSocketFlow : NEFilterFlow <NSSecureCoding, NSCopying>
{
    long long _generateIdentifierOnce;
    int _socketFamily;
    int _socketType;
    int _socketProtocol;
    NWEndpoint *_remoteEndpoint;
    NSString *_remoteHostname;
    NWEndpoint *_localEndpoint;
    NSUUID *_uuid;
    NSUUID *_euuid;
    unsigned long long _socketID;
    NSUUID *_socketUUID;
}

+ (_Bool)writeMessageWithControlSocket:(int)arg1 drop:(_Bool)arg2 socketID:(unsigned long long)arg3 inboundPassOffset:(unsigned long long)arg4 inboundPeekOffset:(unsigned long long)arg5 outboundPassOffset:(unsigned long long)arg6 outboundPeekOffset:(unsigned long long)arg7 statsReportFrequency:(long long)arg8;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSUUID *socketUUID; // @synthesize socketUUID=_socketUUID;
@property unsigned long long socketID; // @synthesize socketID=_socketID;
@property(copy, nonatomic) NSUUID *euuid; // @synthesize euuid=_euuid;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property int socketProtocol; // @synthesize socketProtocol=_socketProtocol;
@property int socketType; // @synthesize socketType=_socketType;
@property int socketFamily; // @synthesize socketFamily=_socketFamily;
@property(copy) NWEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
@property(copy) NSString *remoteHostname; // @synthesize remoteHostname=_remoteHostname;
@property(copy) NWEndpoint *remoteEndpoint; // @synthesize remoteEndpoint=_remoteEndpoint;
- (void)writeXPCMessage:(id)arg1 drop:(_Bool)arg2 inboundPassOffset:(unsigned long long)arg3 inboundPeekOffset:(unsigned long long)arg4 outboundPassOffset:(unsigned long long)arg5 outboundPeekOffset:(unsigned long long)arg6 statsReportFrequency:(long long)arg7;
- (void)writeCurrentVerdictWithMessage:(id)arg1 controlSocket:(int)arg2;
- (_Bool)createDataCompleteReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;
- (_Bool)createDataReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;
- (_Bool)createNewFlowReply:(id)arg1 controlSocket:(int)arg2 verdict:(id)arg3 context:(id)arg4;
- (id)identifierString;
- (id)identifier;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)setLocalAddress:(struct sockaddr *)arg1;
- (void)setRemoteAddress:(struct sockaddr *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSocketFamily:(int)arg1 socketType:(int)arg2 socketProtocol:(int)arg3 pid:(int)arg4 epid:(int)arg5 uuid:(unsigned char [16])arg6 euuid:(unsigned char [16])arg7 socketID:(unsigned long long)arg8;

@end

