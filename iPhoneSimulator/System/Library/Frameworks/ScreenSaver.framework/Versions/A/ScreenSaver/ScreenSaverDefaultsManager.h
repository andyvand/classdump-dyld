/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ScreenSaverDefaultsManager : NSObject {

	NSMutableDictionary* _cache;

}
+(id)defaultsManager;
-(id)defaultsForKey:(id)arg1 ;
-(void)setDefaults:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)synchronize;
-(void)_appWillTerminate:(id)arg1 ;
@end

