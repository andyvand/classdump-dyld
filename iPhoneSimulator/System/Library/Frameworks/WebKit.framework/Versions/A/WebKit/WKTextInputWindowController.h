/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WKTextInputPanel;

@interface WKTextInputWindowController : NSObject {

	WKTextInputPanel* _panel;

}
+(id)sharedTextInputWindowController;
-(char)interpretKeyEvent:(id)arg1 usingLegacyCocoaTextInput:(char)arg2 string:(id*)arg3 ;
-(id)init;
-(id)inputContext;
-(char)hasMarkedText;
-(void)unmarkText;
@end

