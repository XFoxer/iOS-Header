//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSBluetoothDeviceInfo : NSObject
{
    _Bool _supportDoAP;
    _Bool _isTemporaryPairedNotInContacts;
    NSString *_address;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTemporaryPairedNotInContacts; // @synthesize isTemporaryPairedNotInContacts=_isTemporaryPairedNotInContacts;
@property(nonatomic) _Bool supportDoAP; // @synthesize supportDoAP=_supportDoAP;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;

@end

