/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, PKDistribution, NSMutableArray, NSArray;

@interface PKProductChecker : NSObject {

	NSString* _contentPath;
	NSString* _interfaceType;
	PKDistribution* _distribution;
	NSMutableArray* _checkResults;
	char _allowExternalPackages;
	char _interfaceTypeRequired;
	NSArray* _checkedFileAttributes;

}

@property (assign) char allowExternalPackages;                 //@synthesize allowExternalPackages=_allowExternalPackages - In the implementation block
@property (assign) char interfaceTypeRequired;                 //@synthesize interfaceTypeRequired=_interfaceTypeRequired - In the implementation block
@property (copy) NSArray * checkedFileAttributes;              //@synthesize checkedFileAttributes=_checkedFileAttributes - In the implementation block
+(id)stringForCheckErrorCode:(int)arg1 ;
-(void)setCheckedFileAttributes:(NSArray *)arg1 ;
-(NSArray *)checkedFileAttributes;
-(id)checkResults;
-(void)_checkPackagesForChoice:(id)arg1 ;
-(char)allowExternalPackages;
-(id)initWithUnarchivedProduct:(id)arg1 interfaceType:(id)arg2 error:(id*)arg3 ;
-(void)setAllowExternalPackages:(char)arg1 ;
-(char)interfaceTypeRequired;
-(void)setInterfaceTypeRequired:(char)arg1 ;
-(void)dealloc;
@end
