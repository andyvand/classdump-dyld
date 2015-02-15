/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Frameworks/ITunesSoftwareService.framework/ITunesSoftwareService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITunesSoftwareService/ITunesSoftwareServiceValidationConfiguration.h>

@protocol ITunesSoftwareServiceValidationConfiguration <ITunesPurpleSoftwareValidationConfiguration,ITunesFirenzeSoftwareValidationConfiguration>
@end


@class NSArray, NSString;

@interface ITunesSoftwareServiceValidationConfiguration : NSObject <ITunesSoftwareServiceValidationConfiguration> {

	char _serverSideVerification;
	char _validateZip;
	char _validateIcon;
	char _validatePayload;
	char _validateIconSize;
	char _validateBundleResource;
	char _validateDeviceFamily;
	char _validateCodeResources;
	char _requireDeviceFamily;
	char _validateFatArchitecturesBasedOnMinimumOSVersion;
	char _validateSupportedArchitectures;
	char _validateRequiredArchitectures;
	char _validateCodesignEntitlements;
	char _validateSymlinkExists;
	char _validateSymlinkResolvesLocally;
	char _validatePurpleSPIUsage;
	NSArray* _supportedArchitectures;
	NSArray* _deviceFamilyOverrides;
	NSArray* _disallowedPaths;
	NSArray* _filesToSendOverride;
	NSString* _metadataTemplate;
	char _validateProductSignature;
	char _validateProductErrors;
	char _validateProductMetadataServerSide;
	char _validateProductSymlinkExists;
	char _validateProductSymlinkResolvesLocally;
	char _validateProductArchitectures;
	char _validateProductBundleArchitectures;
	char _validateProductSupportedArchitectures;
	char _validateProductRequiredArchitectures;
	char _validateFirenzeSPIUsage;
	NSString* _productMetadataTemplate;
	NSArray* _supportedProductArchitectures;
	NSArray* _productFilesToSendOverride;

}
+(id)configurationToDictionary:(id)arg1 ;
+(id)dictionaryToConfiguration:(id)arg1 ;
+(id)publicPurpleConfigurationKeys;
+(id)publicFirenzeConfigurationKeys;
+(id)publicConfigurationKeys;
+(id)defaultConfigurationValueForNilKey:(id)arg1 ;
+(id)convertSizesToRanges:(id)arg1 ;
-(id)supportedArchitectures;
-(void)setSupportedArchitectures:(id)arg1 ;
-(id)metadataTemplate;
-(char)validateProductSymlinkExists;
-(void)setValidateSymlinkExists:(char)arg1 ;
-(char)validateProductSymlinkResolvesLocally;
-(void)setValidateSymlinkResolvesLocally:(char)arg1 ;
-(char)validateProductArchitectures;
-(char)validateProductBundleArchitectures;
-(char)validateProductSupportedArchitectures;
-(char)validateProductRequiredArchitectures;
-(id)supportedProductArchitectures;
-(id)productFilesToSendOverride;
-(char)validateProductSignature;
-(void)setValidateProductSignature:(char)arg1 ;
-(char)validateProductErrors;
-(void)setValidateProductErrors:(char)arg1 ;
-(void)setProductFilesToSendOverride:(id)arg1 ;
-(char)validateZip;
-(char)validateIcon;
-(char)validatePayload;
-(char)validateIconSize;
-(char)validateBundleResource;
-(char)validateDeviceFamily;
-(char)requireDeviceFamily;
-(char)validateCodeResources;
-(char)serverSideVerification;
-(char)validateFatArchitecturesBasedOnMinimumOSVersion;
-(char)validateSupportedArchitectures;
-(char)validateRequiredArchitectures;
-(char)validateCodesignEntitlements;
-(char)validateSymlinkExists;
-(char)validateSymlinkResolvesLocally;
-(char)validatePurpleSPIUsage;
-(id)deviceFamilyOverrides;
-(id)disallowedPaths;
-(id)filesToSendOverride;
-(char)validateProductMetadataServerSide;
-(char)validateFirenzeSPIUsage;
-(id)productMetadataTemplate;
-(void)setServerSideVerification:(char)arg1 ;
-(void)setValidateZip:(char)arg1 ;
-(void)setValidateIcon:(char)arg1 ;
-(void)setValidatePayload:(char)arg1 ;
-(void)setValidateIconSize:(char)arg1 ;
-(void)setValidateBundleResource:(char)arg1 ;
-(void)setValidateDeviceFamily:(char)arg1 ;
-(void)setRequireDeviceFamily:(char)arg1 ;
-(void)setValidateCodeResources:(char)arg1 ;
-(void)setValidateFatArchitecturesBasedOnMinimumOSVersion:(char)arg1 ;
-(void)setValidateSupportedArchitectures:(char)arg1 ;
-(void)setValidateRequiredArchitectures:(char)arg1 ;
-(void)setValidateCodesignEntitlements:(char)arg1 ;
-(void)setValidatePurpleSPIUsage:(char)arg1 ;
-(void)setDeviceFamilyOverrides:(id)arg1 ;
-(void)setDisallowedPaths:(id)arg1 ;
-(void)setFilesToSendOverride:(id)arg1 ;
-(void)setMetadataTemplate:(id)arg1 ;
-(void)setValidateProductMetadataServerSide:(char)arg1 ;
-(void)setValidateProductSymlinkExists:(char)arg1 ;
-(void)setValidateProductSymlinkResolvesLocally:(char)arg1 ;
-(void)setValidateProductArchitectures:(char)arg1 ;
-(void)setValidateProductBundleArchitectures:(char)arg1 ;
-(void)setValidateProductSupportedArchitectures:(char)arg1 ;
-(void)setValidateProductRequiredArchitectures:(char)arg1 ;
-(void)setValidateFirenzeSPIUsage:(char)arg1 ;
-(void)setSupportedProductArchitectures:(id)arg1 ;
-(void)setProductMetadataTemplate:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
