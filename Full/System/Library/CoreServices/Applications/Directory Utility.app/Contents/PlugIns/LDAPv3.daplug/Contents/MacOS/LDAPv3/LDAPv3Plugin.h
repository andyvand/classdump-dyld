/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Directory Utility.app/Contents/PlugIns/LDAPv3.daplug/Contents/MacOS/LDAPv3
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LDAPv3/DirectoryUtilityPlugin.h>

@class PluginAPIImplementor, LDAPv3Panel;

@interface LDAPv3Plugin : NSObject <DirectoryUtilityPlugin> {

	PluginAPIImplementor* mAPIImplementor;
	LDAPv3Panel* mLDAPv3Panel;

}
-(char)selfTest;
-(void)setPluginAPIImplementor:(id)arg1 ;
-(void)configureButtonClicked:(id)arg1 ;
-(id)init;
@end

