/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Directory Utility.app/Contents/PlugIns/Active Directory.daplug/Contents/MacOS/Active Directory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Active Directory/DirectoryUtilityPlugin.h>

@class PluginAPIImplementor, ADSv1Panel;

@interface ADSPlugin : NSObject <DirectoryUtilityPlugin> {

	PluginAPIImplementor* mAPIImplementor;
	ADSv1Panel* mADSPanel;

}
-(void)setPluginAPIImplementor:(id)arg1 ;
-(char)shouldAllowNodeNameOnSearchPolicy:(id)arg1 ;
-(void)configureButtonClicked:(id)arg1 ;
-(id)init;
@end

