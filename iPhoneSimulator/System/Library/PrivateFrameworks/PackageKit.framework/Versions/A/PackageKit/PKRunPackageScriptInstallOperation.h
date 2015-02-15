/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PKInstallOperation.h>

@class NSString, PKPackageSpecifier;

@interface PKRunPackageScriptInstallOperation : PKInstallOperation {

	NSString* _scriptType;
	PKPackageSpecifier* _currentPackageSpecifier;
	unsigned _original_bootstrap_port;
	unsigned _original_security_session_port;

}
+(id)_sanitizeEnvironment:(id)arg1 ;
-(int)installState;
-(id)currentPackageSpecifier;
-(id)initForScriptType:(id)arg1 request:(id)arg2 sandbox:(id)arg3 analyzer:(id)arg4 ;
-(id)messageTracerDomain;
-(id)messageTracerComment;
-(char)_shouldSkipScriptForPackageSpecifier:(id)arg1 ;
-(void)_switchToUserContext;
-(id)_scriptTaskEnvironmentForPackage:(id)arg1 destination:(id)arg2 scriptName:(id)arg3 ;
-(void)_restoreContext;
-(SEL)_scriptPathSelectorForPackage:(id)arg1 returningScriptName:(id*)arg2 ;
-(int)_runPackageScript:(id)arg1 packageSpecifier:(id)arg2 component:(id)arg3 scriptName:(id)arg4 error:(id*)arg5 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)main;
@end

