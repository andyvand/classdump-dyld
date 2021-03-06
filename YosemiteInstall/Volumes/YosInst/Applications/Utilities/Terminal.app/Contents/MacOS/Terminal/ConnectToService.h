/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:01:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Applications/Utilities/Terminal.app/Contents/MacOS/Terminal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface ConnectToService : NSObject {

	NSString* _userVisibleName;
	NSString* _bonjourName;
	NSArray* _commandOptions;
	char _acceptsUsername;
	char _builtIn;
	NSString* _portLocation;

}
+(id)serviceWithDictionary:(id)arg1 ;
-(char)builtIn;
-(id)initWithName:(id)arg1 commandOptions:(id)arg2 bonjourName:(id)arg3 usesUser:(char)arg4 portLocation:(id)arg5 builtIn:(char)arg6 ;
-(id)portLocation;
-(char)acceptsUsername;
-(id)bonjourName;
-(id)userVisibleName;
-(void)dealloc;
-(id)options;
-(id)dictionaryDescription;
@end

