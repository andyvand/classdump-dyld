/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface SUAssetSupport : NSObject
+(id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)arg1 ;
+(id)tryCreateDocumentationFromDocumentationAsset:(id)arg1 ;
+(void)_cleanupAllAssetsOfType:(id)arg1 ;
+(id)getLocalDefaultSoftwareUpdateAssetIfExists;
+(id)findAssetWithMatcher:(id)arg1 localSearch:(BOOL)arg2 error:(id*)arg3 ;
+(id)defaultAssetDownloadOptionsWithPriority:(int)arg1 ;
+(id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)arg1 ;
+(void)cleanupAllSoftwareUpdateAssets;
+(void)cleanupAllSoftwareUpdateAndRelatedAssets;
+(id)assetDownloadOptionsForDocumentation;
+(id)assetDownloadOptionsFromMetadata:(id)arg1 priority:(int)arg2 ;
@end
