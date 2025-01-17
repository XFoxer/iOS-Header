//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSCEWrappedRangeRef;

@interface TSCEAnyReference : NSObject
{
    struct TSCEAnyRef _ref;
    NSString *_overrideText;
    NSString *_overrideTextAsTyped;
    struct TSUPreserveFlags _preserveFlags;
    _Bool _wasConstructedViaNames;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct TSUPreserveFlags preserveFlags; // @synthesize preserveFlags=_preserveFlags;
@property(nonatomic) _Bool wasConstructedViaNames; // @synthesize wasConstructedViaNames=_wasConstructedViaNames;
@property(copy) NSString *overrideTextAsTyped; // @synthesize overrideTextAsTyped=_overrideTextAsTyped;
@property(copy) NSString *overrideText; // @synthesize overrideText=_overrideText;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 preserveFlags:(struct TSUPreserveFlags)arg3 inputString:(id)arg4 inputStringIsComplete:(_Bool)arg5;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2 preserveFlags:(struct TSUPreserveFlags)arg3 inputString:(id)arg4 inputStringIsComplete:(_Bool)arg5;
- (id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)arg1 partial:(_Bool)arg2;
- (id)referenceTextWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2;
- (id)referenceTextWithCalculationEngine:(id)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2;
@property(readonly, nonatomic) UUIDData_5fbc143e tableUID;
@property(readonly, nonatomic) TSCEWrappedRangeRef *rangeReference;
@property(readonly, nonatomic) struct TSCERangeRef rangeRef;
@property(readonly, nonatomic) struct TSCEAnyRef anyRef;
- (id)initWithCellRef:(const struct TSCECellRef *)arg1;
- (id)initWithRangeRef:(const struct TSCERangeRef *)arg1;

@end

