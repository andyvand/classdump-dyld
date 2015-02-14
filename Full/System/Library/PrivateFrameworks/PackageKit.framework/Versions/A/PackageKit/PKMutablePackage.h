/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PKPackage.h>

@class NSArray, NSString;

@interface PKMutablePackage : PKPackage {

	NSArray* _onDiskComponents;
	NSString* _payloadRoot;
	NSString* _baselinePayloadRoot;
	NSString* _scriptRoot;
	NSArray* _maskExpressions;
	/*^block*/id _ownershipModifier;
	/*^block*/id _baselineNameMapper;

}
-(void)setPayloadRoot:(id)arg1 ;
-(void)setBaselinePayloadRoot:(id)arg1 ;
-(void)setMapBaselineNamesUsingBlock:(/*^block*/id)arg1 ;
-(void)setScriptRoot:(id)arg1 ;
-(void)setMaskExpressions:(id)arg1 ;
-(void)setModifyOwnershipUsingBlock:(/*^block*/id)arg1 ;
-(char)_writeToArchive:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(id)_componentMap;
-(id)initWithPackageInfo:(id)arg1 ;
-(id)initWithPackageInfo:(id)arg1 ofType:(id)arg2 ;
-(char)writeToArchive:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)setComponents:(id)arg1 ;
@end

