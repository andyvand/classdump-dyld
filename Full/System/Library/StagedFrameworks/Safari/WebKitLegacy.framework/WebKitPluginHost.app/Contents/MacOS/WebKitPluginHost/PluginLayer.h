/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:47:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/StagedFrameworks/Safari/WebKitLegacy.framework/WebKitPluginHost.app/Contents/MacOS/WebKitPluginHost
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WebKitPluginHost/WebKitPluginHost-Structs.h>
#import <QuartzCore/CALayer.h>

@interface PluginLayer : CALayer {

	PluginInstance* _instance;

}
-(id)initWithPluginInstance:(PluginInstance*)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)actionForKey:(id)arg1 ;
@end
