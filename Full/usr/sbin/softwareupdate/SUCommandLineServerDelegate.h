/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/softwareupdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <softwareupdate/SUCommandLineToolStatusDelegate.h>

@class NSMutableDictionary, NSString;

@interface SUCommandLineServerDelegate : NSObject <SUCommandLineToolStatusDelegate> {

	unsigned long long _lastState;
	NSMutableDictionary* _lastStateByKey;
	NSString* _plistPath;
	NSMutableDictionary* _plist;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOutputPath:(id)arg1 ;
-(void)softwareUpdateToolDidBegin:(id)arg1 ;
-(void)softwareUpdateToolDidFailToAuthorize:(id)arg1 ;
-(void)softwareUpdateToolDidStartRefresh:(id)arg1 ;
-(void)softwareUpdateTool:(id)arg1 didFindUpdates:(id)arg2 displayResults:(char)arg3 error:(id)arg4 ;
-(void)softwareUpdateTool:(id)arg1 didFindNoUpdatesToInstallWithUnknownLabels:(id)arg2 ;
-(void)softwareUpdateTool:(id)arg1 didFindInsufficientDiskSpace:(unsigned long long)arg2 ;
-(void)softwareUpdateTool:(id)arg1 didChangeStatus:(id)arg2 byProductKey:(id)arg3 isDone:(char)arg4 ;
-(void)_updateServerPlist;
-(id)_productDictionary:(id)arg1 withSize:(unsigned long long)arg2 ;
-(void)_setPhase:(id)arg1 forProductWithKey:(id)arg2 ;
-(void)dealloc;
@end

