//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DeliveryAccount, ECHTMLStringAndMIMECharset, EMMessageObjectID, MFDeliveryResult, MFMailMessage, MFMutableMessageHeaders, MFPlainTextDocument, MailAccount, NSArray, NSDictionary;

@interface MFMailDelivery : NSObject
{
    id _delegate;
    MFMailMessage *_message;
    MailAccount *_archiveAccount;
    DeliveryAccount *_account;
    MFDeliveryResult *_result;
    MFMutableMessageHeaders *_headers;
    NSDictionary *_compositionSpecification;
    NSArray *_mixedContent;
    _Bool _textPartsAreHTML;
    ECHTMLStringAndMIMECharset *_htmlString;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherStringsAndAttachments;
    unsigned int _threaded:1;
    unsigned int _useCellDataOnly:1;
    _Bool _isUserRequested;
    _Bool _shouldSign;
    _Bool _shouldEncrypt;
    unsigned long long _conversationFlags;
    EMMessageObjectID *_originalMessageObjectID;
    MFMailMessage *_originalMessage;
    long long _action;
}

+ (_Bool)deliverMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
+ (id)newWithMessage:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldEncrypt; // @synthesize shouldEncrypt=_shouldEncrypt;
@property(nonatomic) _Bool shouldSign; // @synthesize shouldSign=_shouldSign;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(retain, nonatomic) MFMailMessage *originalMessage; // @synthesize originalMessage=_originalMessage;
@property(retain, nonatomic) EMMessageObjectID *originalMessageObjectID; // @synthesize originalMessageObjectID=_originalMessageObjectID;
@property(nonatomic) _Bool isUserRequested; // @synthesize isUserRequested=_isUserRequested;
@property(nonatomic) unsigned long long conversationFlags; // @synthesize conversationFlags=_conversationFlags;
@property(retain, nonatomic) NSDictionary *compositionSpecification; // @synthesize compositionSpecification=_compositionSpecification;
- (void)updateOriginalMessageFromHeaders:(id)arg1;
- (void)archive;
- (void)setCellDataOnly:(_Bool)arg1;
- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (id)deliverSynchronously;
- (void)deliverAsynchronously;
- (id)headersForDelivery;
- (id)originalHeaders;
- (id)deliveryResult;
- (long long)deliveryStatus;
- (void)setAccount:(id)arg1;
- (id)account;
- (void)setArchiveAccount:(id)arg1;
- (id)archiveAccount;
@property(nonatomic) __weak id delegate;
- (id)message;
- (id)newMessageWriter;
- (void)dealloc;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
- (id)initWithMessage:(id)arg1;
- (id)init;

@end

