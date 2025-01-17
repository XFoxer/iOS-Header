//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString, NSURLRequest, NSURLResponse, PARTask;

@interface PARReply : NSObject <NSSecureCoding>
{
    NSArray *_rawResponse;
    NSURLRequest *_httpRequest;
    NSURLResponse *_httpResponse;
    NSData *_data;
    PARTask *_task;
    double _scale;
    NSString *_geoSessionEntityString;
    NSArray *_localSuggestions;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *localSuggestions; // @synthesize localSuggestions=_localSuggestions;
@property(copy, nonatomic) NSString *geoSessionEntityString; // @synthesize geoSessionEntityString=_geoSessionEntityString;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) __weak PARTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(retain, nonatomic) NSURLRequest *httpRequest; // @synthesize httpRequest=_httpRequest;
@property(retain, nonatomic) NSArray *rawResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

