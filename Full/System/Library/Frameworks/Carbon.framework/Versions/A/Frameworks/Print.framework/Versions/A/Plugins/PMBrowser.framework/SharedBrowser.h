/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Print.framework/Versions/A/Plugins/PMBrowser.framework/PMBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PMBrowser/PMBrowser-Structs.h>
#import <PMBrowser/PMBrowserNoUIPlugin.h>

@class NSMutableDictionary;

@interface SharedBrowser : PMBrowserNoUIPlugin {

	int _serverNotifyFD;
	int _serverNotifyToken;
	int _cupsOptions;
	NSMutableDictionary* _printers;
	CFSocketRef _socket;
	CFRunLoopSourceRef _source;

}
+(id)instantiatePlugin;
-(void)setPrinters:(id)arg1 ;
-(int)cupsOptions;
-(id)printers;
-(void)printerListUpdated:(id)arg1 ;
-(int)serverNotifyFD;
-(void)setCUPSOptions:(int)arg1 ;
-(void)startBrowsing;
-(void)stopBrowsing;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end
