//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProgress.h>

__attribute__((visibility("hidden")))
@interface WKDownloadProgress : NSProgress
{
    struct RetainPtr<NSURLSessionDownloadTask> m_task;
    struct WeakPtr<WebKit::Download, WTF::EmptyCounter> m_download;
    RefPtr_585b44c9 m_sandboxExtension;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)unpublish;
- (void)publish;
- (id)initWithDownloadTask:(id)arg1 download:(struct Download *)arg2 URL:(id)arg3 sandboxExtension:(RefPtr_585b44c9)arg4;
- (void)performCancel;

@end

