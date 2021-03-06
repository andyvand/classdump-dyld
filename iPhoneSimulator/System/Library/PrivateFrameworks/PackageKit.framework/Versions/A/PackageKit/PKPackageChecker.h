/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, PKPackageInfo, NSDictionary, NSMutableArray, NSArray;

@interface PKPackageChecker : NSObject {

	NSString* _contentPath;
	PKPackageInfo* _packageInfo;
	NSDictionary* _componentMap;
	NSMutableArray* _checkResults;
	NSArray* _checkedAttrs;

}

@property (copy) NSArray * checkedFileAttributes;              //@synthesize checkedAttrs=_checkedAttrs - In the implementation block
+(id)_defaultCheckedFileAttributes;
+(id)stringForCheckErrorCode:(int)arg1 ;
-(void)setCheckedFileAttributes:(NSArray *)arg1 ;
-(char)_shouldValidatePayload;
-(void)_checkPayloadAgainstBom;
-(void)_checkPayloadAgainstPackageInfo:(id)arg1 ;
-(void)_checkScriptsAgainstPackageInfo:(id)arg1 ;
-(NSArray *)checkedFileAttributes;
-(void)_searchForComponentsInDirectory:(id)arg1 addTo:(id)arg2 ;
-(id)_displayStringForBundleVersion:(id)arg1 ;
-(void)_checkBundle:(id)arg1 againstVersion:(id)arg2 usingDisplayPath:(id)arg3 ;
-(char)_isValidScriptAtPath:(id)arg1 error:(id*)arg2 ;
-(id)initWithUnarchivedPackage:(id)arg1 error:(id*)arg2 ;
-(id)checkResults;
-(void)dealloc;
@end

