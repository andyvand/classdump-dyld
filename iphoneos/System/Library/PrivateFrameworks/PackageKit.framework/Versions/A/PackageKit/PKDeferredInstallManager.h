/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PKDeferredInstallManager : NSObject {

	NSString* _destinationPath;
	NSString* _rootPath;
	NSString* _scriptPath;

}
-(id)initWithDestinationPath:(id)arg1 error:(id*)arg2 ;
-(id)rootPath;
-(char)addScriptAtPath:(id)arg1 error:(id*)arg2 ;
-(char)prepareWithDeferredFileList:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

