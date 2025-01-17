//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSMutableCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface WBSFormControlMetadata : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSString *_addressBookLabel;
    NSString *_associatedUsername;
    NSString *_fieldClass;
    NSString *_fieldID;
    NSString *_fieldName;
    NSString *_tagName;
    NSString *_uniqueID;
    NSString *_nextControlUniqueID;
    NSString *_placeholder;
    NSString *_value;
    NSString *_passwordRules;
    NSDictionary *_radioButtonInfo;
    NSDictionary *_annotations;
    NSArray *_selectElementInfo;
    NSArray *_autocompleteTokens;
    NSArray *_ancestorFrameURLs;
    double _rectLeft;
    double _rectTop;
    double _rectWidth;
    double _rectHeight;
    CDUnion_a3b3b741 _flags;
    int _size;
    int _maxLength;
    int _minLength;
    int _selectionStart;
    int _selectionLength;
    int _autoFillButtonType;
    int _lastAutoFillButtonType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *ancestorFrameURLs; // @synthesize ancestorFrameURLs=_ancestorFrameURLs;
@property(readonly, nonatomic) double rectHeight; // @synthesize rectHeight=_rectHeight;
@property(readonly, nonatomic) double rectWidth; // @synthesize rectWidth=_rectWidth;
@property(readonly, nonatomic) double rectTop; // @synthesize rectTop=_rectTop;
@property(readonly, nonatomic) double rectLeft; // @synthesize rectLeft=_rectLeft;
@property(readonly, copy, nonatomic) NSArray *selectElementInfo; // @synthesize selectElementInfo=_selectElementInfo;
@property(readonly, copy, nonatomic) NSDictionary *radioButtonInfo; // @synthesize radioButtonInfo=_radioButtonInfo;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, copy, nonatomic) NSString *nextControlUniqueID; // @synthesize nextControlUniqueID=_nextControlUniqueID;
@property(readonly, copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(readonly, copy, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(readonly, copy, nonatomic) NSString *fieldID; // @synthesize fieldID=_fieldID;
@property(readonly, copy, nonatomic) NSString *fieldClass; // @synthesize fieldClass=_fieldClass;
@property(readonly, copy, nonatomic) NSString *passwordRules; // @synthesize passwordRules=_passwordRules;
@property(readonly, copy, nonatomic) NSString *associatedUsername; // @synthesize associatedUsername=_associatedUsername;
@property(readonly, copy, nonatomic) NSArray *autocompleteTokens; // @synthesize autocompleteTokens=_autocompleteTokens;
@property(readonly, copy, nonatomic) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property(readonly, copy, nonatomic) NSString *addressBookLabel; // @synthesize addressBookLabel=_addressBookLabel;
@property(readonly, nonatomic) long long lastAutoFillButtonType;
@property(readonly, nonatomic) long long autoFillButtonType;
@property(readonly, nonatomic) unsigned long long selectionLength;
@property(readonly, nonatomic) unsigned long long selectionStart;
@property(readonly, nonatomic) unsigned long long minLength;
@property(readonly, nonatomic) unsigned long long maxLength;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic, getter=isLabeledUsernameField) _Bool labeledUsernameField;
@property(readonly, nonatomic, getter=isUserEditedTextField) _Bool userEditedTextField;
@property(readonly, nonatomic, getter=isAutoFilledTextField) _Bool autoFilledTextField;
@property(readonly, nonatomic, getter=isSecureTextField) _Bool secureTextField;
@property(readonly, nonatomic, getter=isTextField) _Bool textField;
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
@property(readonly, nonatomic, getter=isDisabled) _Bool disabled;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, nonatomic) _Bool looksLikeOneTimeCodeField;
@property(readonly, nonatomic) _Bool looksLikePasswordCredentialField;
@property(readonly, nonatomic) _Bool looksLikeIgnoredDataTypeField;
@property(readonly, nonatomic) _Bool looksLikeYearField;
@property(readonly, nonatomic) _Bool looksLikeMonthField;
@property(readonly, nonatomic) _Bool looksLikeDayField;
@property(readonly, nonatomic) _Bool looksLikeCreditCardTypeField;
@property(readonly, nonatomic) _Bool looksLikeCreditCardSecurityCodeField;
@property(readonly, nonatomic) _Bool looksLikeCreditCardNumberField;
@property(readonly, nonatomic) _Bool looksLikeCreditCardCompositeExpirationDateField;
@property(readonly, nonatomic) _Bool looksLikeCreditCardCardholderField;
@property(readonly, nonatomic) _Bool claimsToBeUsernameViaAutocompleteAttribute;
@property(readonly, nonatomic) _Bool claimsToBeNewPasswordViaAutocompleteAttribute;
@property(readonly, nonatomic) _Bool claimsToBeCurrentPasswordViaAutocompleteAttribute;
@property(readonly, nonatomic) _Bool disallowsAutocomplete;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

