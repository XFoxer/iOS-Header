//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageLegacy/MFWebAttachmentSource.h>

@class MFAttachmentManager, MFLock, MFMimeBody, MFMimePart, NSData, NSMutableDictionary, NSURL;

@interface MFWebMessageDocument : MFWebAttachmentSource
{
    unsigned int _uniqueId;
    NSURL *_baseURL;
    MFMimeBody *_mimeBody;
    MFMimePart *_htmlPart;
    NSData *_htmlData;
    MFLock *_lock;
    NSMutableDictionary *_partsByURL;
    NSMutableDictionary *_partsByFilename;
    unsigned int _preferredEncoding;
    _Bool _visuallyEmpty;
    MFAttachmentManager *_attachmentManager;
}

@property(retain, nonatomic) MFAttachmentManager *attachmentManager; // @synthesize attachmentManager=_attachmentManager;
@property(getter=isVisuallyEmpty) _Bool visuallyEmpty; // @synthesize visuallyEmpty=_visuallyEmpty;
@property unsigned int preferredEncoding; // @synthesize preferredEncoding=_preferredEncoding;
@property(readonly) NSData *htmlData; // @synthesize htmlData=_htmlData;
@property(readonly) MFMimePart *mimePart; // @synthesize mimePart=_htmlPart;
@property(readonly) MFMimeBody *mimeBody; // @synthesize mimeBody=_mimeBody;
@property(readonly) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (id)fileWrapper;
- (id)preferredCharacterSet;
- (id)attachmentsInDocument;
- (id)attachmentForURL:(id)arg1;
- (id)mimePartForURL:(id)arg1;
- (void)dealloc;
- (id)initWithMimePart:(id)arg1 htmlData:(id)arg2 encoding:(unsigned int)arg3;
- (id)initWithMimePart:(id)arg1;
- (id)_initWithMimePart:(id)arg1 htmlData:(id)arg2;
- (id)initWithMimeBody:(id)arg1;
- (id)init;

@end

