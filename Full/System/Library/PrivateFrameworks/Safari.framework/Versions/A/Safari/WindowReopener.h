/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer;

@interface WindowReopener : NSObject {

	NSTimer* saveWindowsTimer;

}
+(void)reopenWindows;
-(void)_reallySaveWindows;
-(id)arrayOfWindowControllerNamesToReopenAtLaunch;
-(void)saveWindows;
-(void)reopenWithArrayOfWindowControllerNames:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)windowWillClose:(id)arg1 ;
@end

