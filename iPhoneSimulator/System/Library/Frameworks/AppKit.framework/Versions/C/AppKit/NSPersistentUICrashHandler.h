/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL;

@interface NSPersistentUICrashHandler : NSObject {

	NSURL* restorationCountFileURL;
	int crashBlameCounter;

}
-(void)dealloc;
-(void)clearCrashCountFileIfNecessary;
-(id)initWithRestorationCountFileURL:(id)arg1 ;
-(unsigned)modifyCrashBlameCounterBy:(int)arg1 ;
-(long long)crashBlameCounter;
-(void)inspectCrashDataWithModification:(char)arg1 handler:(/*^block*/id)arg2 ;
@end

