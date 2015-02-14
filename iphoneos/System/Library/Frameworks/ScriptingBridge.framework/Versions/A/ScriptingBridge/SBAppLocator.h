/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScriptingBridge.framework/Versions/A/ScriptingBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/ScriptingBridge-Structs.h>
#import <ScriptingBridge/NSCoding.h>

@interface SBAppLocator : NSObject <NSCoding> {

	AEDesc* _address;
	char _isCurrentProcess;
	unsigned _launchFlags;

}
-(const AEDesc*)addressWithoutLaunching;
-(void)resetAddress;
-(const AEDesc*)launchWithFlags:(unsigned)arg1 ;
-(id)processInformation;
-(char)isCurrentProcess;
-(id)sdef;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)name;
-(id)bundleIdentifier;
-(char)isRunning;
-(const AEDesc*)address;
@end

