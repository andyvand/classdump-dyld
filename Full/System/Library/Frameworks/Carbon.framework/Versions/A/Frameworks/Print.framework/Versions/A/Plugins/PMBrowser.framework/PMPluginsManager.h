/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Print.framework/Versions/A/Plugins/PMBrowser.framework/PMBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSBundle, NSDictionary;

@interface PMPluginsManager : NSObject {

	NSBundle* _bundle;
	NSDictionary* _plugins;

}
+(id)browserName:(Class)arg1 ;
+(id)browserIcon:(Class)arg1 ;
+(id)browserIdentifier:(Class)arg1 ;
+(id)defaultManager;
-(id)findPluginsInPath:(id)arg1 ;
-(id)browserWithIdentifier:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(void)setPlugins:(id)arg1 ;
-(id)plugins;
-(id)bundle;
-(void)dealloc;
@end
