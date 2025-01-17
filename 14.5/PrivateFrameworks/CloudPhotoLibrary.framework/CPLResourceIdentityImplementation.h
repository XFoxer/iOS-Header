//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLResourceIdentity.h>

@interface CPLResourceIdentityImplementation : CPLResourceIdentity
{
}

+ (id)identityForStorageName:(id)arg1;
+ (id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id *)arg3;
+ (id)extensionForFileUTI:(id)arg1;
+ (id)fileUTIForExtension:(id)arg1;
+ (id)identityFromStoredIdentity:(id)arg1;
+ (id)zeroByteFileFingerPrint;
+ (_Bool)isValidMMCSV2Signature:(id)arg1;
+ (id)fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)fingerPrintForData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)fingerPrintForFileAtURL:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)_fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (void)setMMCImplementationForPlatform:(id)arg1;
- (id)identityForStorage;

@end

