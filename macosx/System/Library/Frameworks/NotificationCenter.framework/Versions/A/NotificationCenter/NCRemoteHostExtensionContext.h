/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libextension.dylib/NSExtensionContext.h>
#import <NotificationCenter/NCPlugInHostProtocol.h>

@class NCRemotePlugIn, NSString;

@interface NCRemoteHostExtensionContext : NSExtensionContext <NCPlugInHostProtocol> {

	NCRemotePlugIn* _plugin;

}

@property (__weak) NCRemotePlugIn * plugin;                         //@synthesize plugin=_plugin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setPlugin:(NCRemotePlugIn *)arg1 ;
-(NCRemotePlugIn *)plugin;
-(void)pluginEditModeChanged:(long long)arg1 ;
-(void)pluginSnapshotData:(id)arg1 scale:(double)arg2 result:(unsigned long long)arg3 ;
-(void)pluginHasContentChanged:(char)arg1 ;
-(void)pluginRequestHeightChange:(double)arg1 updateNumber:(unsigned long long)arg2 fencePort:(id)arg3 ;
@end

