//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NaturalLanguage/NLDataSet.h>

@class NLDataProvider;

__attribute__((visibility("hidden")))
@interface NLModelTrainingDataSet : NLDataSet
{
    NLDataProvider *_modelTrainingDataProvider;
    NLDataProvider *_modelValidationDataProvider;
}

- (void).cxx_destruct;
- (id)dataProviderOfType:(long long)arg1;
- (id)initWithConfiguration:(id)arg1 numberOfTrainingInstances:(unsigned long long)arg2 numberOfValidationInstances:(unsigned long long)arg3 trainingDataSource:(void *)arg4 validationDataSource:(void *)arg5 instanceDataProvider:(CDUnknownBlockType)arg6;

@end

