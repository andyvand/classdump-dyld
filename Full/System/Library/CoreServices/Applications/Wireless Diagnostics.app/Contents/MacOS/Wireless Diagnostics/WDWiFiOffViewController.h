/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Wireless Diagnostics.app/Contents/MacOS/Wireless Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <Wireless Diagnostics/WDScreenController.h>

@interface WDWiFiOffViewController : NSViewController <WDScreenController> {

	char _wifiLoggingEnabled;
	char _eapolLoggingEnabled;

}
+(id)screenViewName;
-(id)screenTitle;
-(void)loadScreen:(id)arg1 ;
-(void)showScreen;
-(void)unloadScreen;
-(void)onNext:(id)arg1 ;
-(void)onBack:(id)arg1 ;
-(void)awakeFromNib;
@end

