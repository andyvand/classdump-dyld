/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AOSUI/AOSUI-Structs.h>
@class NSView, MMJSDialog, NSWindow;

@interface MMJSDialogController : NSObject {

	NSView* _parentView;
	MMJSDialog* _mmJSDialog;
	OpaqueJSContextRef _jsContext;

}

@property (assign) OpaqueJSContextRef jsContext;                  //@synthesize jsContext=_jsContext - In the implementation block
@property (retain) MMJSDialog * mmJSDialog;                       //@synthesize mmJSDialog=_mmJSDialog - In the implementation block
@property (retain,readonly) NSWindow * parentWindow; 
-(OpaqueJSContextRef)jsContext;
-(void)setJsContext:(OpaqueJSContextRef)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(MMJSDialog *)mmJSDialog;
-(void)setMmJSDialog:(MMJSDialog *)arg1 ;
-(void)dealloc;
-(NSWindow *)parentWindow;
@end

