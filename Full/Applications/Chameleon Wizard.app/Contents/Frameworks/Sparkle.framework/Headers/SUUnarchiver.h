/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Chameleon Wizard.app/Contents/Frameworks/Sparkle.framework/Sparkle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SUUnarchiver : NSObject {

	id delegate;
	NSString* archivePath;

}
+(void)_registerImplementation:(Class)arg1 ;
+(id)_unarchiverImplementations;
+(char)_canUnarchivePath:(id)arg1 ;
+(id)unarchiverForPath:(id)arg1 ;
-(void)_notifyDelegateOfSuccess;
-(void)_notifyDelegateOfExtractedLength:(long long)arg1 ;
-(void)_notifyDelegateOfFailure;
-(void)dealloc;
-(id)_initWithPath:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)start;
-(id)description;
@end

