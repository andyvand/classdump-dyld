/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Internet Plug-Ins/Unity Web Player.plugin/Contents/MacOS/Unity Web Player
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Unity Web Player/Unity Web Player-Structs.h>
@class NSMenu;

@interface MenuHandler : NSObject {

	PluginInstance* m_Plugin;
	NSMenu* m_Menu;
	NPP* m_Instance;
	UnityLoader* m_Loader;

}
-(void)_setDevelopmentPlayer:(id)arg1 ;
-(id)initWithPlugin:(PluginInstance*)arg1 instance:(NPP*)arg2 loader:(UnityLoader*)arg3 ;
-(void)_fullscreen:(id)arg1 ;
-(void)_setChannel:(id)arg1 ;
-(void)_about:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)refresh;
-(void)_setup:(id)arg1 ;
@end
