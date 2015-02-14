/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PackageKit-Structs.h>
#import <PackageKit/PKPackage.h>

@class NSBundle;

@interface PKJaguarPackage : PKPackage {

	NSBundle* _bundle;

}
+(id)_payloadForPackagePath:(id)arg1 ;
+(char)_isArchiveSupported:(id)arg1 ;
+(char)canInitWithURL:(id)arg1 ;
-(id)_scriptsDirectory;
-(id)_parseHintsFile:(id)arg1 ;
-(id)_resourceRelativePathForScript:(id)arg1 ;
-(id)_preflightScriptPath;
-(id)_postflightScriptPath;
-(id)_preupgradeScriptPath;
-(id)_postupgradeScriptPath;
-(id)BOMData;
-(id)restrictedRootManifestData;
-(id)payloadExtractorWithDestination:(id)arg1 externalRoot:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
@end

