/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:35:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/AirPort Utility.app/Contents/MacOS/AirPort Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSDictionary, NSWindow;

@interface AirPortAssistantController : NSWindowController {

	id _delegate;
	id _viewController;
	NSDictionary* _removedBaseStation;
	NSWindow* _hostWindow;

}

@property (assign,nonatomic) id<AirPortAssistantControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) id viewController;                                                      //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSDictionary * removedBaseStation;                            //@synthesize removedBaseStation=_removedBaseStation - In the implementation block
@property (retain) NSWindow * hostWindow;                                                  //@synthesize hostWindow=_hostWindow - In the implementation block
+(id)controllerWithParameters:(id)arg1 delegate:(id)arg2 ;
+(char)isUnconfiguredBaseStation:(id)arg1 productID:(char*)arg2 ;
+(char)isUnconfiguredDevice:(id)arg1 ;
+(id)unconfiguredDeviceName:(id)arg1 ;
+(id)uniqueBaseStationName:(id)arg1 withBssid:(id)arg2 ;
+(char)launchAUForDevice:(id)arg1 getAUFromAppStore:(char)arg2 ;
+(id)unconfiguredBaseStationName:(unsigned char)arg1 ;
-(NSDictionary *)removedBaseStation;
-(void)assistantCompleteWithResult:(int)arg1 ;
-(void)setRemovedBaseStation:(NSDictionary *)arg1 ;
-(NSWindow *)hostWindow;
-(void)setDelegate:(id<AirPortAssistantControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<AirPortAssistantControllerDelegate>)delegate;
-(void)setViewController:(id)arg1 ;
-(id)viewController;
-(void)setHostWindow:(NSWindow *)arg1 ;
@end

