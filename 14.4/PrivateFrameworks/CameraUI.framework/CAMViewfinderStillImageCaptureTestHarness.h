//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMPerformanceTestHarness.h>

#import <CameraUI/CAMViewfinderActionIntervalometerDelegate-Protocol.h>
#import <CameraUI/CAMViewfinderViewControllerCaptureRequestTestingDelegate-Protocol.h>

@class CAMViewfinderActionIntervalometer, CAMViewfinderViewController, NSCountedSet, NSString;

@interface CAMViewfinderStillImageCaptureTestHarness : CAMPerformanceTestHarness <CAMViewfinderViewControllerCaptureRequestTestingDelegate, CAMViewfinderActionIntervalometerDelegate>
{
    _Bool __performWarmupCapture;
    _Bool __waitingOnWarmupCapture;
    _Bool __intervalometerReachedMaxCount;
    _Bool __capturesOnTouchDown;
    CAMViewfinderActionIntervalometer *_testIntervalometer;
    NSString *__finalRequestPersistenceUUID;
    NSString *__lastReceivedPersistenceUUID;
    long long __mode;
    NSCountedSet *__requestIDs;
    unsigned long long __expectedNumberOfResponsesPerRequest;
    double __delayBetweenCaptures;
    double __lastCaptureCompletionTime;
    CAMViewfinderViewController *__viewfinderViewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool _capturesOnTouchDown; // @synthesize _capturesOnTouchDown=__capturesOnTouchDown;
@property(retain, nonatomic) CAMViewfinderViewController *_viewfinderViewController; // @synthesize _viewfinderViewController=__viewfinderViewController;
@property(nonatomic) _Bool _intervalometerReachedMaxCount; // @synthesize _intervalometerReachedMaxCount=__intervalometerReachedMaxCount;
@property(nonatomic) double _lastCaptureCompletionTime; // @synthesize _lastCaptureCompletionTime=__lastCaptureCompletionTime;
@property(nonatomic) double _delayBetweenCaptures; // @synthesize _delayBetweenCaptures=__delayBetweenCaptures;
@property(nonatomic) unsigned long long _expectedNumberOfResponsesPerRequest; // @synthesize _expectedNumberOfResponsesPerRequest=__expectedNumberOfResponsesPerRequest;
@property(retain, nonatomic) NSCountedSet *_requestIDs; // @synthesize _requestIDs=__requestIDs;
@property(nonatomic) long long _mode; // @synthesize _mode=__mode;
@property(retain, nonatomic) NSString *_lastReceivedPersistenceUUID; // @synthesize _lastReceivedPersistenceUUID=__lastReceivedPersistenceUUID;
@property(retain, nonatomic) NSString *_finalRequestPersistenceUUID; // @synthesize _finalRequestPersistenceUUID=__finalRequestPersistenceUUID;
@property(nonatomic) _Bool _waitingOnWarmupCapture; // @synthesize _waitingOnWarmupCapture=__waitingOnWarmupCapture;
@property(nonatomic) _Bool _performWarmupCapture; // @synthesize _performWarmupCapture=__performWarmupCapture;
@property(retain, nonatomic) CAMViewfinderActionIntervalometer *testIntervalometer; // @synthesize testIntervalometer=_testIntervalometer;
- (_Bool)shouldAttemptAction;
- (_Bool)_allowOverlappingCaptures;
- (void)intervalometerDidReachMaximumCount:(id)arg1;
- (void)viewfinderViewController:(id)arg1 didGenerateCaptureRequest:(id)arg2;
- (void)viewfinderViewController:(id)arg1 didReceiveStillImageRequestDidCompleteCapture:(id)arg2 error:(id)arg3;
- (void)viewfinderViewController:(id)arg1 didReceiveStillImageRequestDidCompleteStillImageCapture:(id)arg2 withResponse:(id)arg3 error:(id)arg4;
- (void)viewfinderViewController:(id)arg1 didReceiveStillImageRequestDidStopCapturingStillImage:(id)arg2;
- (void)failedTestWithReason:(id)arg1;
- (void)stopTesting;
- (void)startTesting;
- (id)initWithTestName:(id)arg1 expectedNumberOfCapturesPerRequest:(unsigned long long)arg2 viewfinderViewController:(id)arg3 performingWarmupCapture:(_Bool)arg4 forCaptureMode:(long long)arg5 delayBetweenCaptures:(double)arg6 capturesOnTouchDown:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

