/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScriptingBridge.framework/Versions/A/ScriptingBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/ScriptingBridge-Structs.h>
#import <ScriptingBridge/SBAppLocator.h>

@class NSString;

@interface SBFilePathAppLocator : SBAppLocator {

	NSString* _filePath;
	char _isApplication;

}
-(const AEDesc*)addressWithoutLaunching;
-(const AEDesc*)launchWithFlags:(unsigned)arg1 ;
-(id)initWithFilePath:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

